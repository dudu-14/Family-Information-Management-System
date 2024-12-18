#pragma once
#include "pch.h"
#include "LoginForm.h"
#include "CloseConfirm.h"

namespace ��ͥ��Ϣ����ϵͳ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainWindow ժҪ
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			OutputDebugString(L"MainWindow������\n");
			printf("�����ڿ�ʼ����...\n");
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
			OutputDebugString(L"MainWindow���ý���\n");
			printf("�����ڼ������\n");
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~MainWindow()
		{
			printf("MainWindow����\n");
			this->Show();
		}
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ exitButton;

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
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"΢���ź�", 15));
			this->loginButton->Location = System::Drawing::Point(160, 96);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(331, 119);
			this->loginButton->TabIndex = 0;
			this->loginButton->Text = L"��¼";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &MainWindow::loginButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Font = (gcnew System::Drawing::Font(L"΢���ź�", 15));
			this->exitButton->Location = System::Drawing::Point(160, 287);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(331, 119);
			this->exitButton->TabIndex = 1;
			this->exitButton->Text = L"�˳�";
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
			this->Text = L"��ͥ��Ϣ����ϵͳ";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainWindow::MainWindow_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void __cdecl exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		printf("�˳���ť�������\n");
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();

	}
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		printf("��¼��ť�������\n");
		this->Hide();
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ShowDialog();
		this->Show();
	}
	private: System::Void MainWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		printf("�����ڹر��¼���������\n");
		this->Show();
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();
		this->Show();
	}
	protected: virtual void OnFormClosing(FormClosingEventArgs^ e) override {
		printf("������ȡ���رգ�");
		e->Cancel = true; // ȡ���ر��¼�
		this->Show();
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();
		this->Show();
		}
	};
}
