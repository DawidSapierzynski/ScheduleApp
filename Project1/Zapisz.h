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
	/// Podsumowanie informacji o Zapisz
	/// </summary>
	public ref class Zapisz : public System::Windows::Forms::Form
	{
	public:
		Zapisz(void)
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
		~Zapisz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  PlanZajec;
	private: System::Windows::Forms::CheckBox^  Sale;

	private: System::Windows::Forms::CheckBox^  Grupy;
	private: System::Windows::Forms::TextBox^  Nazwa;





	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  NazwaUczelni;

	protected:

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
			this->PlanZajec = (gcnew System::Windows::Forms::CheckBox());
			this->Sale = (gcnew System::Windows::Forms::CheckBox());
			this->Grupy = (gcnew System::Windows::Forms::CheckBox());
			this->Nazwa = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->NazwaUczelni = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa/adres pliku:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(258, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Zapisz::button1_Click);
			// 
			// PlanZajec
			// 
			this->PlanZajec->AutoSize = true;
			this->PlanZajec->Location = System::Drawing::Point(54, 117);
			this->PlanZajec->Name = L"PlanZajec";
			this->PlanZajec->Size = System::Drawing::Size(221, 21);
			this->PlanZajec->TabIndex = 2;
			this->PlanZajec->Text = L"Zapisz liste zajêæ uniwersytetu";
			this->PlanZajec->UseVisualStyleBackColor = true;
			this->PlanZajec->CheckedChanged += gcnew System::EventHandler(this, &Zapisz::PlanZajec_CheckedChanged);
			// 
			// Sale
			// 
			this->Sale->AutoSize = true;
			this->Sale->Location = System::Drawing::Point(54, 156);
			this->Sale->Name = L"Sale";
			this->Sale->Size = System::Drawing::Size(298, 21);
			this->Sale->TabIndex = 3;
			this->Sale->Text = L"Zapisz liste sal oraz sprzetów uniwersytetu";
			this->Sale->UseVisualStyleBackColor = true;
			// 
			// Grupy
			// 
			this->Grupy->AutoSize = true;
			this->Grupy->Location = System::Drawing::Point(54, 195);
			this->Grupy->Name = L"Grupy";
			this->Grupy->Size = System::Drawing::Size(217, 21);
			this->Grupy->TabIndex = 4;
			this->Grupy->Text = L"Zapisz liste grup uniwersytetu";
			this->Grupy->UseVisualStyleBackColor = true;
			// 
			// Nazwa
			// 
			this->Nazwa->Location = System::Drawing::Point(158, 28);
			this->Nazwa->Name = L"Nazwa";
			this->Nazwa->Size = System::Drawing::Size(224, 22);
			this->Nazwa->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(339, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Anuluj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Zapisz::button2_Click);
			// 
			// NazwaUczelni
			// 
			this->NazwaUczelni->AutoSize = true;
			this->NazwaUczelni->Location = System::Drawing::Point(54, 77);
			this->NazwaUczelni->Name = L"NazwaUczelni";
			this->NazwaUczelni->Size = System::Drawing::Size(164, 21);
			this->NazwaUczelni->TabIndex = 7;
			this->NazwaUczelni->Text = L"Zapisz nazwe uczelni";
			this->NazwaUczelni->UseVisualStyleBackColor = true;
			// 
			// Zapisz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 284);
			this->Controls->Add(this->NazwaUczelni);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Nazwa);
			this->Controls->Add(this->Grupy);
			this->Controls->Add(this->Sale);
			this->Controls->Add(this->PlanZajec);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Zapisz";
			this->Text = L"Zapisz";
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

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string nazwa;
	To_string(Nazwa->Text, nazwa);

	if (NazwaUczelni->Checked) {
		if (u->zapiszWszystko(nazwa + ".txt", 0) != 0) {
			MessageBox::Show("Nie mo¿na otworzyæ pliku.");
			return;
		}
	}
	if (PlanZajec->Checked) {
		if (u->zapiszWszystko(nazwa + ".txt", 1) != 0) {
			MessageBox::Show("Nie mo¿na otworzyæ pliku.");
			return;
		}
	}
	if (Sale->Checked) {
		if (u->zapiszWszystko(nazwa + ".txt", 2) != 0) {
			MessageBox::Show("Nie mo¿na otworzyæ pliku.");
			return;
		}
	}
	if (Grupy->Checked) {
		if (u->zapiszWszystko(nazwa + ".txt", 3) != 0) {
			MessageBox::Show("Nie mo¿na otworzyæ pliku.");
			return;
		}
	}
	MessageBox::Show("Zapisano.");
	this->Close();

}
private: System::Void PlanZajec_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
