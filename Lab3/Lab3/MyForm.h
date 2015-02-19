#pragma once
#include "cell.h"

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

			 Bitmap^ xmark = gcnew Bitmap("xmark.bmp");
			 Bitmap^ omark = gcnew Bitmap("omark.bmp");
			 Bitmap^ game = gcnew Bitmap("grid.bmp");


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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  buttonClear;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(31, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(445, 458);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(518, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 46);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(566, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 46);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Location = System::Drawing::Point(613, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 46);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->Location = System::Drawing::Point(518, 342);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(42, 45);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button5->Location = System::Drawing::Point(566, 342);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 45);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button6->Location = System::Drawing::Point(613, 342);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 45);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->Location = System::Drawing::Point(519, 393);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 46);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->Location = System::Drawing::Point(566, 393);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 46);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->Location = System::Drawing::Point(613, 393);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 46);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->ForeColor = System::Drawing::Color::White;
			this->buttonClear->Location = System::Drawing::Point(543, 97);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(92, 60);
			this->buttonClear->TabIndex = 10;
			this->buttonClear->Text = L"NEW GAME";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(691, 535);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		int row, col;
		char turn = 'x';
		array<cell^, 2>^ grid;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
				 grid=gcnew array<cell^, 2>(3, 3);
				 g = pictureBox1->CreateGraphics();

				 for (row = 0; row < 3;row++)
				 for (col = 0; col < 3; col++)
					 grid[row, col] = gcnew cell(row, col, '-');

	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 pictureBox1->Refresh();
			 row = 0; col = 0;
			 if (turn == 'x')
			 {
				 grid[row, col]->setStatus('x');
				 turn = 'o';
			 }
			 else
			 {
				 grid[row, col]->setStatus('o');
				 turn = 'x';
			 }
			 DrawGrid();
			
			 
}

private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
			// g->DrawImage(game, 0, 0);
			 //getTurn();
}
};
}
