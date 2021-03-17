#pragma once

namespace kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnback;
	private: System::Windows::Forms::Button^ btnc;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ text;
	private: System::Windows::Forms::Button^ btnce;
	private: System::Windows::Forms::Button^ btnchange;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnplus;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnminus;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnmultiple;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btndot;
	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btndivade;




















	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->btnc = (gcnew System::Windows::Forms::Button());
			this->text = (gcnew System::Windows::Forms::TextBox());
			this->btnce = (gcnew System::Windows::Forms::Button());
			this->btnchange = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnminus = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnmultiple = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btndivade = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnback
			// 
			this->btnback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnback->Location = System::Drawing::Point(8, 71);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(80, 80);
			this->btnback->TabIndex = 0;
			this->btnback->Text = L"←";
			this->btnback->UseVisualStyleBackColor = true;
			this->btnback->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// btnc
			// 
			this->btnc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnc->Location = System::Drawing::Point(94, 71);
			this->btnc->Name = L"btnc";
			this->btnc->Size = System::Drawing::Size(80, 80);
			this->btnc->TabIndex = 0;
			this->btnc->Text = L"C";
			this->btnc->UseVisualStyleBackColor = true;
			this->btnc->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// text
			// 
			this->text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->text->Location = System::Drawing::Point(5, 12);
			this->text->Multiline = true;
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(340, 53);
			this->text->TabIndex = 1;
			this->text->Text = L"0";
			this->text->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnce
			// 
			this->btnce->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnce->Location = System::Drawing::Point(180, 71);
			this->btnce->Name = L"btnce";
			this->btnce->Size = System::Drawing::Size(80, 80);
			this->btnce->TabIndex = 0;
			this->btnce->Text = L"CE";
			this->btnce->UseVisualStyleBackColor = true;
			this->btnce->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnchange
			// 
			this->btnchange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnchange->Location = System::Drawing::Point(266, 71);
			this->btnchange->Name = L"btnchange";
			this->btnchange->Size = System::Drawing::Size(80, 80);
			this->btnchange->TabIndex = 0;
			this->btnchange->Text = L"±";
			this->btnchange->UseVisualStyleBackColor = true;
			this->btnchange->Click += gcnew System::EventHandler(this, &MyForm::btnChange_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn7->Location = System::Drawing::Point(8, 157);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(80, 80);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn8->Location = System::Drawing::Point(94, 157);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(80, 80);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn9->Location = System::Drawing::Point(180, 157);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(80, 80);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnplus
			// 
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnplus->Location = System::Drawing::Point(266, 157);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(80, 80);
			this->btnplus->TabIndex = 0;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = true;
			this->btnplus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn4->Location = System::Drawing::Point(8, 243);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(80, 80);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn5->Location = System::Drawing::Point(94, 243);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(80, 80);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn6->Location = System::Drawing::Point(180, 243);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(80, 80);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnminus
			// 
			this->btnminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnminus->Location = System::Drawing::Point(266, 243);
			this->btnminus->Name = L"btnminus";
			this->btnminus->Size = System::Drawing::Size(80, 80);
			this->btnminus->TabIndex = 0;
			this->btnminus->Text = L"-";
			this->btnminus->UseVisualStyleBackColor = true;
			this->btnminus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn1->Location = System::Drawing::Point(8, 329);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(80, 80);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn2->Location = System::Drawing::Point(94, 329);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(80, 80);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn3->Location = System::Drawing::Point(180, 329);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(80, 80);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btnmultiple
			// 
			this->btnmultiple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnmultiple->Location = System::Drawing::Point(266, 329);
			this->btnmultiple->Name = L"btnmultiple";
			this->btnmultiple->Size = System::Drawing::Size(80, 80);
			this->btnmultiple->TabIndex = 0;
			this->btnmultiple->Text = L"*";
			this->btnmultiple->UseVisualStyleBackColor = true;
			this->btnmultiple->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn0->Location = System::Drawing::Point(8, 415);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(80, 80);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// btndot
			// 
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btndot->Location = System::Drawing::Point(94, 415);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(80, 80);
			this->btndot->TabIndex = 0;
			this->btndot->Text = L",";
			this->btndot->UseVisualStyleBackColor = true;
			this->btndot->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// btnequal
			// 
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnequal->Location = System::Drawing::Point(180, 415);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(80, 80);
			this->btnequal->TabIndex = 0;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = true;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// btndivade
			// 
			this->btndivade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btndivade->Location = System::Drawing::Point(266, 415);
			this->btndivade->Name = L"btndivade";
			this->btndivade->Size = System::Drawing::Size(80, 80);
			this->btndivade->TabIndex = 0;
			this->btndivade->Text = L"/";
			this->btndivade->UseVisualStyleBackColor = true;
			this->btndivade->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 504);
			this->Controls->Add(this->text);
			this->Controls->Add(this->btndivade);
			this->Controls->Add(this->btnmultiple);
			this->Controls->Add(this->btnminus);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btnchange);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btndot);
			this->Controls->Add(this->btnce);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnc);
			this->Controls->Add(this->btnback);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void enterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (text->Text == "0") {
		text->Text = Numbers->Text;
	} else {
		text->Text += Numbers->Text;
	}
}

private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);

	firstDigit = Double::Parse(text->Text);
	text->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!text->Text->Contains(",")) {
		text->Text = text->Text + ",";
	}
}
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(text->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		text->Text = System::Convert::ToString(result);
	} else if (operators == "-") {
		result = firstDigit - secondDigit;
		text->Text = System::Convert::ToString(result);
	} else if (operators == "*") {
		result = firstDigit * secondDigit;
		text->Text = System::Convert::ToString(result);
	} else if (operators == "/") {
		result = firstDigit / secondDigit;
		text->Text = System::Convert::ToString(result);
	}
}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
	text->Text = "0";
}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	text->Text = "0";
}
private: System::Void btnChange_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text->Text->Contains("-")) {
		text->Text = text->Text->Remove(0, 1);
	}
	else {
		text->Text = "-" + text->Text;
	}
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text->Text->Length > 0) {
		text->Text = text->Text->Remove(text->Text->Length - 1, 1);
	}
}
};
}
