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
	/// Podsumowanie informacji o dodajSprzetDoSali
	/// </summary>
	public ref class dodajSprzetDoSali : public System::Windows::Forms::Form
	{
	public:
		dodajSprzetDoSali(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~dodajSprzetDoSali()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  Nazwa;
	private: System::Windows::Forms::TextBox^  NazwaSprzetu;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs�ugi projektanta � nie nale�y modyfikowa� 
		/// zawarto�� tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Nazwa = (gcnew System::Windows::Forms::TextBox());
			this->NazwaSprzetu = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(320, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa sali:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(292, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nazwa Sprzetu:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(895, 661);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dodajSprzetDoSali::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(814, 661);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Powr�t";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &dodajSprzetDoSali::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(421, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Dodaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &dodajSprzetDoSali::button3_Click);
			// 
			// Nazwa
			// 
			this->Nazwa->Location = System::Drawing::Point(404, 190);
			this->Nazwa->Name = L"Nazwa";
			this->Nazwa->Size = System::Drawing::Size(206, 22);
			this->Nazwa->TabIndex = 5;
			// 
			// NazwaSprzetu
			// 
			this->NazwaSprzetu->Location = System::Drawing::Point(404, 249);
			this->NazwaSprzetu->Name = L"NazwaSprzetu";
			this->NazwaSprzetu->Size = System::Drawing::Size(206, 22);
			this->NazwaSprzetu->TabIndex = 6;
			// 
			// dodajSprzetDoSali
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->NazwaSprzetu);
			this->Controls->Add(this->Nazwa);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"dodajSprzetDoSali";
			this->Text = L"dodajSprzetDoSali";
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
	std::string nazwasali, nazwasprzetu;
	To_string(Nazwa->Text, nazwasali);
	To_string(NazwaSprzetu->Text, nazwasprzetu);

	u->dodajSprzetDoSali(nazwasali, nazwasprzetu);
	MessageBox::Show("Dodano sprz�t do sali");
}
};
}
