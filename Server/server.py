from prettytable import PrettyTable
import threading
import socket
import time
import os

SERVER = "0.0.0.0"
PORT = 5005
BUFFER = 65535

users = []
connections = []

uptime = time.time()
table = PrettyTable()
table.field_names = ["Username", "IP Address"]

def handler(conn, userInfo):
    while (True):
        try:
            data = conn.recv(BUFFER)
            print(f"{userInfo[0]}: {str(data, 'utf-8')}")

            for connection in connections:
                connection.send(bytes("({}): {}".format(userInfo[0], data.decode()), "utf-8"))
                
            if not data:
                raise Exception
        except:
            print(f"({str(userInfo[0])}) has Disconnected")

            users.remove(userInfo)
            connections.remove(conn)
            conn.close()

            for connection in connections:
                connection.send(bytes("{} has disconnected&{}".format(userInfo[0], ' '.join([user[0] for user in users])), "utf-8"))
            break

        finally:
            if (len(connections) == 0): users.clear()
            
def getInfo():
    while (True):
        try:
            command = input()
            if (command == "clear" or command == "cls"):
                os.system("clear" if os.name == "posix" else "cls")

            elif ("msg" in command):
                for connection in connections:
                    connection.send(bytes("(Server): " + command.split("msg ")[1], "utf-8"))

            elif ("kick" in command):
                client = command.split("kick ")[1]
                for user in users:
                    if (client in user):
                        connections[users.index(user)].close()
            
            elif (command == "clients" or command == "c"):
                for user in users:
                    table.add_row([user[0], user[1]])

                if (len(table._rows) == 0):
                    print("-"*25 + "\n[!] No Clients Connected\n" + "-"*25)
                else:
                    print(table)

                table.clear_rows()

            elif (command == "u" or command == "uptime"):
                print("Server Uptime: {} seconds".format(int(time.time() - uptime)))

        except EOFError:
            print("[!] Close Terminal to Stop Server")
        except:
            pass

def ClientConnect():
    global conn
    
    objSocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    objSocket.bind((SERVER, PORT))
    objSocket.listen(20)

    while (True):
        conn, address = objSocket.accept()
        userInfo = [str(conn.recv(BUFFER), "utf-8")] + [address[0]]

        for user in users:
            if (userInfo[0] in user[0] or user[0] in userInfo[0]):
                conn.send(b"exists")
                conn.close()
                break
        else:
            conn.send(b"nonexists")
            if (conn.recv(BUFFER) == b"received"):
                if (len(users) == 0):
                    conn.send(b"empty")
                else:
                    conn.send(bytes('\r\n'.join([user[0] for user in users]), "utf-8"))
            
            users.append(userInfo)
            t = threading.Thread(target=handler, args=(conn, userInfo))
            t.daemon = True
            t.start()

            t2 = threading.Thread(target=getInfo)
            t2.daemon = True
            t2.start()

            for connection in connections:
                connection.send(bytes("{} has connected&{}".format(userInfo[0], ' '.join([user[0] for user in users])), "utf-8"))

            connections.append(conn)
            print(f"({str(userInfo[0])}) has Connected")

ClientConnect()