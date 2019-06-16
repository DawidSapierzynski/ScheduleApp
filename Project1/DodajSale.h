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
	/// Podsumowanie informacji o DodajSale
	/// </summary>
	public ref class DodajSale : public System::Windows::Forms::Form
	{
	public:
		DodajSale(void)
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
		~DodajSale()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Nazwa;







	protected:



	protected:

	protected:







	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  LiczbaMiejsc;







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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LiczbaMiejsc = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LiczbaMiejsc))->BeginInit();
			this->SuspendLayout();
			// 
			// Nazwa
			// 
			this->Nazwa->Location = System::Drawing::Point(399, 189);
			this->Nazwa->Name = L"Nazwa";
			this->Nazwa->Size = System::Drawing::Size(194, 22);
			this->Nazwa->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(895, 661);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DodajSale::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(814, 661);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Powrót";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DodajSale::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(435, 329);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Dodaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DodajSale::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(341, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nazwa:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(298, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Liczba miejsc:";
			// 
			// LiczbaMiejsc
			// 
			this->LiczbaMiejsc->Location = System::Drawing::Point(399, 250);
			this->LiczbaMiejsc->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->LiczbaMiejsc->Name = L"LiczbaMiejsc";
			this->LiczbaMiejsc->Size = System::Drawing::Size(194, 22);
			this->LiczbaMiejsc->TabIndex = 13;
			// 
			// DodajSale
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->LiczbaMiejsc);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Nazwa);
			this->Name = L"DodajSale";
			this->Text = L"DodajSale";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LiczbaMiejsc))->EndInit();
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
	std::string nazwa;
	To_string(Nazwa->Text, nazwa);

	if (LiczbaMiejsc->Value<=0) {
		MessageBox::Show("B£AD! Liczba miejsc jest mniejsza lub równa 0.");
	}
	else {
		u->dodajSale(nazwa, LiczbaMiejsc->Value.ToUInt16(LiczbaMiejsc->Value));
		MessageBox::Show("Dodano Sale");
	}
	


}
};
}
