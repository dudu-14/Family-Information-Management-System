#pragma once
#include "CloseConfirm.h"

namespace ��ͥ��Ϣ����ϵͳ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainInterface ժҪ
	/// </summary>
	public ref class MainInterface : public System::Windows::Forms::Form
	{
	public:
		MainInterface(String^ this_username)
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
		~MainInterface()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MainInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 428);
			this->Name = L"MainInterface";
			this->Text = L"��ͥ��Ϣ����ϵͳ-������";
			this->Load += gcnew System::EventHandler(this, &MainInterface::MainInterface_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainInterface_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	protected: virtual void OnFormClosing(FormClosingEventArgs^ e) override {
		printf("���˵�ȡ���رգ�");
		e->Cancel = true; // ȡ���ر��¼�
		this->Show();
		CloseConfirm^ closeConfirm = gcnew CloseConfirm();
		closeConfirm->ShowDialog();
		this->Show();
	}
	};
}
