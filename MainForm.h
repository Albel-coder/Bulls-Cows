#pragma once
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <string>

int InputNumber = 0;
int CountDigit = 0;
int LineNumber = 1;
int Bulls = 0;
int Cows = 0;
bool Clear = false;
int Digits[4] = {0};

int generateFourDigitUniqueNumber() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::mt19937 gen(seed);

	std::vector<int> digits = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::shuffle(digits.begin(), digits.end(), gen);

	int firstDigitPos = 0;
	while (digits[firstDigitPos] == 0) {
		firstDigitPos++;
		if (firstDigitPos >= digits.size()) {
			std::shuffle(digits.begin(), digits.end(), gen);
			firstDigitPos = 0;
		}
	}

	int number = digits[firstDigitPos] * 1000;
	digits.erase(digits.begin() + firstDigitPos);

	for (int i = 0; i < 3; ++i) {
		number += digits[i] * std::pow(10, 2 - i);
	}

	return number;
}

bool containsChar(const std::string& str, char ch) 
{
	return str.find(ch) != std::string::npos;
}

int Number = generateFourDigitUniqueNumber();
std::string StrNumber = std::to_string(Number);

namespace BullsCows {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Result_label;

	private: System::Windows::Forms::Button^ Send_button;
	private: System::Windows::Forms::Button^ Backspace_button;
	private: System::Windows::Forms::RichTextBox^ Result_prediction;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button11;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Result_label = (gcnew System::Windows::Forms::Label());
			this->Send_button = (gcnew System::Windows::Forms::Button());
			this->Backspace_button = (gcnew System::Windows::Forms::Button());
			this->Result_prediction = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(115, 451);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 65);
			this->button4->TabIndex = 3;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(754, 451);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 65);
			this->button10->TabIndex = 12;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(683, 451);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 65);
			this->button9->TabIndex = 11;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(612, 451);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 65);
			this->button8->TabIndex = 10;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(541, 451);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 65);
			this->button7->TabIndex = 9;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(470, 451);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 65);
			this->button6->TabIndex = 8;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(399, 451);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 65);
			this->button5->TabIndex = 7;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(328, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 65);
			this->button3->TabIndex = 6;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(257, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 65);
			this->button2->TabIndex = 5;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(186, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 65);
			this->button1->TabIndex = 4;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::BtnNumber_Click);
			// 
			// Result_label
			// 
			this->Result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result_label->Location = System::Drawing::Point(368, 344);
			this->Result_label->Name = L"Result_label";
			this->Result_label->Size = System::Drawing::Size(298, 64);
			this->Result_label->TabIndex = 13;
			this->Result_label->Text = L"0";
			this->Result_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Send_button
			// 
			this->Send_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Send_button->Location = System::Drawing::Point(835, 377);
			this->Send_button->Name = L"Send_button";
			this->Send_button->Size = System::Drawing::Size(135, 65);
			this->Send_button->TabIndex = 15;
			this->Send_button->Text = L"Проверить";
			this->Send_button->UseVisualStyleBackColor = true;
			this->Send_button->Click += gcnew System::EventHandler(this, &MainForm::Send_button_Click);
			// 
			// Backspace_button
			// 
			this->Backspace_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Backspace_button->Location = System::Drawing::Point(835, 451);
			this->Backspace_button->Name = L"Backspace_button";
			this->Backspace_button->Size = System::Drawing::Size(135, 65);
			this->Backspace_button->TabIndex = 16;
			this->Backspace_button->Text = L"Удалить";
			this->Backspace_button->UseVisualStyleBackColor = true;
			this->Backspace_button->Click += gcnew System::EventHandler(this, &MainForm::Backspace_button_Click);
			// 
			// Result_prediction
			// 
			this->Result_prediction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Result_prediction->Location = System::Drawing::Point(312, 49);
			this->Result_prediction->Name = L"Result_prediction";
			this->Result_prediction->ReadOnly = true;
			this->Result_prediction->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->Result_prediction->Size = System::Drawing::Size(400, 280);
			this->Result_prediction->TabIndex = 17;
			this->Result_prediction->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(307, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Результат:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 15);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(275, 20);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Очищать после ввода автоматически";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(835, 286);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(135, 42);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Сдаться";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Result_prediction);
			this->Controls->Add(this->Backspace_button);
			this->Controls->Add(this->Send_button);
			this->Controls->Add(this->Result_label);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bulls&Cows";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	   private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (CountDigit < 4)
		   {
			   Button^ button = safe_cast<Button^>(sender);	 
			   int tmp = System::Convert::ToInt32(button->Text);
			   for (int i = 0; i < CountDigit; i++)
			   {
				   if (Digits[i] == tmp)
				   {
					   return;
				   }
			   }
			   Digits[CountDigit] = tmp;
			   InputNumber *= 10;
			   InputNumber += tmp;
			   Result_label->Text = System::Convert::ToString(InputNumber);
			   if (InputNumber)
			   {
				   CountDigit++;
			   }
		   }
	   }
private: System::Void Backspace_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CountDigit > 0)
	{
		CountDigit--;
		InputNumber /= 10;
		Result_label->Text = System::Convert::ToString(InputNumber);
	}
}
private: System::Void Send_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Bulls != 4)
	{
		std::string Pre = std::to_string(InputNumber);
		Cows = 0; Bulls = 0;
		for (int i = 0; i < 4; i++)
		{
			if (StrNumber[i] == Pre[i])
			{
				Bulls++;
			}
			else if (containsChar(StrNumber, Pre[i]))
			{
				Cows++;
			}
		}
		Result_prediction->Text += LineNumber + ". " + InputNumber + " - Bulls: " + Bulls + " Cows: " + Cows + "\n";
		if (Bulls == 4)
		{
			Result_prediction->Text += "Ты выиграл!!!\n";
		}
		LineNumber++;
	}
	if (Clear)
	{
		Result_label->Text = "0";
		InputNumber = 0;
		CountDigit = 0;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Clear)
	{
		Clear = false;
	}
	else
	{
		Clear = true;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Bulls = 4;
	Result_prediction->Text += "Ответ: " + System::Convert::ToString(Number);
}
};
}