#pragma once

namespace binaryTree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ WebForm
	/// </summary>
	public ref class WebForm : public System::Windows::Forms::Form
	{
	public:
		String^ path;
		WebForm(String^ str)
		{
			InitializeComponent();
			path = str;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~WebForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(654, 421);
			this->webBrowser1->TabIndex = 0;
			// 
			// WebForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 421);
			this->Controls->Add(this->webBrowser1);
			this->MinimumSize = System::Drawing::Size(502, 316);
			this->Name = L"WebForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HTML файл";
			this->Shown += gcnew System::EventHandler(this, &WebForm::WebForm_Shown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void WebForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		if (path == "")
		{
			openFileDialog1->Filter = "Html files (*.html) | *.html|All files (*.*)|*.*";
			if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
				webBrowser1->Navigate(openFileDialog1->FileName);
			}
			else Close();
		}
		else webBrowser1->Navigate(path);
	}
	};
}
