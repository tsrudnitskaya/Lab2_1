#pragma once
#include <vector>
#include <string>
#include "lab_files/lab2_1_data.h"


namespace Lab21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab2_1
	/// </summary>
	public ref class Lab2_1 : public System::Windows::Forms::Form
	{
	public:
		Lab2_1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lab2_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:
	private: System::Windows::Forms::Button^ browseBtn;


	private: System::Windows::Forms::Panel^ topPanel;
	private: System::Windows::Forms::Button^ fileReadingBtn;
	private: System::Windows::Forms::DataGridView^ dataTable;
	private: System::Windows::Forms::Panel^ workingPanel;


































































	private: System::Windows::Forms::Button^ btnSaveFile;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ reloadBtn;
	private: System::Windows::Forms::TextBox^ tbFilterGroupNum;
	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::MaskedTextBox^ tbMarks;
	private: System::Windows::Forms::MaskedTextBox^ tbGroupNum;
	private: System::Windows::Forms::MaskedTextBox^ tbGroup;
	private: System::Windows::Forms::ComboBox^ cbTime;
	private: System::Windows::Forms::Button^ timeFilterBtn;
	private: System::Windows::Forms::Button^ dateBtn;
	private: System::Windows::Forms::MonthCalendar^ calendar;
	private: System::Windows::Forms::ComboBox^ cbMarks;
	private: System::Windows::Forms::Button^ marksFilterBtn;
	private: System::Windows::Forms::Button^ fellowshipBtn;
	private: System::Windows::Forms::Button^ topBtn;
	private: System::Windows::Forms::Button^ genderBtn;
	private: System::Windows::Forms::Button^ groupBtn;
	private: System::Windows::Forms::TextBox^ tbId;
	private: System::Windows::Forms::Button^ editBtn;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::ComboBox^ cbEdForm;
	private: System::Windows::Forms::ComboBox^ cbSex;
	private: System::Windows::Forms::TextBox^ tbFio;
	private: System::Windows::Forms::Panel^ panel1;



























	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab2_1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->browseBtn = (gcnew System::Windows::Forms::Button());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->btnSaveFile = (gcnew System::Windows::Forms::Button());
			this->fileReadingBtn = (gcnew System::Windows::Forms::Button());
			this->dataTable = (gcnew System::Windows::Forms::DataGridView());
			this->workingPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->reloadBtn = (gcnew System::Windows::Forms::Button());
			this->tbFilterGroupNum = (gcnew System::Windows::Forms::TextBox());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->tbMarks = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbGroupNum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tbGroup = (gcnew System::Windows::Forms::MaskedTextBox());
			this->cbTime = (gcnew System::Windows::Forms::ComboBox());
			this->timeFilterBtn = (gcnew System::Windows::Forms::Button());
			this->dateBtn = (gcnew System::Windows::Forms::Button());
			this->calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->cbMarks = (gcnew System::Windows::Forms::ComboBox());
			this->marksFilterBtn = (gcnew System::Windows::Forms::Button());
			this->fellowshipBtn = (gcnew System::Windows::Forms::Button());
			this->topBtn = (gcnew System::Windows::Forms::Button());
			this->genderBtn = (gcnew System::Windows::Forms::Button());
			this->groupBtn = (gcnew System::Windows::Forms::Button());
			this->tbId = (gcnew System::Windows::Forms::TextBox());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->cbEdForm = (gcnew System::Windows::Forms::ComboBox());
			this->cbSex = (gcnew System::Windows::Forms::ComboBox());
			this->tbFio = (gcnew System::Windows::Forms::TextBox());
			this->topPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
			this->workingPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// browseBtn
			// 
			this->browseBtn->FlatAppearance->BorderSize = 0;
			this->browseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->browseBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"browseBtn.Image")));
			this->browseBtn->Location = System::Drawing::Point(155, 12);
			this->browseBtn->Name = L"browseBtn";
			this->browseBtn->Size = System::Drawing::Size(37, 35);
			this->browseBtn->TabIndex = 68;
			this->browseBtn->UseVisualStyleBackColor = true;
			this->browseBtn->Click += gcnew System::EventHandler(this, &Lab2_1::browseBtn_Click);
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::White;
			this->topPanel->Controls->Add(this->btnSaveFile);
			this->topPanel->Controls->Add(this->fileReadingBtn);
			this->topPanel->Controls->Add(this->browseBtn);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(784, 65);
			this->topPanel->TabIndex = 3;
			// 
			// btnSaveFile
			// 
			this->btnSaveFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSaveFile->BackColor = System::Drawing::Color::Orange;
			this->btnSaveFile->FlatAppearance->BorderColor = System::Drawing::Color::Orange;
			this->btnSaveFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveFile->ForeColor = System::Drawing::Color::White;
			this->btnSaveFile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSaveFile->Location = System::Drawing::Point(556, 15);
			this->btnSaveFile->Margin = System::Windows::Forms::Padding(2);
			this->btnSaveFile->Name = L"btnSaveFile";
			this->btnSaveFile->Size = System::Drawing::Size(208, 32);
			this->btnSaveFile->TabIndex = 71;
			this->btnSaveFile->Text = L"Сохранить изменения в файле";
			this->btnSaveFile->UseVisualStyleBackColor = false;
			this->btnSaveFile->Click += gcnew System::EventHandler(this, &Lab2_1::btnSaveFile_Click);
			// 
			// fileReadingBtn
			// 
			this->fileReadingBtn->AutoSize = true;
			this->fileReadingBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->fileReadingBtn->FlatAppearance->BorderSize = 0;
			this->fileReadingBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fileReadingBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileReadingBtn->ForeColor = System::Drawing::Color::White;
			this->fileReadingBtn->Location = System::Drawing::Point(21, 12);
			this->fileReadingBtn->Name = L"fileReadingBtn";
			this->fileReadingBtn->Size = System::Drawing::Size(116, 35);
			this->fileReadingBtn->TabIndex = 31;
			this->fileReadingBtn->Text = L"Загрузить файл";
			this->fileReadingBtn->UseVisualStyleBackColor = false;
			this->fileReadingBtn->Click += gcnew System::EventHandler(this, &Lab2_1::fileReadingBtn_Click);
			// 
			// dataTable
			// 
			this->dataTable->AllowUserToAddRows = false;
			this->dataTable->AllowUserToDeleteRows = false;
			this->dataTable->AllowUserToResizeColumns = false;
			this->dataTable->AllowUserToResizeRows = false;
			this->dataTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataTable->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataTable->BackgroundColor = System::Drawing::Color::White;
			this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataTable->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataTable->Location = System::Drawing::Point(21, 0);
			this->dataTable->MultiSelect = false;
			this->dataTable->Name = L"dataTable";
			this->dataTable->ReadOnly = true;
			this->dataTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataTable->ShowEditingIcon = false;
			this->dataTable->Size = System::Drawing::Size(743, 162);
			this->dataTable->TabIndex = 66;
			// 
			// workingPanel
			// 
			this->workingPanel->BackColor = System::Drawing::Color::White;
			this->workingPanel->Controls->Add(this->panel2);
			this->workingPanel->Controls->Add(this->panel1);
			this->workingPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->workingPanel->Location = System::Drawing::Point(0, 65);
			this->workingPanel->Name = L"workingPanel";
			this->workingPanel->Size = System::Drawing::Size(784, 476);
			this->workingPanel->TabIndex = 55;
			this->workingPanel->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataTable);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 304);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(784, 172);
			this->panel1->TabIndex = 78;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->reloadBtn);
			this->panel2->Controls->Add(this->tbFilterGroupNum);
			this->panel2->Controls->Add(this->saveBtn);
			this->panel2->Controls->Add(this->tbMarks);
			this->panel2->Controls->Add(this->tbGroupNum);
			this->panel2->Controls->Add(this->tbGroup);
			this->panel2->Controls->Add(this->cbTime);
			this->panel2->Controls->Add(this->timeFilterBtn);
			this->panel2->Controls->Add(this->dateBtn);
			this->panel2->Controls->Add(this->calendar);
			this->panel2->Controls->Add(this->cbMarks);
			this->panel2->Controls->Add(this->marksFilterBtn);
			this->panel2->Controls->Add(this->fellowshipBtn);
			this->panel2->Controls->Add(this->topBtn);
			this->panel2->Controls->Add(this->genderBtn);
			this->panel2->Controls->Add(this->groupBtn);
			this->panel2->Controls->Add(this->tbId);
			this->panel2->Controls->Add(this->editBtn);
			this->panel2->Controls->Add(this->addBtn);
			this->panel2->Controls->Add(this->cbEdForm);
			this->panel2->Controls->Add(this->cbSex);
			this->panel2->Controls->Add(this->tbFio);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(784, 304);
			this->panel2->TabIndex = 79;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(599, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 13);
			this->label8->TabIndex = 107;
			this->label8->Text = L"Номер группы";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(216, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 13);
			this->label7->TabIndex = 106;
			this->label7->Text = L"Введите Id студента";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(203, 117);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 105;
			this->label6->Text = L"Форма обучения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 13);
			this->label5->TabIndex = 104;
			this->label5->Text = L"Введите оценки через пробел";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(292, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 103;
			this->label4->Text = L"Номер в группе";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(203, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 102;
			this->label3->Text = L"Номер группы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 101;
			this->label2->Text = L"Пол";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 100;
			this->label1->Text = L"Введите ФИО";
			// 
			// reloadBtn
			// 
			this->reloadBtn->AutoSize = true;
			this->reloadBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->reloadBtn->FlatAppearance->BorderSize = 0;
			this->reloadBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reloadBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reloadBtn->ForeColor = System::Drawing::Color::White;
			this->reloadBtn->Location = System::Drawing::Point(22, 251);
			this->reloadBtn->Name = L"reloadBtn";
			this->reloadBtn->Size = System::Drawing::Size(167, 35);
			this->reloadBtn->TabIndex = 99;
			this->reloadBtn->Text = L"Вернуть полный список";
			this->reloadBtn->UseVisualStyleBackColor = false;
			// 
			// tbFilterGroupNum
			// 
			this->tbFilterGroupNum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->tbFilterGroupNum->Location = System::Drawing::Point(685, 150);
			this->tbFilterGroupNum->Name = L"tbFilterGroupNum";
			this->tbFilterGroupNum->Size = System::Drawing::Size(79, 20);
			this->tbFilterGroupNum->TabIndex = 98;
			// 
			// saveBtn
			// 
			this->saveBtn->AutoSize = true;
			this->saveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->saveBtn->Enabled = false;
			this->saveBtn->FlatAppearance->BorderSize = 0;
			this->saveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveBtn->ForeColor = System::Drawing::Color::White;
			this->saveBtn->Location = System::Drawing::Point(206, 250);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(169, 35);
			this->saveBtn->TabIndex = 97;
			this->saveBtn->Text = L"Сохранить изменения";
			this->saveBtn->UseVisualStyleBackColor = false;
			// 
			// tbMarks
			// 
			this->tbMarks->Location = System::Drawing::Point(20, 133);
			this->tbMarks->Mask = L"0 0 0 0 0 0 0 0";
			this->tbMarks->Name = L"tbMarks";
			this->tbMarks->Size = System::Drawing::Size(169, 20);
			this->tbMarks->TabIndex = 5;
			this->tbMarks->ValidatingType = System::Int32::typeid;
			// 
			// tbGroupNum
			// 
			this->tbGroupNum->Location = System::Drawing::Point(295, 79);
			this->tbGroupNum->Mask = L"09";
			this->tbGroupNum->Name = L"tbGroupNum";
			this->tbGroupNum->Size = System::Drawing::Size(80, 20);
			this->tbGroupNum->TabIndex = 4;
			this->tbGroupNum->ValidatingType = System::Int32::typeid;
			// 
			// tbGroup
			// 
			this->tbGroup->Location = System::Drawing::Point(206, 79);
			this->tbGroup->Mask = L"0000";
			this->tbGroup->Name = L"tbGroup";
			this->tbGroup->Size = System::Drawing::Size(80, 20);
			this->tbGroup->TabIndex = 3;
			this->tbGroup->ValidatingType = System::Int32::typeid;
			// 
			// cbTime
			// 
			this->cbTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cbTime->FormattingEnabled = true;
			this->cbTime->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"До полудня", L"После полудня" });
			this->cbTime->Location = System::Drawing::Point(424, 11);
			this->cbTime->Name = L"cbTime";
			this->cbTime->Size = System::Drawing::Size(164, 21);
			this->cbTime->TabIndex = 96;
			this->cbTime->Text = L"До полудня";
			// 
			// timeFilterBtn
			// 
			this->timeFilterBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->timeFilterBtn->AutoSize = true;
			this->timeFilterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->timeFilterBtn->FlatAppearance->BorderSize = 0;
			this->timeFilterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->timeFilterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeFilterBtn->ForeColor = System::Drawing::Color::White;
			this->timeFilterBtn->Location = System::Drawing::Point(424, 38);
			this->timeFilterBtn->Name = L"timeFilterBtn";
			this->timeFilterBtn->Size = System::Drawing::Size(164, 37);
			this->timeFilterBtn->TabIndex = 95;
			this->timeFilterBtn->Text = L"Фильтр по времени";
			this->timeFilterBtn->UseVisualStyleBackColor = false;
			// 
			// dateBtn
			// 
			this->dateBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateBtn->AutoSize = true;
			this->dateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->dateBtn->FlatAppearance->BorderSize = 0;
			this->dateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateBtn->ForeColor = System::Drawing::Color::White;
			this->dateBtn->Location = System::Drawing::Point(424, 248);
			this->dateBtn->Name = L"dateBtn";
			this->dateBtn->Size = System::Drawing::Size(164, 37);
			this->dateBtn->TabIndex = 94;
			this->dateBtn->Text = L"Фильтр по дате";
			this->dateBtn->UseVisualStyleBackColor = false;
			// 
			// calendar
			// 
			this->calendar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->calendar->Location = System::Drawing::Point(424, 81);
			this->calendar->Name = L"calendar";
			this->calendar->TabIndex = 93;
			// 
			// cbMarks
			// 
			this->cbMarks->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->cbMarks->FormattingEnabled = true;
			this->cbMarks->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Без стипендии", L"Хорошисты", L"Отличники" });
			this->cbMarks->Location = System::Drawing::Point(600, 222);
			this->cbMarks->Name = L"cbMarks";
			this->cbMarks->Size = System::Drawing::Size(164, 21);
			this->cbMarks->TabIndex = 92;
			this->cbMarks->Text = L"Без стипендии";
			// 
			// marksFilterBtn
			// 
			this->marksFilterBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->marksFilterBtn->AutoSize = true;
			this->marksFilterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->marksFilterBtn->FlatAppearance->BorderSize = 0;
			this->marksFilterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->marksFilterBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->marksFilterBtn->ForeColor = System::Drawing::Color::White;
			this->marksFilterBtn->Location = System::Drawing::Point(600, 248);
			this->marksFilterBtn->Name = L"marksFilterBtn";
			this->marksFilterBtn->Size = System::Drawing::Size(164, 37);
			this->marksFilterBtn->TabIndex = 91;
			this->marksFilterBtn->Text = L"Фильтр по оценкам";
			this->marksFilterBtn->UseVisualStyleBackColor = false;
			// 
			// fellowshipBtn
			// 
			this->fellowshipBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->fellowshipBtn->AutoSize = true;
			this->fellowshipBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->fellowshipBtn->FlatAppearance->BorderSize = 0;
			this->fellowshipBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fellowshipBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fellowshipBtn->ForeColor = System::Drawing::Color::White;
			this->fellowshipBtn->Location = System::Drawing::Point(600, 56);
			this->fellowshipBtn->Name = L"fellowshipBtn";
			this->fellowshipBtn->Size = System::Drawing::Size(164, 35);
			this->fellowshipBtn->TabIndex = 90;
			this->fellowshipBtn->Text = L"Стипендия";
			this->fellowshipBtn->UseVisualStyleBackColor = false;
			// 
			// topBtn
			// 
			this->topBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->topBtn->AutoSize = true;
			this->topBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->topBtn->FlatAppearance->BorderSize = 0;
			this->topBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->topBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->topBtn->ForeColor = System::Drawing::Color::White;
			this->topBtn->Location = System::Drawing::Point(600, 11);
			this->topBtn->Name = L"topBtn";
			this->topBtn->Size = System::Drawing::Size(164, 35);
			this->topBtn->TabIndex = 89;
			this->topBtn->Text = L"Вывод топа";
			this->topBtn->UseVisualStyleBackColor = false;
			// 
			// genderBtn
			// 
			this->genderBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->genderBtn->AutoSize = true;
			this->genderBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->genderBtn->FlatAppearance->BorderSize = 0;
			this->genderBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->genderBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->genderBtn->ForeColor = System::Drawing::Color::White;
			this->genderBtn->Location = System::Drawing::Point(600, 102);
			this->genderBtn->Name = L"genderBtn";
			this->genderBtn->Size = System::Drawing::Size(164, 37);
			this->genderBtn->TabIndex = 88;
			this->genderBtn->Text = L"Вывод м/ж";
			this->genderBtn->UseVisualStyleBackColor = false;
			// 
			// groupBtn
			// 
			this->groupBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBtn->AutoSize = true;
			this->groupBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->groupBtn->FlatAppearance->BorderSize = 0;
			this->groupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBtn->ForeColor = System::Drawing::Color::White;
			this->groupBtn->Location = System::Drawing::Point(600, 176);
			this->groupBtn->Name = L"groupBtn";
			this->groupBtn->Size = System::Drawing::Size(164, 35);
			this->groupBtn->TabIndex = 87;
			this->groupBtn->Text = L"Фильтр по группе";
			this->groupBtn->UseVisualStyleBackColor = false;
			// 
			// tbId
			// 
			this->tbId->Location = System::Drawing::Point(331, 176);
			this->tbId->Name = L"tbId";
			this->tbId->Size = System::Drawing::Size(44, 20);
			this->tbId->TabIndex = 86;
			// 
			// editBtn
			// 
			this->editBtn->AutoSize = true;
			this->editBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->editBtn->FlatAppearance->BorderSize = 0;
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editBtn->ForeColor = System::Drawing::Color::White;
			this->editBtn->Location = System::Drawing::Point(206, 208);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(169, 35);
			this->editBtn->TabIndex = 84;
			this->editBtn->Text = L"Загрузить запись";
			this->editBtn->UseVisualStyleBackColor = false;
			// 
			// addBtn
			// 
			this->addBtn->AutoSize = true;
			this->addBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->addBtn->FlatAppearance->BorderSize = 0;
			this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addBtn->ForeColor = System::Drawing::Color::White;
			this->addBtn->Location = System::Drawing::Point(22, 208);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(167, 35);
			this->addBtn->TabIndex = 83;
			this->addBtn->Text = L"Добавить запись";
			this->addBtn->UseVisualStyleBackColor = false;
			// 
			// cbEdForm
			// 
			this->cbEdForm->FormattingEnabled = true;
			this->cbEdForm->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Очная", L"Вечерняя", L"Заочная" });
			this->cbEdForm->Location = System::Drawing::Point(206, 133);
			this->cbEdForm->Name = L"cbEdForm";
			this->cbEdForm->Size = System::Drawing::Size(169, 21);
			this->cbEdForm->TabIndex = 6;
			this->cbEdForm->Text = L"Очная";
			// 
			// cbSex
			// 
			this->cbSex->FormattingEnabled = true;
			this->cbSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Женский", L"Мужской" });
			this->cbSex->Location = System::Drawing::Point(20, 78);
			this->cbSex->Name = L"cbSex";
			this->cbSex->Size = System::Drawing::Size(169, 21);
			this->cbSex->TabIndex = 2;
			this->cbSex->Text = L"Женский";
			// 
			// tbFio
			// 
			this->tbFio->Location = System::Drawing::Point(22, 30);
			this->tbFio->Name = L"tbFio";
			this->tbFio->Size = System::Drawing::Size(353, 20);
			this->tbFio->TabIndex = 1;
			// 
			// Lab2_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(784, 541);
			this->Controls->Add(this->workingPanel);
			this->Controls->Add(this->topPanel);
			this->Name = L"Lab2_1";
			this->Text = L"Lab2_1";
			this->topPanel->ResumeLayout(false);
			this->topPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
			this->workingPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void showForm();												//Вывод таблицы
	private: void getData(std::string filename, std::vector<Student>(&db));	//чтение данных из файла в массив
	private: void showHeader();												//вывод шапки основной таблицы
	private: void showData(std::vector<Student>(&arr));												//построчный вывод основной таблицы
	private: void reloadForm(std::vector<Student>(&arr));												//обновление таблицы
	private: void saveFile(std::string filename, std::vector<Student>(&db));												//перезапись файла
	private: int getInputNumberData(TextBox^ tb);												//чтение из инпута
	private: void loadDataWithId(int id);												//получение записи по id
	private: bool getDataFromForm(Student& temp);												//получение данных из формы
	private: double averageScore(short* arr);												//подсчёт среднего балла студента
	private: void insertSortAS(int arrayWidth, std::vector<Student>(&arr));					//сортировка вставками по среднему баллу
	private: bool isFellow(short* arr, short edForm);											//проверка, получает ли чел стипендию
	private: bool minMarks(short* arr, short min);											//проверка, получает ли чел стипендию
	private: bool isOneDate(DateTime start, DateTime end, String^ d);				//проверка на даты
	private: bool isOneTime(DateTime^ timeStart, DateTime^ timeEnd, String^ d);				//проверка на время
	private: void clearForm();																//очистка формы

	

	private: System::Void browseBtn_Click(System::Object^ sender, System::EventArgs^ e);		//клик по кнопке выбора файла
	private: System::Void fileReadingBtn_Click(System::Object^ sender, System::EventArgs^ e);		//клик по кнопке Загрузить файл
	private: System::Void btnSaveFile_Click(System::Object^ sender, System::EventArgs^ e);		//сохранение файла
	private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);		//клик по кнопке "изменить запись"		
	private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e);		//клик по кнопке "добавить запись"
	private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e);		//клик по кнопке "сохранить изменения"

private: System::Void genderBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void topBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void reloadBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void fellowshipBtn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void marksFilterBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dateBtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void timeFilterBtn_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void tbFio_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbFio->BackColor = Color::White;
}
private: System::Void tbGroup_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbGroup->BackColor = Color::White;
}
private: System::Void tbGroupNum_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbGroupNum->BackColor = Color::White;
}
private: System::Void tbMarks_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbMarks->BackColor = Color::White;
}

private: System::Void tbId_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbId->BackColor = Color::White;
}

private: System::Void tbFilterGroupNum_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	tbFilterGroupNum->BackColor = Color::White;
}
};
}
