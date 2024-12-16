#pragma once

namespace 家庭信息管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// CloseConfirm 摘要
	/// </summary>
	public ref class CloseConfirm : public System::Windows::Forms::Form
	{
	public:
		CloseConfirm(void)
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
		~CloseConfirm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ exit_no_button;
	private: System::Windows::Forms::Button^ exit_button_yes;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CloseConfirm::typeid));
			this->exit_no_button = (gcnew System::Windows::Forms::Button());
			this->exit_button_yes = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exit_no_button
			// 
			this->exit_no_button->BackColor = System::Drawing::SystemColors::ControlDark;
			this->exit_no_button->Font = (gcnew System::Drawing::Font(L"微软雅黑", 20));
			this->exit_no_button->Location = System::Drawing::Point(55, 178);
			this->exit_no_button->Name = L"exit_no_button";
			this->exit_no_button->Size = System::Drawing::Size(135, 81);
			this->exit_no_button->TabIndex = 2;
			this->exit_no_button->Text = L"取消";
			this->exit_no_button->UseVisualStyleBackColor = false;
			this->exit_no_button->Click += gcnew System::EventHandler(this, &CloseConfirm::exit_no_button_Click);
			// 
			// exit_button_yes
			// 
			this->exit_button_yes->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->exit_button_yes->Font = (gcnew System::Drawing::Font(L"微软雅黑", 20));
			this->exit_button_yes->Location = System::Drawing::Point(278, 178);
			this->exit_button_yes->Name = L"exit_button_yes";
			this->exit_button_yes->Size = System::Drawing::Size(135, 81);
			this->exit_button_yes->TabIndex = 3;
			this->exit_button_yes->Text = L"确定";
			this->exit_button_yes->UseVisualStyleBackColor = false;
			this->exit_button_yes->Click += gcnew System::EventHandler(this, &CloseConfirm::exit_button_yes_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 20));
			this->label1->Location = System::Drawing::Point(61, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 47);
			this->label1->TabIndex = 4;
			this->label1->Text = L"你真的要退出吗\?";
			// 
			// CloseConfirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(521, 304);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit_button_yes);
			this->Controls->Add(this->exit_no_button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CloseConfirm";
			this->Text = L"退出";
			this->Load += gcnew System::EventHandler(this, &CloseConfirm::CloseConfirm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CloseConfirm_Load(System::Object^ sender, System::EventArgs^ e) {
		printf("%c", 7);
	}
	private: System::Void exit_button_yes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		exit(0);
	}
private: System::Void exit_no_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
