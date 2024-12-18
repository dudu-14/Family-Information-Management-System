#pragma once
#include "CloseConfirm.h"

namespace 家庭信息管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainInterface 摘要
	/// </summary>
	public ref class MainInterface : public System::Windows::Forms::Form
	{
	public:
		MainInterface(String^ this_username)
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
		~MainInterface()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MainInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 428);
			this->Name = L"MainInterface";
			this->Text = L"家庭信息管理系统-主界面";
			this->Load += gcnew System::EventHandler(this, &MainInterface::MainInterface_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainInterface_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	protected: virtual void OnFormClosing(FormClosingEventArgs^ e) override {
		printf("主菜单取消关闭！");
		e->Cancel = true; // 取消关闭事件
		this->Show();
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();
		this->Show();
	}
	};
}
