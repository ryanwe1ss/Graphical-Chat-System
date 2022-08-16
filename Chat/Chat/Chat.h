#pragma once

namespace Chat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Chat
	/// </summary>
	public ref class Chat : public System::Windows::Forms::Form
	{
	public:
		Chat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Chat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label5;








	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Chat::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label1->Location = System::Drawing::Point(13, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Status:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label2->Location = System::Drawing::Point(13, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label3->Location = System::Drawing::Point(13, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Server IP:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(135, 46);
			this->textBox1->MaxLength = 9;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 23);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(135, 80);
			this->textBox2->MaxLength = 15;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 23);
			this->textBox2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(130, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Not Connected";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->Location = System::Drawing::Point(18, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 37);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Chat::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(112, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 37);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Disconnect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Chat::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::ForestGreen;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(814, 479);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 89);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Chat::button3_Click);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label7->Location = System::Drawing::Point(17, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(251, 2);
			this->label7->TabIndex = 14;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Location = System::Drawing::Point(18, 191);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(251, 377);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Properties";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Blue;
			this->button4->Location = System::Drawing::Point(171, 37);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 25);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Default";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Chat::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Desktop;
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(80, 37);
			this->textBox5->MaxLength = 5;
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(85, 25);
			this->textBox5->TabIndex = 19;
			this->textBox5->Text = L"5005";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label6->Location = System::Drawing::Point(17, 37);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 25);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Port:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(292, 26);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(516, 447);
			this->richTextBox1->TabIndex = 20;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->ForeColor = System::Drawing::Color::White;
			this->richTextBox2->Location = System::Drawing::Point(292, 479);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox2->Size = System::Drawing::Size(516, 89);
			this->richTextBox2->TabIndex = 21;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::Color::Black;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox3->ForeColor = System::Drawing::Color::White;
			this->richTextBox3->Location = System::Drawing::Point(814, 44);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox3->Size = System::Drawing::Size(147, 429);
			this->richTextBox3->TabIndex = 22;
			this->richTextBox3->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(841, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 25);
			this->label5->TabIndex = 23;
			this->label5->Text = L"- Online -";
			// 
			// Chat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(973, 580);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Chat";
			this->Text = L"AnonChat";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Thread^ listenThread;
		String^ username;
		int maxAttempts = 5;
		int attempts = 1;

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			username = textBox1->Text->Replace(" ", "")->ToLower();
			if (username->Length <= 3) {
				MessageBox::Show
				("Username Must Contain at 4 Least Characters",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation
				
				); return;
			}
			if (username == "server" || username == "admin") {
				MessageBox::Show
				("Username is Not Allowed for Use",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation

				); return;
			}
			DisplayConnecting();

			listenThread = gcnew Thread(gcnew ThreadStart(this, &Chat::ServerConnect));
			listenThread->Start();
		}

		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			DisplayNotConnected();
			closesocket(objSocket);
			WSACleanup();
			listenThread->Abort();
		}

		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			send(richTextBox2->Text);
			richTextBox2->Clear();
		}

		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			textBox5->Text = "5005";
		}

		void DisplayConnecting()
		{
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox5->Enabled = false;
			button1->Enabled = false;
			button2->Enabled = true;
			button4->Enabled = false;

			label4->ForeColor = Color::Orange;
			label4->Text = "Connecting...";
			richTextBox1->Clear();
		}

		void DisplayConnected()
		{
			label4->ForeColor = Color::Green;
			label4->Text = "Connected";
			button3->Enabled = true;
		}

		void DisplayNotConnected()
		{
			attempts = 1;
			label4->ForeColor = Color::Red;
			label4->Text = "Not Connected";
			richTextBox3->Clear();

			button1->Enabled = true;
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox5->Enabled = true;
			button4->Enabled = true;

			button2->Enabled = false;
			button3->Enabled = false;
		}

		void ServerConnect()
		{
			String^ ip_address = textBox2->Text;
			unsigned int port = UInt16::Parse(textBox5->Text);

			WSADATA wsdata;
			sockaddr_in client;
			struct in_addr address;

			if (WSAStartup(MAKEWORD(2, 2), &wsdata) != 0) exit(1);
			address.s_addr = *(u_long*)gethostbyname(static_cast<const char*>
				(Marshal::StringToHGlobalAnsi(ip_address).ToPointer()))->h_addr_list[0];

			objSocket = socket(AF_INET, SOCK_STREAM, 0);
			client.sin_family = AF_INET;
			client.sin_port = htons(port);
			client.sin_addr.s_addr = inet_addr(inet_ntoa(address));

			if (connect(objSocket, (sockaddr*)&client, sizeof(client)) == SOCKET_ERROR) {
				label4->Text = "Connecting... " + attempts.ToString();
				if (attempts == maxAttempts) {
					MessageBox::Show
					("Unable to Connect to Server after " + maxAttempts.ToString() + " Attempts",
						"Error",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error
					);
					button2->PerformClick();
					return;
				}
				attempts++;
				Sleep(1000);
				ServerConnect();
			}
			send(username);
			if (recv() == "exists") {
				MessageBox::Show(
					"Username Already Exists or is Similar",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error
				);
				button2->PerformClick();
				return;
			}
			else {
				send("received");
				String^ allUsers = gcnew String(recv().data());
				if (allUsers != "empty") {
					richTextBox3->AppendText(allUsers);
				
				} DisplayConnected();
			}

			while (true)
			{
				String^ buf = gcnew String(recv().data());
				String^ recvData = buf->Split('&')[0];

				if (recvData == "recv_error") {
					button2->PerformClick();
					break;
				}

				if (recvData->StartsWith("(Server):")) {
					richTextBox1->SelectionColor = Color::DeepSkyBlue;
				}
				else if (recvData->Contains("has connected")) {
					richTextBox1->SelectionColor = Color::Green;

					String^ users = buf->Split('&')[1]->Replace(username, "");
					richTextBox3->Clear();
					for each (String ^ user in users->Split(' ')) {
						if (user->Length >= 3) {
							richTextBox3->AppendText(user + "\n");
						}
					}
				}
				else if (recvData->Contains("has disconnected")) {
					richTextBox1->SelectionColor = Color::Red;

					String^ users = buf->Split('&')[1]->Replace(username, "");
					richTextBox3->Clear();
					for each (String ^ user in users->Split(' ')) {
						if (user->Length >= 3) {
							richTextBox3->AppendText(user + "\n");
						}
					}
				}
				else if (!recvData->Contains(username)) {
					richTextBox1->SelectionColor = Color::Orange;
				}
				else {
					recvData = recvData->Replace(username, "You");
					richTextBox1->SelectionColor = Color::White;
				}
				richTextBox1->AppendText(recvData + "\r\n");
			}
		}
	};
}