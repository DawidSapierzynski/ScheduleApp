#pragma once
#include"Uniwersytet.h"
#include"IUniwerstytet.h"
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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ok;
	protected:

	protected:




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  nazwauczelni;







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
			this->ok = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nazwauczelni = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// ok
			// 
			this->ok->Location = System::Drawing::Point(469, 395);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(75, 23);
			this->ok->TabIndex = 4;
			this->ok->Text = L"OK";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &MyForm::ok_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(441, 293);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Podaj nazwe uczelni:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// nazwauczelni
			// 
			this->nazwauczelni->Location = System::Drawing::Point(355, 326);
			this->nazwauczelni->Multiline = true;
			this->nazwauczelni->Name = L"nazwauczelni";
			this->nazwauczelni->Size = System::Drawing::Size(300, 48);
			this->nazwauczelni->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 703);
			this->Controls->Add(this->nazwauczelni);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ok);
			this->Name = L"MyForm";
			this->Text = L"Projekt1";
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
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ok_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tekst;
		To_string(nazwauczelni->Text, tekst);
		u = new Uniwersytet(tekst);
		this->Hide();
		Project1::IUniwerstytet^ formUniwer = gcnew Project1::IUniwerstytet();
		formUniwer->ShowDialog();
		
	}

	 
};
}
