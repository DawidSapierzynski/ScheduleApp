#pragma once
#include"LiczbaObiektow.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o UsunLekcje
	/// </summary>
	public ref class UsunLekcje : public System::Windows::Forms::Form
	{
	public:
		UsunLekcje(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~UsunLekcje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  Data;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  DataUL;
	private: System::Windows::Forms::TextBox^  Godzina;
	private: System::Windows::Forms::TextBox^  Sala;
	private: System::Windows::Forms::Label^  label1;



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Data = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DataUL = (gcnew System::Windows::Forms::TextBox());
			this->Godzina = (gcnew System::Windows::Forms::TextBox());
			this->Sala = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(895, 661);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UsunLekcje::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(814, 661);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Powrót";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UsunLekcje::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(438, 378);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Usuñ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UsunLekcje::button3_Click);
			// 
			// Data
			// 
			this->Data->AutoSize = true;
			this->Data->Location = System::Drawing::Point(356, 214);
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(42, 17);
			this->Data->TabIndex = 3;
			this->Data->Text = L"Data:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(333, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Godzina:";
			// 
			// DataUL
			// 
			this->DataUL->Location = System::Drawing::Point(402, 211);
			this->DataUL->Name = L"DataUL";
			this->DataUL->Size = System::Drawing::Size(199, 22);
			this->DataUL->TabIndex = 5;
			// 
			// Godzina
			// 
			this->Godzina->Location = System::Drawing::Point(402, 271);
			this->Godzina->Name = L"Godzina";
			this->Godzina->Size = System::Drawing::Size(199, 22);
			this->Godzina->TabIndex = 6;
			// 
			// Sala
			// 
			this->Sala->Location = System::Drawing::Point(402, 332);
			this->Sala->Name = L"Sala";
			this->Sala->Size = System::Drawing::Size(199, 22);
			this->Sala->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(358, 335);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Sala:";
			// 
			// UsunLekcje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Sala);
			this->Controls->Add(this->Godzina);
			this->Controls->Add(this->DataUL);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Data);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"UsunLekcje";
			this->Text = L"UsunLekcje";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static bool To_string(System::String^ source, std::string &target)
		{
			pin_ptr<const wchar_t> wch = PtrToStringChars(source);
			int len = ((source->Length + 1) * 2);
			char *ch = new char[len];
			bool result = wcstombs(ch, wch, len) != -1;
			target = ch;
			delete ch;
			return result;
		}
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string data, godzina, sala;
	To_string(DataUL->Text, data);
	To_string(Godzina->Text, godzina);
	To_string(Sala->Text, sala);
	u->usunLekcje(data, godzina, sala);
	MessageBox::Show("Usuniêto lekcje.");
}
};
}
