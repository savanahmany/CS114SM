#pragma once
#include"icon.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:				 
		Graphics^g;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

			 Bitmap^ ncsu = gcnew Bitmap("wolf.bmp");
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Courier New", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(509, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"VISIBILITY";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(545, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Movement:";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(556, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Right";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(556, 243);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Left";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(556, 299);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 38);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Up";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(556, 353);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 40);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Down";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(24, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(459, 376);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(685, 444);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int xmove=20, ymove=20;
		bool vis = false;
		icon bmp;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 g = pictureBox1->CreateGraphics();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Refresh();
				 bmp.set_x(xmove);
				 g->DrawImage(ncsu, bmp.get_x(), bmp.get_y());
				 vis = false;

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Refresh();
				 bmp.set_x(xmove*(-1));
				 g->DrawImage(ncsu, bmp.get_x(), bmp.get_y());
				 vis = false;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Refresh();
				 bmp.set_y(ymove*(-1));
				 g->DrawImage(ncsu, bmp.get_x(), bmp.get_y());
				 vis = false;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Refresh();
				 bmp.set_y(ymove);
				 g->DrawImage(ncsu, bmp.get_x(), bmp.get_y());
				 vis = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (vis == true)
				 {
					 g->DrawImage(ncsu, bmp.get_x(), bmp.get_y());
					 vis = false;
				 }
				 else
				 {
					 pictureBox1->Image = nullptr;
					 Refresh();
					 vis = true;
				 }
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
}
};
}
