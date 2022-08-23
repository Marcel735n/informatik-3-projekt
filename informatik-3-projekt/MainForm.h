#pragma once
#include "Bauteil_Lib.h"
#include <String>
#include <msclr/marshal.h>
#include <atlstr.h>

//Marcels zweite Änderung

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


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;





	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Label^  label5;




























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


	private: System::Windows::Forms::Label^  label21;

	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label18;

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

private: System::Windows::Forms::ColumnHeader^  columnHeader1;
private: System::Windows::Forms::ColumnHeader^  columnHeader2;
private: System::Windows::Forms::ColumnHeader^  columnHeader3;
private: System::Windows::Forms::ColumnHeader^  columnHeader4;
private: System::Windows::Forms::ComboBox^  comboBox15;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::ComboBox^  comboBox16;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::ComboBox^  comboBox17;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::ComboBox^  comboBox18;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::ComboBox^  comboBox19;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::ComboBox^  comboBox20;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;


private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::ComboBox^  comboBox22;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::ComboBox^  comboBox23;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::ComboBox^  comboBox24;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::ComboBox^  comboBox25;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::ComboBox^  comboBox26;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::ComboBox^  comboBox27;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::ComboBox^  comboBox28;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::DataGridView^  dataGridView1;









private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button11;










private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
private: System::Windows::Forms::DataGridViewLinkColumn^  Column10;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::DataGridView^  dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewLinkColumn^  dataGridViewLinkColumn1;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::Label^  label13;






























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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->comboBox23 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->comboBox25 = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->comboBox26 = (gcnew System::Windows::Forms::ComboBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->comboBox27 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->comboBox28 = (gcnew System::Windows::Forms::ComboBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
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
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewLinkColumn1 = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(408, 56);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Eingabe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(686, 56);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ausgabe";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->comboBox15);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->comboBox16);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->comboBox17);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->comboBox18);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->comboBox19);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->comboBox20);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->comboBox22);
			this->panel1->Controls->Add(this->label32);
			this->panel1->Controls->Add(this->comboBox23);
			this->panel1->Controls->Add(this->label33);
			this->panel1->Controls->Add(this->comboBox24);
			this->panel1->Controls->Add(this->label34);
			this->panel1->Controls->Add(this->comboBox25);
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->comboBox26);
			this->panel1->Controls->Add(this->label36);
			this->panel1->Controls->Add(this->comboBox27);
			this->panel1->Controls->Add(this->label37);
			this->panel1->Controls->Add(this->comboBox28);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Enabled = false;
			this->panel1->Location = System::Drawing::Point(43, 131);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1375, 902);
			this->panel1->TabIndex = 2;
			this->panel1->Visible = false;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(1172, 212);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(116, 35);
			this->button12->TabIndex = 80;
			this->button12->Text = L"Speichern";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(1172, 265);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(116, 35);
			this->button11->TabIndex = 79;
			this->button11->Text = L"Löschen";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->Location = System::Drawing::Point(85, 416);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1203, 438);
			this->dataGridView1->TabIndex = 77;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 44;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Bezeichnung";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"Typ-Bez.";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Ergänzungen";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->HeaderText = L"Lagerort";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column7->HeaderText = L"Zustand";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column8->HeaderText = L"Anzahl";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column9->HeaderText = L"Hersteller";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Webside";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// comboBox15
			// 
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Location = System::Drawing::Point(273, 276);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(188, 23);
			this->comboBox15->TabIndex = 76;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(270, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 17);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Internetseite";
			// 
			// comboBox16
			// 
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Location = System::Drawing::Point(631, 335);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(121, 23);
			this->comboBox16->TabIndex = 74;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(628, 312);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 17);
			this->label6->TabIndex = 73;
			this->label6->Text = L"Ort";
			// 
			// comboBox17
			// 
			this->comboBox17->FormattingEnabled = true;
			this->comboBox17->Location = System::Drawing::Point(446, 335);
			this->comboBox17->Name = L"comboBox17";
			this->comboBox17->Size = System::Drawing::Size(121, 23);
			this->comboBox17->TabIndex = 72;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(443, 312);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 71;
			this->label8->Text = L"Postleitzahl";
			// 
			// comboBox18
			// 
			this->comboBox18->FormattingEnabled = true;
			this->comboBox18->Location = System::Drawing::Point(272, 335);
			this->comboBox18->Name = L"comboBox18";
			this->comboBox18->Size = System::Drawing::Size(121, 23);
			this->comboBox18->TabIndex = 70;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(269, 312);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 17);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Hausnummer";
			// 
			// comboBox19
			// 
			this->comboBox19->FormattingEnabled = true;
			this->comboBox19->Location = System::Drawing::Point(85, 335);
			this->comboBox19->Name = L"comboBox19";
			this->comboBox19->Size = System::Drawing::Size(121, 23);
			this->comboBox19->TabIndex = 68;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(82, 312);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 17);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Straße";
			// 
			// comboBox20
			// 
			this->comboBox20->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
			this->comboBox20->FormattingEnabled = true;
			this->comboBox20->Location = System::Drawing::Point(85, 276);
			this->comboBox20->Name = L"comboBox20";
			this->comboBox20->Size = System::Drawing::Size(121, 24);
			this->comboBox20->TabIndex = 66;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(82, 252);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 17);
			this->label11->TabIndex = 65;
			this->label11->Text = L"Name";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(81, 227);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(178, 17);
			this->label12->TabIndex = 64;
			this->label12->Text = L"Herstellerinformationen";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->label30->Location = System::Drawing::Point(83, 32);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(368, 25);
			this->label30->TabIndex = 61;
			this->label30->Text = L"Ausgabe der Bauteilinformationen";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(882, 32);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(70, 17);
			this->label31->TabIndex = 60;
			this->label31->Text = L"Lagerort";
			// 
			// comboBox22
			// 
			this->comboBox22->FormattingEnabled = true;
			this->comboBox22->Location = System::Drawing::Point(885, 99);
			this->comboBox22->Name = L"comboBox22";
			this->comboBox22->Size = System::Drawing::Size(121, 23);
			this->comboBox22->TabIndex = 59;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(882, 76);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(60, 17);
			this->label32->TabIndex = 58;
			this->label32->Text = L"Schrank";
			// 
			// comboBox23
			// 
			this->comboBox23->FormattingEnabled = true;
			this->comboBox23->Location = System::Drawing::Point(272, 180);
			this->comboBox23->Name = L"comboBox23";
			this->comboBox23->Size = System::Drawing::Size(121, 23);
			this->comboBox23->TabIndex = 57;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(269, 157);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(51, 17);
			this->label33->TabIndex = 56;
			this->label33->Text = L"Anzahl";
			// 
			// comboBox24
			// 
			this->comboBox24->FormattingEnabled = true;
			this->comboBox24->Location = System::Drawing::Point(85, 180);
			this->comboBox24->Name = L"comboBox24";
			this->comboBox24->Size = System::Drawing::Size(121, 23);
			this->comboBox24->TabIndex = 55;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(82, 157);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(60, 17);
			this->label34->TabIndex = 54;
			this->label34->Text = L"Zustand";
			// 
			// comboBox25
			// 
			this->comboBox25->FormattingEnabled = true;
			this->comboBox25->Location = System::Drawing::Point(620, 98);
			this->comboBox25->Name = L"comboBox25";
			this->comboBox25->Size = System::Drawing::Size(121, 23);
			this->comboBox25->TabIndex = 53;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(617, 75);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(127, 17);
			this->label35->TabIndex = 52;
			this->label35->Text = L"Ergänzende Daten";
			// 
			// comboBox26
			// 
			this->comboBox26->FormattingEnabled = true;
			this->comboBox26->Location = System::Drawing::Point(446, 98);
			this->comboBox26->Name = L"comboBox26";
			this->comboBox26->Size = System::Drawing::Size(121, 23);
			this->comboBox26->TabIndex = 51;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(443, 75);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(79, 17);
			this->label36->TabIndex = 50;
			this->label36->Text = L"ID-Nummer";
			// 
			// comboBox27
			// 
			this->comboBox27->FormattingEnabled = true;
			this->comboBox27->Location = System::Drawing::Point(267, 98);
			this->comboBox27->Name = L"comboBox27";
			this->comboBox27->Size = System::Drawing::Size(121, 23);
			this->comboBox27->TabIndex = 49;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(264, 75);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(129, 17);
			this->label37->TabIndex = 48;
			this->label37->Text = L"Typenbezeichnung";
			// 
			// comboBox28
			// 
			this->comboBox28->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
			this->comboBox28->FormattingEnabled = true;
			this->comboBox28->Location = System::Drawing::Point(85, 99);
			this->comboBox28->Name = L"comboBox28";
			this->comboBox28->Size = System::Drawing::Size(121, 24);
			this->comboBox28->TabIndex = 47;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(82, 75);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(136, 17);
			this->label38->TabIndex = 46;
			this->label38->Text = L"Bauteilbezeichnung:";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->label2);
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
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->comboBox7);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->comboBox6);
			this->panel2->Controls->Add(this->label18);
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
			this->panel2->Location = System::Drawing::Point(43, 131);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1375, 902);
			this->panel2->TabIndex = 3;
			this->panel2->Visible = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(71, 241);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 19);
			this->radioButton2->TabIndex = 50;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Gebraucht";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(71, 212);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(48, 19);
			this->radioButton1->TabIndex = 49;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Neu";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(73, 607);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(326, 20);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Bitte überprüfen sie die Pflichteingaben";
			this->label2->Visible = false;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(209, 659);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 28);
			this->button9->TabIndex = 47;
			this->button9->Text = L"Neu";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(3, 880);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(87, 15);
			this->label29->TabIndex = 46;
			this->label29->Text = L"(*) Pflichtfelder";
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(73, 578);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(121, 23);
			this->comboBox9->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(70, 555);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 17);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Internetseite";
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(260, 495);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(121, 23);
			this->comboBox10->TabIndex = 43;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(257, 472);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(28, 17);
			this->label24->TabIndex = 42;
			this->label24->Text = L"Ort";
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(75, 495);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(121, 23);
			this->comboBox11->TabIndex = 41;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(72, 472);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(80, 17);
			this->label25->TabIndex = 40;
			this->label25->Text = L"Postleitzahl";
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(260, 424);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(121, 23);
			this->comboBox12->TabIndex = 39;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(257, 401);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(92, 17);
			this->label26->TabIndex = 38;
			this->label26->Text = L"Hausnummer";
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(73, 424);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(121, 23);
			this->comboBox13->TabIndex = 37;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(70, 401);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(51, 17);
			this->label27->TabIndex = 36;
			this->label27->Text = L"Straße";
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(73, 365);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(121, 23);
			this->comboBox14->TabIndex = 35;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(70, 341);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(45, 17);
			this->label28->TabIndex = 34;
			this->label28->Text = L"Name";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(69, 303);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(178, 17);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Herstellerinformationen";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(69, 52);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(157, 17);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Bauteilinformationen";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(431, 200);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(121, 23);
			this->comboBox7->TabIndex = 28;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(428, 177);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(62, 17);
			this->label19->TabIndex = 27;
			this->label19->Text = L"Lagerort";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(258, 200);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 23);
			this->comboBox6->TabIndex = 26;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(255, 177);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 17);
			this->label18->TabIndex = 25;
			this->label18->Text = L"Anzahl";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(68, 177);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 17);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Zustand";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(606, 118);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 23);
			this->comboBox4->TabIndex = 22;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(603, 95);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(127, 17);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Ergänzende Daten";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(432, 118);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 23);
			this->comboBox3->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(429, 95);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(84, 17);
			this->label15->TabIndex = 19;
			this->label15->Text = L"ID-Nummer*";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(253, 118);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 23);
			this->comboBox2->TabIndex = 18;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(250, 95);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(134, 17);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Typenbezeichnung*";
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(71, 119);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 16;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->Location = System::Drawing::Point(68, 95);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(137, 17);
			this->Name->TabIndex = 15;
			this->Name->Text = L"Bauteilbezeichnung*";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 121);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 15);
			this->label5->TabIndex = 13;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(76, 659);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Speichern";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(17, 7);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Eingabe";
			// 
			// panel4
			// 
			this->panel4->AutoScroll = true;
			this->panel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel4->Location = System::Drawing::Point(43, 131);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1375, 902);
			this->panel4->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 7);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Suche";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->dataGridView2);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->comboBox5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Enabled = false;
			this->panel3->Location = System::Drawing::Point(43, 131);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1375, 902);
			this->panel3->TabIndex = 4;
			this->panel3->Visible = false;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(883, 71);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(119, 28);
			this->button13->TabIndex = 79;
			this->button13->Text = L"Ausgabe";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowDrop = true;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewLinkColumn1
			});
			this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView2->Location = System::Drawing::Point(105, 148);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1183, 706);
			this->dataGridView2->TabIndex = 78;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 44;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Bezeichnung";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Typ-Bez.";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Ergänzungen";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Lagerort";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Zustand";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Anzahl";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Hersteller";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewLinkColumn1
			// 
			this->dataGridViewLinkColumn1->HeaderText = L"Webside";
			this->dataGridViewLinkColumn1->Name = L"dataGridViewLinkColumn1";
			this->dataGridViewLinkColumn1->ReadOnly = true;
			this->dataGridViewLinkColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridViewLinkColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(756, 72);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(119, 28);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Suchen";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(105, 76);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(622, 23);
			this->comboBox5->TabIndex = 50;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(545, 56);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 28);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Suche";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(854, 56);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 28);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Menü";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1287, 51);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 39);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Beenden";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1129, 56);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(119, 28);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Hilfe";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(990, 56);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(119, 28);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Einstellungen";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(33, 21);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(181, 101);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(100, 52);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(147, 17);
			this->label13->TabIndex = 80;
			this->label13->Text = L"Suchbegriff eingeben:";
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1482, 1057);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"Lagersystem";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

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

		einlesen(kartei, &anzahl);
		ausgabe(kartei, anzahl);
		/*
		this->dataGridView1->Rows->Add("1", "123TCS","Kondensator","120 yF","3","1","NEU","100","Texas-Instrumen","www.hs21.de" );
		this->dataGridView1->Rows->Add("3", "123TCS", "Kondensator", "120 yF", "3", "3", "NEU", "100", "Texas-Instrumen", "www.hs211.de");
		this->dataGridView1->Rows->Add("5", "123TCS", "Wiederstand", "120 yF", "3", "1", "NEU", "100", "Texas-Instrumen", "www.hs231.de");*/
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

		eingabe(kartei, &anzahl);
		speichern(kartei, anzahl);

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		//Durch Klickevent ausfüllen der Ausgabe

	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		//Neu Button bei Eingabe-Tab

		//!!!TODO : evtl speicherung abfragen bevor felder geleert werden?

		//Leeren aller Eingabeelemente
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
		comboBox4->Text = "";
		comboBox6->Text = "";
		comboBox7->Text = "";
		comboBox9->Text = "";
		comboBox10->Text = "";
		comboBox11->Text = "";
		comboBox12->Text = "";
		comboBox13->Text = "";
		comboBox14->Text = "";
		radioButton1->Checked = false;
		radioButton2->Checked = false;
	}


