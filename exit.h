#pragma once

namespace 家庭信息管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// exit 摘要
	/// </summary>
	public ref class exit : public System::Windows::Forms::Form
	{
	public:
		exit(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			Visible = false;
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~exit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ exitTextBox;
	private: System::Windows::Forms::TextBox^ exitTextBox2;
	private: System::Windows::Forms::Button^ exitButton_no;
	private: System::Windows::Forms::Button^ exitNutton_yes;
	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(exit::typeid));
			this->exitTextBox = (gcnew System::Windows::Forms::TextBox());
			this->exitTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->exitButton_no = (gcnew System::Windows::Forms::Button());
			this->exitNutton_yes = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exitTextBox
			// 
			this->exitTextBox->Font = (gcnew System::Drawing::Font(L"宋体", 20));
			this->exitTextBox->Location = System::Drawing::Point(42, 27);
			this->exitTextBox->Name = L"exitTextBox";
			this->exitTextBox->Size = System::Drawing::Size(100, 61);
			this->exitTextBox->TabIndex = 0;
			this->exitTextBox->Text = L"\?";
			this->exitTextBox->TextChanged += gcnew System::EventHandler(this, &exit::exitTextBox_TextChanged);
			// 
			// exitTextBox2
			// 
			this->exitTextBox2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 20));
			this->exitTextBox2->Location = System::Drawing::Point(148, 27);
			this->exitTextBox2->Name = L"exitTextBox2";
			this->exitTextBox2->Size = System::Drawing::Size(362, 69);
			this->exitTextBox2->TabIndex = 1;
			this->exitTextBox2->Text = L"你真的要退出吗";
			this->exitTextBox2->TextChanged += gcnew System::EventHandler(this, &exit::textBox2_TextChanged);
			// 
			// exitButton_no
			// 
			this->exitButton_no->BackColor = System::Drawing::SystemColors::ControlDark;
			this->exitButton_no->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18));
			this->exitButton_no->Location = System::Drawing::Point(53, 141);
			this->exitButton_no->Name = L"exitButton_no";
			this->exitButton_no->Size = System::Drawing::Size(173, 129);
			this->exitButton_no->TabIndex = 3;
			this->exitButton_no->Text = L"取消";
			this->exitButton_no->UseVisualStyleBackColor = false;
			// 
			// exitNutton_yes
			// 
			this->exitNutton_yes->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->exitNutton_yes->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18));
			this->exitNutton_yes->Location = System::Drawing::Point(274, 141);
			this->exitNutton_yes->Name = L"exitNutton_yes";
			this->exitNutton_yes->Size = System::Drawing::Size(173, 129);
			this->exitNutton_yes->TabIndex = 4;
			this->exitNutton_yes->Text = L"确定";
			this->exitNutton_yes->UseVisualStyleBackColor = false;
			// 
			// exit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 282);
			this->Controls->Add(this->exitNutton_yes);
			this->Controls->Add(this->exitButton_no);
			this->Controls->Add(this->exitTextBox2);
			this->Controls->Add(this->exitTextBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"exit";
			this->Text = L"退出";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exitTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
