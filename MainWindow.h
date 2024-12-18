#pragma once
#include "pch.h"
#include "LoginForm.h"
#include "CloseConfirm.h"

namespace 家庭信息管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainWindow 摘要
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			OutputDebugString(L"MainWindow被调用\n");
			printf("主窗口开始加载...\n");
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			OutputDebugString(L"MainWindow调用结束\n");
			printf("主窗口加载完成\n");
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MainWindow()
		{
			printf("MainWindow析构\n");
			this->Show();
		}
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ exitButton;

	protected:

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
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15));
			this->loginButton->Location = System::Drawing::Point(160, 96);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(331, 119);
			this->loginButton->TabIndex = 0;
			this->loginButton->Text = L"登录";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MainWindow::loginButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15));
			this->exitButton->Location = System::Drawing::Point(160, 287);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(331, 119);
			this->exitButton->TabIndex = 1;
			this->exitButton->Text = L"退出";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &MainWindow::exitButton_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(667, 602);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->loginButton);
			this->Name = L"MainWindow";
			this->Text = L"家庭信息管理系统";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::MainWindow_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void __cdecl exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		printf("退出按钮被点击！\n");
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();

	}
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		printf("登录按钮被点击！\n");
		this->Hide();
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ShowDialog();
		this->Show();
	}
	private: System::Void MainWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		printf("主窗口关闭事件函数！！\n");
		this->Show();
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();
		this->Show();
	}
	protected: virtual void OnFormClosing(FormClosingEventArgs^ e) override {
		printf("主窗口取消关闭！");
		e->Cancel = true; // 取消关闭事件
		this->Show();
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();
		this->Show();
		}
	};
}