//---------------------------------FUNKTIONEN---------------------------------FUNKTIONEN---------------------------------FUNKTIONEN---------------------------------FUNKTIONEN---------------------------------
		 void eingabe(Bauteil kartei[MAX_SIZE], int *index) {
			 //----Abrufen einer Eingabe (char) und schreiben in das entsprechende Array----
			 //----------------------------------------------------------------------
			 //ComboBox^ temp_Box --> zu füllende ComboBox
			 //char temp_text[][STRING_LENGTH] --> Inhalt
			 //int temp_array_length --> Anzahl der Items

			 Bauteil temp;

			 //kopieren von COmboBox Inhalten in temporäres Bauteil-Array
			 strcpy(temp.bauteil_bez, CStringA(comboBox1->Text));
			 strcpy(temp.typ_bez, CStringA(comboBox2->Text));
			 temp.id_nummer = System::Convert::ToInt32(CStringA(comboBox3->Text));
			 strcpy(temp.erg_daten, CStringA(comboBox4->Text));
			 
			 //if( Tick bei einem oder anderem... --> Neu/gebraucht 
			 if (radioButton1->Checked) {
				 temp.neu_gebraucht = 'n';
			 }
			 else if (radioButton2->Checked) {
				 temp.neu_gebraucht = 'g';
			 }
			 temp.anzahl = System::Convert::ToInt32(CStringA(comboBox6->Text));

			 strcpy(temp.lagerort, CStringA(comboBox7->Text));
			 strcpy(temp.hersteller.name, CStringA(comboBox14->Text));
			 strcpy(temp.hersteller.strasse, CStringA(comboBox13->Text));
			 temp.hersteller.haus_nr = System::Convert::ToInt32(CStringA(comboBox12->Text));
			 temp.hersteller.plz = System::Convert::ToInt32(CStringA(comboBox11->Text));
			 strcpy(temp.hersteller.ort, CStringA(comboBox10->Text));
			 strcpy(temp.hersteller.internetseite, CStringA(comboBox9->Text));


			 //Abfrage nach 
			 if (temp.bauteil_bez[0] == '\0' || temp.typ_bez[0] == '\0' || temp.id_nummer == 0) {
				 //!!!Hier Label einfügen mit Fehlermeldung "Pflichtfelder prüfen"
				 this->label2->Visible = true;
			 }
			 else {
				 this->label2->Visible = false;
				 comboBox1->Text->IsNullOrWhiteSpace;
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
			 String^ temp_str = gcnew String{ temp_text };
			 temp_Box->Text = temp_str;
		 }

		 void comboBox_fill_text_int(ComboBox^ temp_Box, int temp_int) {
			 temp_Box->Text = System::Convert::ToString(temp_int);
			 
		 }

		 void autoFill_text(Bauteil such_kartei) {
			 comboBox_fill_text(comboBox14, such_kartei.hersteller.name);
			 comboBox_fill_text(comboBox10, such_kartei.hersteller.ort);
			 comboBox_fill_text(comboBox13, such_kartei.hersteller.strasse);
			 comboBox_fill_text(comboBox9, such_kartei.hersteller.internetseite);
			 comboBox12->Text = System::Convert::ToString(such_kartei.hersteller.haus_nr);
			 comboBox11->Text = System::Convert::ToString(such_kartei.hersteller.plz);
		 }

		 void listBox_fill_List(ListBox^ temp_List, Bauteil *such_kartei, int ergebnis_anzahl) {
			 //----Füllen von ListBox-Listen----
			 //---------------------------------
			 //ListBox^ temp_List --> zu füllende ListBox
			 //char temp_text[][STRING_LENGTH] --> Inhalt
			 //int temp_array_length --> Anzahl der Items


			 temp_List->Items->Clear();

			 for (int i = 0; i < ergebnis_anzahl; i++) {
				 String^ temp_str = gcnew String{ such_kartei[i].bauteil_bez };
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

		 void ausgabe(Bauteil kartei[MAX_SIZE], int index) {
			 dataGridView1->Rows->Clear();

			 for (int i = 0; i < index; i++) {
				 
				 String^ temp_baut_bez = gcnew String{ kartei[i].bauteil_bez };
				 String^ temp_typ_bez = gcnew String{ kartei[i].typ_bez };
				 String^ temp_erg_daten = gcnew String{ kartei[i].erg_daten };
				 String^ temp_lagerort = gcnew String{ kartei[i].lagerort };
				 String^ temp_hersteller_name = gcnew String{ kartei[i].hersteller.name };
				 String^ temp_hersteller_internetseite = gcnew String{ kartei[i].hersteller.internetseite };

				 String^ temp_neu_geb;
				 if (kartei[index].neu_gebraucht == 'n') {
					 temp_neu_geb = "neu";
				 }
				 else {
					 temp_neu_geb = "gebraucht";
				 }
				 dataGridView1->Rows->Add(System::Convert::ToString(kartei[index].id_nummer), temp_baut_bez, temp_typ_bez, temp_erg_daten, temp_lagerort, temp_neu_geb, System::Convert::ToString(kartei[index].anzahl), temp_hersteller_name, temp_hersteller_internetseite);
			 }
			 //dataGridView1->Rows->Add("1", "123TCS", "Kondensator", "120 yF", "3", "1", "NEU", "100", "Texas-Instrumen", "www.hs21.de");
		}

		 void ausgabe_eintragen(Bauteil kartei[MAX_SIZE], int index) {
			 
			 comboBox_fill_text(comboBox28, kartei[index].bauteil_bez);
			 comboBox_fill_text(comboBox27, kartei[index].typ_bez);
			 comboBox_fill_text_int(comboBox26, kartei[index].id_nummer);
			 comboBox_fill_text(comboBox25, kartei[index].erg_daten);
			
			 char temp_neu_geb[STRING_LENGTH];
			 if (kartei[index].neu_gebraucht = true) {
				 strcpy(temp_neu_geb, "neu");
			 }
			 else {
				 strcpy(temp_neu_geb, "gebraucht");
			 }
			 comboBox_fill_text(comboBox24, temp_neu_geb);
			 comboBox_fill_text_int(comboBox23, kartei[index].anzahl);
			 comboBox_fill_text(comboBox22, kartei[index].lagerort);

			 comboBox_fill_text(comboBox20, kartei[index].hersteller.name);
			 comboBox_fill_text(comboBox19, kartei[index].hersteller.strasse);
			 comboBox_fill_text_int(comboBox18, kartei[index].hersteller.haus_nr);
			 comboBox_fill_text_int(comboBox18, kartei[index].hersteller.plz);
			 comboBox_fill_text(comboBox16, kartei[index].hersteller.ort);
			 comboBox_fill_text(comboBox15, kartei[index].hersteller.internetseite);

		 }

private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		ausgabe_eintragen(kartei, dataGridView1->CurrentCell->RowIndex);
		
}

};
}
 



 