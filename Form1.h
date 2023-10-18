#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		static int Size = 100000000;
		static array<int>^ arr = gcnew array<int>(Size + 1);
		static array<int>^ arr2 = gcnew array<int>(Size + 1);
	private: System::Windows::Forms::Label^ label18;
	public:

		void unoptimized_search() {
			int key = Convert::ToInt32(numericUpDown_key->Value);
			int start_time = clock();
			for (int i = 0; i < Size; i++) {
				if (arr[i] == key) {
					int end_time = clock();
					textBox_time->Text = Convert::ToString(end_time - start_time);
					textBox_index->Text = Convert::ToString(i);
					return;
				}
			}
			int end_time = clock();
			textBox_time->Text = Convert::ToString(end_time - start_time);
			textBox_index->Text = "Не найден";
		}
		void optimized_search() {
			int key = Convert::ToInt32(numericUpDown_key->Value);
			int i = 0;
			arr[Size] = key;
			int start_time = clock();
			while (key != arr[i]) {
				i++;
			}
			int end_time = clock();
			textBox_time_optimized_search->Text = Convert::ToString(end_time - start_time);
			if (i == Size) {
				textBox_index_optimized_search->Text = "Не найден";
			}
			else {
				textBox_index_optimized_search->Text = Convert::ToString(i);
			}
		}
		void optimized_search_por() {
			int key = Convert::ToInt32(numericUpDown_key_por->Value);
			int i = 0;
			arr2[Size] = key;
			int start_time = clock();
			while (key != arr2[i]) {
				i++;
			}
			int end_time = clock();
			textBox_time_por->Text = Convert::ToString(end_time - start_time);
			if (i == Size) {
				textBox_index_por->Text = "Не найден";
			}
			else {
				textBox_index_por->Text = Convert::ToString(i);
			}
		}
		void optimized_search_pora() {

			int key = Convert::ToInt32(numericUpDown_key_por->Value);
			arr2[Size] = key+1;
			int i = 0;
			int start_time = clock();
			while (key > arr2[i]) {
				i++;
			}
			int end_time = clock();
			textBox_time_por_por->Text = Convert::ToString(end_time - start_time);
			if (key == arr2[i]) {
				textBox_index_por_por->Text = Convert::ToString(i);
			}
			else {
				textBox_index_por_por->Text = "Не найден";
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_key;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox_index_optimized_search;

	private: System::Windows::Forms::TextBox^ textBox_time_optimized_search;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox_index_por_por;
	private: System::Windows::Forms::TextBox^ textBox_time_por_por;





	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_key_por;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox_index_por;

	private: System::Windows::Forms::TextBox^ textBox_time_por;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button_close;
	private: System::Windows::Forms::Label^ label17;
	public:
		
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox_index;
	private: System::Windows::Forms::TextBox^ textBox_time;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button_find;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_index_optimized_search = (gcnew System::Windows::Forms::TextBox());
			this->textBox_time_optimized_search = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_key = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_find = (gcnew System::Windows::Forms::Button());
			this->textBox_index = (gcnew System::Windows::Forms::TextBox());
			this->textBox_time = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox_index_por_por = (gcnew System::Windows::Forms::TextBox());
			this->textBox_time_por_por = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_key_por = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox_index_por = (gcnew System::Windows::Forms::TextBox());
			this->textBox_time_por = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_key))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_key_por))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(196, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Лабораторная работа 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ключ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Индекс";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Время";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox_index_optimized_search);
			this->panel1->Controls->Add(this->textBox_time_optimized_search);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->numericUpDown_key);
			this->panel1->Controls->Add(this->button_find);
			this->panel1->Controls->Add(this->textBox_index);
			this->panel1->Controls->Add(this->textBox_time);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(12, 142);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(322, 299);
			this->panel1->TabIndex = 4;
			// 
			// textBox_index_optimized_search
			// 
			this->textBox_index_optimized_search->Location = System::Drawing::Point(83, 214);
			this->textBox_index_optimized_search->Name = L"textBox_index_optimized_search";
			this->textBox_index_optimized_search->ReadOnly = true;
			this->textBox_index_optimized_search->Size = System::Drawing::Size(211, 22);
			this->textBox_index_optimized_search->TabIndex = 13;
			// 
			// textBox_time_optimized_search
			// 
			this->textBox_time_optimized_search->Location = System::Drawing::Point(83, 186);
			this->textBox_time_optimized_search->Name = L"textBox_time_optimized_search";
			this->textBox_time_optimized_search->ReadOnly = true;
			this->textBox_time_optimized_search->Size = System::Drawing::Size(211, 22);
			this->textBox_time_optimized_search->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 16);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Время";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Индекс";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(42, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(179, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Оптимальный поиск";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(42, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(199, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Неоптимальный поиск";
			// 
			// numericUpDown_key
			// 
			this->numericUpDown_key->Location = System::Drawing::Point(83, 49);
			this->numericUpDown_key->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown_key->Name = L"numericUpDown_key";
			this->numericUpDown_key->Size = System::Drawing::Size(211, 22);
			this->numericUpDown_key->TabIndex = 8;
			// 
			// button_find
			// 
			this->button_find->Location = System::Drawing::Point(21, 242);
			this->button_find->Name = L"button_find";
			this->button_find->Size = System::Drawing::Size(273, 42);
			this->button_find->TabIndex = 7;
			this->button_find->Text = L"Найти";
			this->button_find->UseVisualStyleBackColor = true;
			this->button_find->Click += gcnew System::EventHandler(this, &Form1::button_find_Click);
			// 
			// textBox_index
			// 
			this->textBox_index->Location = System::Drawing::Point(83, 105);
			this->textBox_index->Name = L"textBox_index";
			this->textBox_index->ReadOnly = true;
			this->textBox_index->Size = System::Drawing::Size(211, 22);
			this->textBox_index->TabIndex = 6;
			this->textBox_index->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox_time
			// 
			this->textBox_time->Location = System::Drawing::Point(83, 77);
			this->textBox_time->Name = L"textBox_time";
			this->textBox_time->ReadOnly = true;
			this->textBox_time->Size = System::Drawing::Size(211, 22);
			this->textBox_time->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(43, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(229, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Неупорядоченный массив";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(12, 69);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(322, 67);
			this->panel2->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label10);
			this->panel3->Location = System::Drawing::Point(340, 69);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(322, 67);
			this->panel3->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(43, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(209, 20);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Упорядоченный массив";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->textBox_index_por_por);
			this->panel4->Controls->Add(this->textBox_time_por_por);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->numericUpDown_key_por);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->textBox_index_por);
			this->panel4->Controls->Add(this->textBox_time_por);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel4->Location = System::Drawing::Point(340, 142);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(322, 299);
			this->panel4->TabIndex = 6;
			// 
			// textBox_index_por_por
			// 
			this->textBox_index_por_por->Location = System::Drawing::Point(83, 214);
			this->textBox_index_por_por->Name = L"textBox_index_por_por";
			this->textBox_index_por_por->ReadOnly = true;
			this->textBox_index_por_por->Size = System::Drawing::Size(211, 22);
			this->textBox_index_por_por->TabIndex = 13;
			// 
			// textBox_time_por_por
			// 
			this->textBox_time_por_por->Location = System::Drawing::Point(83, 186);
			this->textBox_time_por_por->Name = L"textBox_time_por_por";
			this->textBox_time_por_por->ReadOnly = true;
			this->textBox_time_por_por->Size = System::Drawing::Size(211, 22);
			this->textBox_time_por_por->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 16);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Время";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(18, 214);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 16);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Индекс";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(42, 146);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(191, 20);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Как в упорядоченном";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(42, 13);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(211, 20);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Как в неупорядоченном";
			// 
			// numericUpDown_key_por
			// 
			this->numericUpDown_key_por->Location = System::Drawing::Point(83, 49);
			this->numericUpDown_key_por->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { -727379968, 232, 0, 0 });
			this->numericUpDown_key_por->Name = L"numericUpDown_key_por";
			this->numericUpDown_key_por->Size = System::Drawing::Size(211, 22);
			this->numericUpDown_key_por->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 42);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox_index_por
			// 
			this->textBox_index_por->Location = System::Drawing::Point(83, 105);
			this->textBox_index_por->Name = L"textBox_index_por";
			this->textBox_index_por->ReadOnly = true;
			this->textBox_index_por->Size = System::Drawing::Size(211, 22);
			this->textBox_index_por->TabIndex = 6;
			// 
			// textBox_time_por
			// 
			this->textBox_time_por->Location = System::Drawing::Point(83, 77);
			this->textBox_time_por->Name = L"textBox_time_por";
			this->textBox_time_por->ReadOnly = true;
			this->textBox_time_por->Size = System::Drawing::Size(211, 22);
			this->textBox_time_por->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 77);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 16);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Время";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 51);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 16);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Ключ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 105);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(55, 16);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Индекс";
			// 
			// button_close
			// 
			this->button_close->Location = System::Drawing::Point(294, 447);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(113, 27);
			this->button_close->TabIndex = 8;
			this->button_close->Text = L"выход";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &Form1::button_close_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(178, 8);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(315, 29);
			this->label18->TabIndex = 9;
			this->label18->Text = L"Хмыренков Никита 22ВП1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 481);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_key))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_key_por))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button_find_Click(System::Object^ sender, System::EventArgs^ e) {
	unoptimized_search();
	optimized_search();
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	Random^ rnd = gcnew Random();
	for (int i = 0; i < Size; i++) {
		arr[i] = rnd->Next(0, Size);
	}
	arr2[0]= rnd->Next(0, 5);
	for (int i = 1; i < Size; i++) {
		arr2[i] =arr2[i-1]+ rnd->Next(1, 5);
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_close_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	optimized_search_por();
	optimized_search_pora();
}
};
}
