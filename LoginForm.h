#pragma once
#include "NewUser.h"
#include "MainInterface.h"

namespace 家庭信息管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LoginForm 摘要
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
	private: System::Windows::Forms::Button^ 返回按钮;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ tips1;
	private: System::Windows::Forms::Label^ tips2;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_username = (gcnew System::Windows::Forms::Label());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->返回按钮 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tips1 = (gcnew System::Windows::Forms::Label());
			this->tips2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_username
			// 
			this->label_username->AutoSize = true;
			this->label_username->Font = (gcnew System::Drawing::Font(L"宋体", 15));
			this->label_username->Location = System::Drawing::Point(47, 77);
			this->label_username->Name = L"label_username";
			this->label_username->Size = System::Drawing::Size(120, 35);
			this->label_username->TabIndex = 0;
			this->label_username->Text = L"用户名";
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
			this->label_password->Font = (gcnew System::Drawing::Font(L"宋体", 15));
			this->label_password->Location = System::Drawing::Point(61, 163);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(85, 35);
			this->label_password->TabIndex = 2;
			this->label_password->Text = L"密码";
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
			this->loginButton->Font = (gcnew System::Drawing::Font(L"微软雅黑", 20));
			this->loginButton->Location = System::Drawing::Point(67, 234);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(376, 107);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"登录";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
			// 
			// 返回按钮
			// 
			this->返回按钮->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->返回按钮->Font = (gcnew System::Drawing::Font(L"宋体", 10));
			this->返回按钮->Location = System::Drawing::Point(18, 3);
			this->返回按钮->Name = L"返回按钮";
			this->返回按钮->Size = System::Drawing::Size(87, 55);
			this->返回按钮->TabIndex = 5;
			this->返回按钮->Text = L"返回";
			this->返回按钮->UseVisualStyleBackColor = false;
			this->返回按钮->Click += gcnew System::EventHandler(this, &LoginForm::返回按钮_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9));
			this->button1->Location = System::Drawing::Point(97, 366);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(323, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"没有账号？注册一个。";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// tips1
			// 
			this->tips1->AutoSize = true;
			this->tips1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tips1->Font = (gcnew System::Drawing::Font(L"宋体", 9));
			this->tips1->Location = System::Drawing::Point(205, 120);
			this->tips1->Name = L"tips1";
			this->tips1->Size = System::Drawing::Size(275, 21);
			this->tips1->TabIndex = 7;
			this->tips1->Text = L"输入你的用户名，比如admin";
			// 
			// tips2
			// 
			this->tips2->AutoSize = true;
			this->tips2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tips2->Font = (gcnew System::Drawing::Font(L"宋体", 9));
			this->tips2->Location = System::Drawing::Point(205, 197);
			this->tips2->Name = L"tips2";
			this->tips2->Size = System::Drawing::Size(265, 21);
			this->tips2->TabIndex = 8;
			this->tips2->Text = L"输入你的密码，比如123456";
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
			this->Controls->Add(this->返回按钮);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label_username);
			this->Name = L"LoginForm";
			this->Text = L"登录";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		printf("登录Window->loginButton_Click\n");
		String^ userName = this->textBox_username->Text;
		String^ passWord = this->textBox_password->Text;
		Console::Write("输入的用户名：" + userName);
		Console::Write("   输入的密码：" + passWord);
		Console::WriteLine();
		FILE* fin = fopen("./data/users.txt", "r");
		if (fin == NULL)
		{
			MessageBox::Show("文件打开失败！是不是没有注册？找不到文件啊:(", "错误", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string thisUserName = msclr::interop::marshal_as<std::string>(userName);
		std::string thisPassWord = msclr::interop::marshal_as<std::string>(passWord);
		std::string file_userName;
		std::string file_passWord;
		while (fscanf(fin, "username=%s password=%s", file_userName.data(), file_passWord.data()) != EOF)
		{
			printf("文件 name %s password %s\n", file_userName.c_str(), file_passWord.c_str());
			const char* file_username_const = file_userName.data();
			const char* file_password_const = file_passWord.data();
			if (strcmp(file_userName.c_str(), thisUserName.c_str()) == 0 && strcmp(file_passWord.c_str(), thisPassWord.c_str()) == 0)
			{
				fclose(fin);
				MessageBox::Show("登录成功！", "成功", MessageBoxButtons::OK, MessageBoxIcon::Information);
				printf("登录成功！\n");
				MainInterface^ mainInterface = gcnew MainInterface(userName);
				mainInterface->Show();
				this->Close();
				return;
			}
#ifdef _DEBUG
			Sleep(100);
#endif
		}
		MessageBox::Show("用户名或密码错误！", "错误", MessageBoxButtons::OK, MessageBoxIcon::Error);
		printf("用户名或密码错误！\n");
	}
private: System::Void 返回按钮_Click(System::Object^ sender, System::EventArgs^ e) {
	printf("返回Button被点击\n");
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	printf("注册Button被点击\n");
	NewUser^ newUser = gcnew NewUser();
	newUser->Show();
}
};
}
