#pragma once
#include "NewUser.h"
#include "MainInterface.h"

namespace ��ͥ��Ϣ����ϵͳ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LoginForm ժҪ
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_username;
	private: System::Windows::Forms::TextBox^ textBox_username;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label_password;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ ���ذ�ť;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ tips1;
	private: System::Windows::Forms::Label^ tips2;


	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_username = (gcnew System::Windows::Forms::Label());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->���ذ�ť = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tips1 = (gcnew System::Windows::Forms::Label());
			this->tips2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_username
			// 
			this->label_username->AutoSize = true;
			this->label_username->Font = (gcnew System::Drawing::Font(L"����", 15));
			this->label_username->Location = System::Drawing::Point(47, 77);
			this->label_username->Name = L"label_username";
			this->label_username->Size = System::Drawing::Size(120, 35);
			this->label_username->TabIndex = 0;
			this->label_username->Text = L"�û���";
			// 
			// textBox_username
			// 
			this->textBox_username->Location = System::Drawing::Point(199, 86);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(281, 31);
			this->textBox_username->TabIndex = 1;
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->Font = (gcnew System::Drawing::Font(L"����", 15));
			this->label_password->Location = System::Drawing::Point(61, 163);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(85, 35);
			this->label_password->TabIndex = 2;
			this->label_password->Text = L"����";
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(199, 163);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(281, 31);
			this->textBox_password->TabIndex = 3;
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"΢���ź�", 20));
			this->loginButton->Location = System::Drawing::Point(67, 234);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(376, 107);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"��¼";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
			// 
			// ���ذ�ť
			// 
			this->���ذ�ť->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->���ذ�ť->Font = (gcnew System::Drawing::Font(L"����", 10));
			this->���ذ�ť->Location = System::Drawing::Point(18, 3);
			this->���ذ�ť->Name = L"���ذ�ť";
			this->���ذ�ť->Size = System::Drawing::Size(87, 55);
			this->���ذ�ť->TabIndex = 5;
			this->���ذ�ť->Text = L"����";
			this->���ذ�ť->UseVisualStyleBackColor = false;
			this->���ذ�ť->Click += gcnew System::EventHandler(this, &LoginForm::���ذ�ť_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 9));
			this->button1->Location = System::Drawing::Point(97, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(323, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"û���˺ţ�ע��һ����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// tips1
			// 
			this->tips1->AutoSize = true;
			this->tips1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tips1->Font = (gcnew System::Drawing::Font(L"����", 9));
			this->tips1->Location = System::Drawing::Point(205, 120);
			this->tips1->Name = L"tips1";
			this->tips1->Size = System::Drawing::Size(275, 21);
			this->tips1->TabIndex = 7;
			this->tips1->Text = L"��������û���������admin";
			// 
			// tips2
			// 
			this->tips2->AutoSize = true;
			this->tips2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tips2->Font = (gcnew System::Drawing::Font(L"����", 9));
			this->tips2->Location = System::Drawing::Point(205, 197);
			this->tips2->Name = L"tips2";
			this->tips2->Size = System::Drawing::Size(265, 21);
			this->tips2->TabIndex = 8;
			this->tips2->Text = L"����������룬����123456";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(544, 526);
			this->Controls->Add(this->tips2);
			this->Controls->Add(this->tips1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->���ذ�ť);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label_username);
			this->Name = L"LoginForm";
			this->Text = L"��¼";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		printf("��¼Window->loginButton_Click\n");
		String^ userName = this->textBox_username->Text;
		String^ passWord = this->textBox_password->Text;
		Console::Write("������û�����" + userName);
		Console::Write("   ��������룺" + passWord);
		Console::WriteLine();
		FILE* fin = fopen("./data/users.txt", "r");
		if (fin == NULL)
		{
			MessageBox::Show("�ļ���ʧ�ܣ��ǲ���û��ע�᣿�Ҳ����ļ���:(", "����", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string thisUserName = msclr::interop::marshal_as<std::string>(userName);
		std::string thisPassWord = msclr::interop::marshal_as<std::string>(passWord);
		std::string file_userName;
		std::string file_passWord;
		while (fscanf(fin, "username=%s password=%s", file_userName.data(), file_passWord.data()) != EOF)
		{
			printf("�ļ� name %s password %s\n", file_userName.c_str(), file_passWord.c_str());
			const char* file_username_const = file_userName.data();
			const char* file_password_const = file_passWord.data();
			if (strcmp(file_userName.c_str(), thisUserName.c_str()) == 0 && strcmp(file_passWord.c_str(), thisPassWord.c_str()) == 0)
			{
				fclose(fin);
				MessageBox::Show("��¼�ɹ���", "�ɹ�", MessageBoxButtons::OK, MessageBoxIcon::Information);
				printf("��¼�ɹ���\n");
				MainInterface^ mainInterface = gcnew MainInterface(userName);
				mainInterface->Show();
				this->Close();
				return;
			}
#ifdef _DEBUG
			Sleep(100);
#endif
		}
		MessageBox::Show("�û������������", "����", MessageBoxButtons::OK, MessageBoxIcon::Error);
		printf("�û������������\n");
	}
private: System::Void ���ذ�ť_Click(System::Object^ sender, System::EventArgs^ e) {
	printf("����Button�����\n");
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	printf("ע��Button�����\n");
	NewUser^ newUser = gcnew NewUser();
	newUser->Show();
}
};
}
