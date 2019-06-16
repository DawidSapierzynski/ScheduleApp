#pragma once
#include"LiczbaObiektow.h"

using namespace System;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o DodajLekcje
	/// </summary>
	public ref class DodajLekcje : public System::Windows::Forms::Form
	{
	public:
		DodajLekcje(void)
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
		~DodajLekcje()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  Nazwa;
	private: System::Windows::Forms::TextBox^  Dzien;
	private: System::Windows::Forms::TextBox^  Godzina;
	private: System::Windows::Forms::TextBox^  NazwaSali;
	private: System::Windows::Forms::TextBox^  NazwaGrupy;
	private: System::Windows::Forms::TextBox^  Wymaganie1;
	private: System::Windows::Forms::TextBox^  Wymaganie2;
	private: System::Windows::Forms::TextBox^  Wymaganie3;
	protected:



	protected:

	protected:







	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

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
			this->Nazwa = (gcnew System::Windows::Forms::TextBox());
			this->Dzien = (gcnew System::Windows::Forms::TextBox());
			this->Godzina = (gcnew System::Windows::Forms::TextBox());
			this->NazwaSali = (gcnew System::Windows::Forms::TextBox());
			this->NazwaGrupy = (gcnew System::Windows::Forms::TextBox());
			this->Wymaganie1 = (gcnew System::Windows::Forms::TextBox());
			this->Wymaganie2 = (gcnew System::Windows::Forms::TextBox());
			this->Wymaganie3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Nazwa
			// 
			this->Nazwa->Location = System::Drawing::Point(190, 77);
			this->Nazwa->Name = L"Nazwa";
			this->Nazwa->Size = System::Drawing::Size(194, 22);
			this->Nazwa->TabIndex = 0;
			// 
			// Dzien
			// 
			this->Dzien->Location = System::Drawing::Point(190, 137);
			this->Dzien->Name = L"Dzien";
			this->Dzien->Size = System::Drawing::Size(194, 22);
			this->Dzien->TabIndex = 1;
			// 
			// Godzina
			// 
			this->Godzina->Location = System::Drawing::Point(190, 198);
			this->Godzina->Name = L"Godzina";
			this->Godzina->Size = System::Drawing::Size(194, 22);
			this->Godzina->TabIndex = 2;
			// 
			// NazwaSali
			// 
			this->NazwaSali->Location = System::Drawing::Point(190, 258);
			this->NazwaSali->Name = L"NazwaSali";
			this->NazwaSali->Size = System::Drawing::Size(194, 22);
			this->NazwaSali->TabIndex = 3;
			// 
			// NazwaGrupy
			// 
			this->NazwaGrupy->Location = System::Drawing::Point(190, 323);
			this->NazwaGrupy->Name = L"NazwaGrupy";
			this->NazwaGrupy->Size = System::Drawing::Size(194, 22);
			this->NazwaGrupy->TabIndex = 4;
			// 
			// Wymaganie1
			// 
			this->Wymaganie1->Location = System::Drawing::Point(649, 137);
			this->Wymaganie1->Name = L"Wymaganie1";
			this->Wymaganie1->Size = System::Drawing::Size(179, 22);
			this->Wymaganie1->TabIndex = 5;
			// 
			// Wymaganie2
			// 
			this->Wymaganie2->Location = System::Drawing::Point(649, 198);
			this->Wymaganie2->Name = L"Wymaganie2";
			this->Wymaganie2->Size = System::Drawing::Size(179, 22);
			this->Wymaganie2->TabIndex = 6;
			// 
			// Wymaganie3
			// 
			this->Wymaganie3->Location = System::Drawing::Point(649, 258);
			this->Wymaganie3->Name = L"Wymaganie3";
			this->Wymaganie3->Size = System::Drawing::Size(179, 22);
			this->Wymaganie3->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(895, 661);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DodajLekcje::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(814, 661);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Powrót";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DodajLekcje::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(451, 413);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Dodaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DodajLekcje::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(132, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nazwa:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Dzieñ:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(122, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Godzina:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(108, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Nazwa sali:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(90, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Nazwa Grupy:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(522, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Wymagany sprzêt:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(522, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Wymagany sprzêt:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(522, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Wymagany sprzêt:";
			// 
			// DodajLekcje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Wymaganie3);
			this->Controls->Add(this->Wymaganie2);
			this->Controls->Add(this->Wymaganie1);
			this->Controls->Add(this->NazwaGrupy);
			this->Controls->Add(this->NazwaSali);
			this->Controls->Add(this->Godzina);
			this->Controls->Add(this->Dzien);
			this->Controls->Add(this->Nazwa);
			this->Name = L"DodajLekcje";
			this->Text = L"DodajLekcje";
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
	std::string nazwa, dzien, godzina, nazwasali, nazwagrupy;
	std::string wyg1="", wyg2="", wyg3="";
	To_string(Nazwa->Text, nazwa);
	To_string(Dzien->Text, dzien);
	To_string(Godzina->Text, godzina);
	To_string(NazwaSali->Text, nazwasali);
	To_string(NazwaGrupy->Text, nazwagrupy);
	
	std::list<Sprzet> listaSprzetowWymagana;

	To_string(Wymaganie1->Text, wyg1);
	if(wyg1!= "")
		listaSprzetowWymagana.push_back(*(new Sprzet(wyg1)));

	To_string(Wymaganie2->Text, wyg2);
	if (wyg2 != "")
		listaSprzetowWymagana.push_back(*(new Sprzet(wyg2)));

	To_string(Wymaganie3->Text, wyg3);
	if (wyg3 != "")
		listaSprzetowWymagana.push_back(*(new Sprzet(wyg3)));
	

	if (u->dodajLekcje(nazwa, dzien, godzina, nazwasali, nazwagrupy, listaSprzetowWymagana)==0) {
		MessageBox::Show("Dodano lekcje.");
	}
	else
	{
		MessageBox::Show("Lekcji nie dodano, brak danych w bazie.");
	}
	

}
	};
}
