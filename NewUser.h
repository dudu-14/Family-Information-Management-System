#pragma once

namespace ��ͥ��Ϣ����ϵͳ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// NewUser ժҪ
	/// </summary>
	public ref class NewUser : public System::Windows::Forms::Form
	{
	public:
		NewUser(void)
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
		~NewUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_newuser;
	private: System::Windows::Forms::Label^ label_username;
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::Label^ label_password;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Button^ newUserButton;
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			this->label_newuser = (gcnew System::Windows::Forms::Label());
			this->label_username = (gcnew System::Windows::Forms::Label());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->newUserButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_newuser
			// 
			this->label_newuser->AutoSize = true;
			this->label_newuser->Font = (gcnew System::Drawing::Font(L"΢���ź�", 20));
			this->label_newuser->Location = System::Drawing::Point(163, 9);
			this->label_newuser->Name = L"label_newuser";
			this->label_newuser->Size = System::Drawing::Size(119, 60);
			this->label_newuser->TabIndex = 0;
			this->label_newuser->Text = L"ע��";
			// 
			// label_username
			// 
			this->label_username->AutoSize = true;
			this->label_username->Font = (gcnew System::Drawing::Font(L"����", 15));
			this->label_username->Location = System::Drawing::Point(37, 78);
			this->label_username->Name = L"label_username";
			this->label_username->Size = System::Drawing::Size(120, 35);
			this->label_username->TabIndex = 1;
			this->label_username->Text = L"�û���";
			// 
			// textBox_username
			// 
			this->textBox_username->Location = System::Drawing::Point(163, 81);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(281, 31);
			this->textBox_username->TabIndex = 2;
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->Font = (gcnew System::Drawing::Font(L"����", 15));
			this->label_password->Location = System::Drawing::Point(53, 163);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(85, 35);
			this->label_password->TabIndex = 3;
			this->label_password->Text = L"����";
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(163, 163);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(281, 31);
			this->textBox_password->TabIndex = 4;
			// 
			// newUserButton
			// 
			this->newUserButton->Font = (gcnew System::Drawing::Font(L"΢���ź�", 20));
			this->newUserButton->Location = System::Drawing::Point(43, 239);
			this->newUserButton->Name = L"newUserButton";
			this->newUserButton->Size = System::Drawing::Size(376, 107);
			this->newUserButton->TabIndex = 5;
			this->newUserButton->Text = L"�½�";
			this->newUserButton->UseVisualStyleBackColor = true;
			this->newUserButton->Click += gcnew System::EventHandler(this, &NewUser::newUserButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(337, 21);
			this->label1->TabIndex = 6;
			this->label1->Text = L"*�û����м䲻���пո� Ӣ��@��β";
			this->label1->Click += gcnew System::EventHandler(this, &NewUser::label1_Click);
			// 
			// NewUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 385);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->newUserButton);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label_username);
			this->Controls->Add(this->label_newuser);
			this->Name = L"NewUser";
			this->Text = L"ע��";
			this->Load += gcnew System::EventHandler(this, &NewUser::NewUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void newUserButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userName = this->textBox_username->Text;
		String^ passWord = this->textBox_password->Text;
		FILE* fout = fopen("./data/users.txt", "a+");
		if (fout == NULL) {
			printf("�ļ���ʧ�ܣ�");
			return;
		}
		fprintf(fout, "user=%s password=%s\n", userName, passWord);
		fclose(fout);
		MessageBox::Show("ע��ɹ���");
		this->Close();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NewUser_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
