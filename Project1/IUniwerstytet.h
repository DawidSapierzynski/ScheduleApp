#pragma once
#include"DodajLekcje.h"
#include"UsunLekcje.h"
#include"DodajSale.h"
#include"UsunSale.h"
#include"dodajSprzetDoSali.h"
#include"usunSprzetZSali.h"
#include"DodajCecheDoSprzetuWSali.h"
#include"UsunCecheZSprzetuWSali.h"
#include"DodajGrupe.h"
#include"UsunGrupe.h"
#include"Zapisz.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o IUniwerstytet
	/// </summary>
	public ref class IUniwerstytet : public System::Windows::Forms::Form
	{
	public:
		IUniwerstytet(void)
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
		~IUniwerstytet()
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
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;


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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dodaj Lekcje";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IUniwerstytet::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(591, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Usuñ Lekcje";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IUniwerstytet::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(205, 160);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Dodaj Sale";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &IUniwerstytet::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(591, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Usuñ Sale";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &IUniwerstytet::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(205, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Dodaj Sprzet Do Sali";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &IUniwerstytet::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(591, 245);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(180, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Usuñ Sprzêt Z Sali";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &IUniwerstytet::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(205, 331);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(180, 50);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Dodaj Ceche Do Sprzetu W Sali";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &IUniwerstytet::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(591, 331);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(180, 50);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Usuñ Ceche Z Sprzêtu W Sali";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &IUniwerstytet::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(205, 428);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 30);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Dodaj Grupe";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &IUniwerstytet::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(591, 428);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(180, 30);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Usuñ Grupe";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &IUniwerstytet::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(814, 661);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 30);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Zapisz";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &IUniwerstytet::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(895, 661);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 30);
			this->button12->TabIndex = 11;
			this->button12->Text = L"Zamknij";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &IUniwerstytet::button12_Click);
			// 
			// IUniwerstytet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"IUniwerstytet";
			this->Text = L"IUniwerstytet";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Project1::DodajLekcje^ formDodajLekcje = gcnew Project1::DodajLekcje();
		formDodajLekcje->ShowDialog();
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Project1::UsunLekcje^ formUsunLekcje = gcnew Project1::UsunLekcje();
		formUsunLekcje->ShowDialog();
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::DodajSale^ formDodajSale = gcnew Project1::DodajSale();
	formDodajSale->ShowDialog();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::Zapisz^ formZapisz = gcnew Project1::Zapisz();
	formZapisz->ShowDialog();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::dodajSprzetDoSali^ formdodajSprzetDoSali = gcnew Project1::dodajSprzetDoSali();
	formdodajSprzetDoSali->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::usunSprzetZSali^ formusunSprzetZSali = gcnew Project1::usunSprzetZSali();
	formusunSprzetZSali->ShowDialog();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::DodajCecheDoSprzetuWSali^ formDodajCecheDoSprzetuWSali = gcnew Project1::DodajCecheDoSprzetuWSali();
	formDodajCecheDoSprzetuWSali->ShowDialog();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::DodajGrupe^ formDodajGrupe = gcnew Project1::DodajGrupe();
	formDodajGrupe->ShowDialog();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::UsunCecheZSprzetuWSali^ formUsunCecheZSprzetuWSali = gcnew Project1::UsunCecheZSprzetuWSali();
	formUsunCecheZSprzetuWSali->ShowDialog();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::UsunGrupe^ formUsunGrupe = gcnew Project1::UsunGrupe();
	formUsunGrupe->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Project1::UsunSale^ formUsunSale = gcnew Project1::UsunSale();
	formUsunSale->ShowDialog();
}
};
}
