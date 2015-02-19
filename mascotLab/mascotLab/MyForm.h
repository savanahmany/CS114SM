#pragma once

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
		Bitmap^ bmp = gcnew Bitmap("ncsu.bmp");
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
	private: System::Windows::Forms::Panel^  panel1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(356, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 59);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show Icon";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(35, 65);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(292, 290);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 437);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		bool vis = false;
		int x = 0, y = 0;


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 g = panel1->CreateGraphics();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (vis == true)
				vis = false;
				else vis = true;
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 if (vis == true)
					 g->DrawImage(bmp, x, y);
				 else Refresh();
				 //add code here when i learn how to erase image
	}
};
}
