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
	/// Podsumowanie informacji o UsunGrupe
	/// </summary>
	public ref class UsunGrupe : public System::Windows::Forms::Form
	{
	public:
		UsunGrupe(void)
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
		~UsunGrupe()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  Nazwa;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Nazwa = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(325, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa grupy:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(895, 661);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UsunGrupe::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(814, 661);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Powrót";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UsunGrupe::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(438, 220);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 32);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Usuñ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UsunGrupe::button4_Click);
			// 
			// Nazwa
			// 
			this->Nazwa->Location = System::Drawing::Point(424, 173);
			this->Nazwa->Name = L"Nazwa";
			this->Nazwa->Size = System::Drawing::Size(204, 22);
			this->Nazwa->TabIndex = 7;
			// 
			// UsunGrupe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->Nazwa);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"UsunGrupe";
			this->Text = L"UsunGrupe";
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
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string nazwa;
	To_string(Nazwa->Text, nazwa);

	u->usunGrupe(nazwa);
	MessageBox::Show("Usuniêto grupê.");
}
	};
}
