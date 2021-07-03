#pragma once

namespace binaryTree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PaintingForm
	/// </summary>
	public ref class PaintingForm : public System::Windows::Forms::Form
	{
	public:
		PaintingForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PaintingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ takenPen_button;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::Button^ downloadImage_button;
	private: System::Windows::Forms::Button^ saveImage_button;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->takenPen_button = (gcnew System::Windows::Forms::Button());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->downloadImage_button = (gcnew System::Windows::Forms::Button());
			this->saveImage_button = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(2, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(650, 378);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintingForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintingForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintingForm::pictureBox1_MouseUp);
			// 
			// takenPen_button
			// 
			this->takenPen_button->Location = System::Drawing::Point(2, 12);
			this->takenPen_button->Name = L"takenPen_button";
			this->takenPen_button->Size = System::Drawing::Size(91, 23);
			this->takenPen_button->TabIndex = 1;
			this->takenPen_button->Text = L"Взять кисть";
			this->takenPen_button->UseVisualStyleBackColor = true;
			this->takenPen_button->Click += gcnew System::EventHandler(this, &PaintingForm::takenPen_button_Click);
			// 
			// clear_button
			// 
			this->clear_button->Location = System::Drawing::Point(99, 12);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(70, 23);
			this->clear_button->TabIndex = 2;
			this->clear_button->Text = L"Очистить";
			this->clear_button->UseVisualStyleBackColor = true;
			this->clear_button->Click += gcnew System::EventHandler(this, &PaintingForm::clear_button_Click);
			// 
			// downloadImage_button
			// 
			this->downloadImage_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->downloadImage_button->Location = System::Drawing::Point(344, 12);
			this->downloadImage_button->Name = L"downloadImage_button";
			this->downloadImage_button->Size = System::Drawing::Size(151, 23);
			this->downloadImage_button->TabIndex = 3;
			this->downloadImage_button->Text = L"Загрузить изображение";
			this->downloadImage_button->UseVisualStyleBackColor = true;
			this->downloadImage_button->Click += gcnew System::EventHandler(this, &PaintingForm::downloadImage_button_Click);
			// 
			// saveImage_button
			// 
			this->saveImage_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->saveImage_button->Location = System::Drawing::Point(501, 12);
			this->saveImage_button->Name = L"saveImage_button";
			this->saveImage_button->Size = System::Drawing::Size(151, 23);
			this->saveImage_button->TabIndex = 4;
			this->saveImage_button->Text = L"Сохранить изображение";
			this->saveImage_button->UseVisualStyleBackColor = true;
			this->saveImage_button->Click += gcnew System::EventHandler(this, &PaintingForm::saveImage_button_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// PaintingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 421);
			this->Controls->Add(this->saveImage_button);
			this->Controls->Add(this->downloadImage_button);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->takenPen_button);
			this->Controls->Add(this->pictureBox1);
			this->MinimumSize = System::Drawing::Size(502, 316);
			this->Name = L"PaintingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Рисование";
			this->Resize += gcnew System::EventHandler(this, &PaintingForm::PaintingForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool Draw = false;
		Bitmap^ bmp;
		bool penTakenIs = false;
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (penTakenIs == true) {
			Graphics^ graph = Graphics::FromImage(pictureBox1->Image);
			if (Draw == true) {
				graph->FillEllipse(Brushes::DarkCyan, e->X, e->Y, 10, 10);
				pictureBox1->Refresh();
			}
		}
		else return;
	}

	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Draw = true;
	}

	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Draw = false;
	}

	private: System::Void takenPen_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (penTakenIs == false) {
			bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			pictureBox1->Image = bmp;
			Graphics^ graph = Graphics::FromImage(pictureBox1->Image);
			graph->Clear(Color::White);
			penTakenIs = true;
		}
		else return;
	}

	private: System::Void clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
		bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		pictureBox1->Image = bmp;
		Graphics^ graph = Graphics::FromImage(pictureBox1->Image);
		graph->Clear(Color::White);
	}

	private: System::Void downloadImage_button_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Title = "Открыть изображение";
		openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.GIF|*.BMP;*.JPG;*.GIF|All files(*.*)|*.*";
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		}
	}

	private: System::Void saveImage_button_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Title = "Сохранить изображение";
		saveFileDialog1->Filter = "Image File(*.BMP)|*.BMP";
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			bmp->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
		}
	}

	private: System::Void PaintingForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		bmp = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		pictureBox1->Image = bmp;
	}

};
}
