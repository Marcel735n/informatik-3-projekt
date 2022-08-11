#pragma once
#include "Bauteil_Lib.h"
#include <String>
#include <msclr/marshal.h>
#include <atlstr.h>

//Marcel`s Form Bearbeitung

Bauteil kartei[MAX_SIZE];
Bauteil such_kartei[MAX_SIZE];

int anzahl = 0;

namespace informatik3projekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;





	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;














	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::ComboBox^  comboBox12;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::ComboBox^  comboBox13;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::ComboBox^  comboBox14;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  Name;
private: System::Windows::Forms::Button^  button9;



















	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Eingabe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ausgabe";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->listBox4);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->listBox5);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->listBox6);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->listBox3);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->listBox2);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(233, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(859, 676);
			this->panel1->TabIndex = 2;
			this->panel1->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(557, 82);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Lagerort";
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(558, 98);
			this->listBox4->Margin = System::Windows::Forms::Padding(2);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(98, 238);
			this->listBox4->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(455, 82);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Zustand";
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(456, 98);
			this->listBox5->Margin = System::Windows::Forms::Padding(2);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(98, 238);
			this->listBox5->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(353, 82);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(95, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"ergänzende Daten";
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(354, 98);
			this->listBox6->Margin = System::Windows::Forms::Padding(2);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(98, 238);
			this->listBox6->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(250, 82);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(98, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Typenbezeichnung";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(251, 98);
			this->listBox3->Margin = System::Windows::Forms::Padding(2);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(98, 238);
			this->listBox3->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(148, 82);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Bauteilbezeichnung";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(149, 98);
			this->listBox2->Margin = System::Windows::Forms::Padding(2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(98, 238);
			this->listBox2->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(47, 82);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"ID-Nummer";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(47, 98);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(98, 238);
			this->listBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(-2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ausgabe";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->comboBox9);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->comboBox10);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->comboBox11);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->comboBox12);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->comboBox13);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->comboBox14);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->comboBox8);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->comboBox7);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->comboBox6);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->comboBox5);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->comboBox4);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->Name);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Enabled = false;
			this->panel2->Location = System::Drawing::Point(233, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(859, 676);
			this->panel2->TabIndex = 3;
			this->panel2->Visible = false;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(154, 625);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 47;
			this->button9->Text = L"Neu Eingeben";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(763, 634);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(75, 13);
			this->label29->TabIndex = 46;
			this->label29->Text = L"(*) Pflichtfelder";
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(53, 543);
			this->comboBox9->Margin = System::Windows::Forms::Padding(2);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(92, 21);
			this->comboBox9->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(51, 524);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 13);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Internetseite";
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(194, 475);
			this->comboBox10->Margin = System::Windows::Forms::Padding(2);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(92, 21);
			this->comboBox10->TabIndex = 43;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(191, 457);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(21, 13);
			this->label24->TabIndex = 42;
			this->label24->Text = L"Ort";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(55, 475);
			this->comboBox11->Margin = System::Windows::Forms::Padding(2);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(92, 21);
			this->comboBox11->TabIndex = 41;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(52, 457);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(60, 13);
			this->label25->TabIndex = 40;
			this->label25->Text = L"Postleitzahl";
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(194, 418);
			this->comboBox12->Margin = System::Windows::Forms::Padding(2);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(92, 21);
			this->comboBox12->TabIndex = 39;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(191, 399);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(69, 13);
			this->label26->TabIndex = 38;
			this->label26->Text = L"Hausnummer";
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(53, 418);
			this->comboBox13->Margin = System::Windows::Forms::Padding(2);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(92, 21);
			this->comboBox13->TabIndex = 37;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(51, 399);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(38, 13);
			this->label27->TabIndex = 36;
			this->label27->Text = L"Straße";
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(53, 370);
			this->comboBox14->Margin = System::Windows::Forms::Padding(2);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(92, 21);
			this->comboBox14->TabIndex = 35;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(51, 350);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(35, 13);
			this->label28->TabIndex = 34;
			this->label28->Text = L"Name";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(50, 319);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(178, 17);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Herstellerinformationen";
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(194, 265);
			this->comboBox8->Margin = System::Windows::Forms::Padding(2);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(92, 21);
			this->comboBox8->TabIndex = 32;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(191, 246);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(69, 13);
			this->label22->TabIndex = 31;
			this->label22->Text = L"Sortierkasten";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(52, 42);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(157, 17);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Bauteilinformationen";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(52, 215);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(70, 17);
			this->label20->TabIndex = 29;
			this->label20->Text = L"Lagerort";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(53, 265);
			this->comboBox7->Margin = System::Windows::Forms::Padding(2);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(92, 21);
			this->comboBox7->TabIndex = 28;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(51, 246);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 13);
			this->label19->TabIndex = 27;
			this->label19->Text = L"Schrank";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(194, 162);
			this->comboBox6->Margin = System::Windows::Forms::Padding(2);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(92, 21);
			this->comboBox6->TabIndex = 26;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(191, 144);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Anzahl";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(53, 162);
			this->comboBox5->Margin = System::Windows::Forms::Padding(2);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(92, 21);
			this->comboBox5->TabIndex = 24;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(51, 144);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Zustand";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(454, 96);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(92, 21);
			this->comboBox4->TabIndex = 22;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(452, 77);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Ergänzende Daten";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(324, 96);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(92, 21);
			this->comboBox3->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(322, 77);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 13);
			this->label15->TabIndex = 19;
			this->label15->Text = L"ID-Nummer";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(190, 96);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(92, 21);
			this->comboBox2->TabIndex = 18;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(188, 77);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 13);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Typenbezeichnung";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(53, 97);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 20);
			this->comboBox1->TabIndex = 16;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Location = System::Drawing::Point(51, 77);
			this->Name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(103, 13);
			this->Name->TabIndex = 15;
			this->Name->Text = L"Bauteilbezeichnung:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 13;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(55, 625);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Speichern";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Eingabe";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 24);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Lagersystem";
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Location = System::Drawing::Point(233, 100);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(859, 676);
			this->panel4->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(-2, -2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Suche";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Enabled = false;
			this->panel3->Location = System::Drawing::Point(233, 100);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(859, 676);
			this->panel3->TabIndex = 4;
			this->panel3->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 166);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Suche";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Menü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(15, 336);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 32);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Beenden";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(15, 307);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(89, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Hilfe";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(15, 278);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(89, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Einstellungen";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Bauteil:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(491, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 82);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1125, 812);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->DoubleBuffered = true;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Text = L"Lagersystem";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Eingabe
		panel2->Visible = true;
		panel2->Enabled = true;
		panel1->Visible = false;
		panel1->Enabled = false;
		panel3->Visible = false;
		panel3->Enabled = false;
		panel4->Visible = false;
		panel4->Enabled = false;

	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		//Ausgabe
		panel1->Visible = true;
		panel1->Enabled = true;
		panel2->Visible = false;
		panel2->Enabled = false;
		panel3->Visible = false;
		panel3->Enabled = false;
		panel4->Visible = false;
		panel4->Enabled = false;

		//listBox_fill_List(n)


	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//Suche
		panel2->Visible = false;
		panel2->Enabled = false;
		panel1->Visible = false;
		panel1->Enabled = false;
		panel3->Visible = true;
		panel3->Enabled = true;
		panel4->Visible = false;
		panel4->Enabled = false;

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		//Alle Weg // Blank im Vordergrund
		panel2->Visible = false;
		panel2->Enabled = false;
		panel1->Visible = false;
		panel1->Enabled = false;
		panel3->Visible = false;
		panel3->Enabled = false;
		panel4->Visible = true;
		panel4->Enabled = true;
		
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//Beenden
		Close();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		//Speichern Button in Eingabe Tab

		eingabe(kartei,&anzahl);
		speichern(kartei, anzahl);

		//comboBox_fill_list(comboBox2, kartei.typ_bez, array_length); //(location, Array, Arraylength)
		//output_char_on_label(label7, kartei.bauteil_bez[array_length]);//(location, text)
	}

		void eingabe(Bauteil kartei[MAX_SIZE], int *index) {
			//----Abrufen einer Eingabe (char) und schreiben in das entsprechende Array----
			//----------------------------------------------------------------------
			//ComboBox^ temp_Box --> zu füllende ComboBox
			//char temp_text[][STRING_LENGTH] --> Inhalt
			//int temp_array_length --> Anzahl der Items

			Bauteil temp;

			strcpy(temp.bauteil_bez, CStringA(comboBox1->Text));
			strcpy(temp.typ_bez, CStringA(comboBox2->Text));
			temp.id_nummer = System::Convert::ToInt32(CStringA(comboBox3->Text));
			strcpy(temp.erg_daten, CStringA(comboBox4->Text));
			//if( Tick bei einem oder anderem... --> Neu/gebraucht 
			temp.anzahl = System::Convert::ToInt32(CStringA(comboBox6->Text));
			
			strcpy(temp.lagerort, CStringA(comboBox7->Text));
			strcpy(temp.hersteller.name, CStringA(comboBox14->Text));
			strcpy(temp.hersteller.strasse, CStringA(comboBox13->Text));
			temp.hersteller.haus_nr = System::Convert::ToInt32(CStringA(comboBox12->Text));
			temp.hersteller.plz = System::Convert::ToInt32(CStringA(comboBox11->Text));
			strcpy(temp.hersteller.ort, CStringA(comboBox10->Text));
			strcpy(temp.hersteller.internetseite, CStringA(comboBox9->Text));

			if (temp.bauteil_bez[0] == '\0'  ||temp.typ_bez[0] == '\0'  || temp.id_nummer == 0) {
				//!!!Hier Label einfügen mit Fehlermeldung "Pflichtfelder prüfen"
			}
			else {
				kartei[*index] = temp;
				/*strcpy(kartei[*index].bauteil_bez, temp.bauteil_bez);
				strcpy(kartei[*index].typ_bez, temp.typ_bez);
				kartei[*index].id_nummer = temp.id_nummer;
				strcpy(kartei[*index].erg_daten, temp.erg_daten);
				kartei[*index].anzahl = temp.anzahl;
				kartei[*index].neu_gebraucht = temp.neu_gebraucht;

				strcpy(kartei[*index].lagerort, temp.lagerort);
				
				strcpy(kartei[*index].hersteller.name, temp.hersteller.name);
				strcpy(kartei[*index].hersteller.strasse, temp.hersteller.strasse);
				kartei[*index].hersteller.haus_nr = temp.hersteller.haus_nr;
				kartei[*index].hersteller.plz = temp.hersteller.plz;
				strcpy(kartei[*index].hersteller.ort, temp.hersteller.ort);
				strcpy(kartei[*index].hersteller.internetseite, temp.hersteller.internetseite);
*/

				(*index)++;
			}
		}

		void output_char_on_label(Label^ temp_label, char temp_text[STRING_LENGTH]) {
			String^ temp_str = gcnew String{ temp_text };
			temp_label->Text = temp_str;
		}

		void comboBox_fill_list(ComboBox^ temp_Box, Bauteil *such_kartei, int ergebnis_anzahl) {
			//----Füllen von ListBox-Listen----
			//---------------------------------
			//ListBox^ temp_List --> zu füllende ListBox
			//char temp_text[][STRING_LENGTH] --> Inhalt
			//int temp_array_length --> Anzahl der Items



			temp_Box->Items->Clear();

			for (int i = 0; i < ergebnis_anzahl; i++) {
				String^ temp_str = gcnew String{ such_kartei[i].bauteil_bez };
				temp_Box->Items->Add(temp_str);
			}
		}

		void comboBox_fill_text(ComboBox^ temp_Box, char temp_text[STRING_LENGTH]) {
			String^ temp_str = gcnew String{temp_text};
			temp_Box->Text = temp_str;
		}

		void autoFill_text(Bauteil such_kartei) {
			comboBox_fill_text(comboBox14, such_kartei.hersteller.name);
			comboBox_fill_text(comboBox10, such_kartei.hersteller.ort);
			comboBox_fill_text(comboBox13, such_kartei.hersteller.strasse);
			comboBox_fill_text(comboBox9, such_kartei.hersteller.internetseite);
			comboBox12->Text = System::Convert::ToString(such_kartei.hersteller.haus_nr);
			comboBox11->Text = System::Convert::ToString(such_kartei.hersteller.plz);
			
			
			listBox_fill_List(listBox1,&such_kartei, 20);
		}

		void listBox_fill_List(ListBox^ temp_List, Bauteil *such_kartei, int ergebnis_anzahl) {
			//----Füllen von ListBox-Listen----
			//---------------------------------
			//ListBox^ temp_List --> zu füllende ListBox
			//char temp_text[][STRING_LENGTH] --> Inhalt
			//int temp_array_length --> Anzahl der Items
			
	

			temp_List->Items->Clear();

			for (int i = 0; i < ergebnis_anzahl; i++) {
				String^ temp_str = gcnew String{such_kartei[i].bauteil_bez};
				temp_List->Items->Add(temp_str);
			}
		}

		void speichern(Bauteil kartei[MAX_SIZE], int index) {
			FILE* datei;
			
			datei = fopen("datenbank.txt", "wb");
			if (datei == NULL) {
				printf("Kann Datei nicht \224ffnen!\n");
			}
			else {
				fwrite(&index, sizeof(int), 1, datei);
				fwrite(kartei, index * sizeof(*kartei), 1, datei);
				fclose(datei);
				printf("Datei wurde erfolgreich gespeichert\n\n");
			}
		}

		/*
		Die einlese-Funktion ließt die gesamte Kartei aus
		Die Anzahl der Einträge wird als erstes ausgelesen
		*/
		void einlesen(Bauteil kartei[MAX_SIZE], int *anzahl) {
			FILE *datei;

			datei = fopen("datenbank.txt", "rb");
			if (datei == NULL) {
				printf("Kann Datei nicht \224ffnen!\n");
			}
			else {
				fread(anzahl, sizeof(int), 1, datei);
				while (!feof(datei)) {
					fread(kartei, sizeof(*kartei), *anzahl, datei);
				}
				fclose(datei);
			}
			if (*anzahl == 0) {
				printf("Keine Datens\204tze vorhanden");
			}
		}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		einlesen(kartei, &anzahl);
		comboBox_fill_text(comboBox1, kartei[anzahl-1].bauteil_bez);
		comboBox_fill_text(comboBox2, kartei[anzahl-1].typ_bez);
		comboBox_fill_list(comboBox2, kartei, anzahl);
}
};
}



 