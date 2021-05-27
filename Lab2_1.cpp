#include "Lab2_1.h"
#include "lab_files/lab2_1_func.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Lab21::Lab2_1 form;
	Application::Run(% form);
}


System::Void Lab21::Lab2_1::browseBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->InitialDirectory = Application::StartupPath;
	openFileDialog1->Filter = "txt files (*.txt)|*.txt";
	openFileDialog1->ShowDialog();
	convert_String_to_string(openFileDialog1->FileName, filename);
	fileReadingBtn->Enabled = true;
}

System::Void Lab21::Lab2_1::fileReadingBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	numOfLines = getNumOfLines(filename);
	int codeErr = checkFileErr1(numOfLines, numFields);
	switch (codeErr) {
	case -1:
		MessageBox::Show("Ошибка открытия файла!", "Ошибочка!");
		return;
	case -2:
		MessageBox::Show("В указанном файле нет данных!", "Ошибочка!");
		return;
	case -3:
		MessageBox::Show("Файл повреждён или заполнен неправильно!", "Ошибочка!");
		return;
	}
	showForm();
	return;
}


void Lab21::Lab2_1::showForm()
{
	numOfRecords = numOfLines / numFields;
	getData(filename, db);
	reloadForm(db);
	return;
}
void Lab21::Lab2_1::reloadForm(std::vector<Student>(&arr)) {
	dataTable->Rows->Clear();
	dataTable->Columns->Clear();
	showHeader();
	dataTable->RowCount = arr.size() + 1;
	dataTable->ColumnCount = numFields;
	showData(arr);
	dataTable->AllowUserToAddRows = false;

	workingPanel->Visible = true;
}


void Lab21::Lab2_1::saveFile(std::string filename, std::vector<Student>(&db))
{
	if (checkFile(filename)) {
		std::ofstream file(filename);
		for (int i = 0; i < numOfRecords; ++i) {
			file << db[i].fio << std::endl;
			file << db[i].sex << std::endl;
			file << db[i].group << std::endl;
			file << db[i].groupNum << std::endl;
			for (int j = 0; j < 8; ++j) {
				file << db[i].marks[j];
				if (j < 7) file << " ";
			}
			file << std::endl;
			file << db[i].edForm << std::endl;
			file << db[i].time;
			if (i < numOfRecords - 1) file << std::endl;
		}
		file.close();
		MessageBox::Show("Изменения сохранены успешно!", "Саксессфул!");
	}
	else MessageBox::Show("Ошибка открытия файла!", "Ошибочка!");
}

int Lab21::Lab2_1::getInputNumberData(TextBox^ tb)
{
	std::string s;
	convert_String_to_string(tb->Text, s);
	if (emptyValidate(s) && onlyDigitsValidate(s)) return std::stoi(s);
	else {
		return -1;
	}
}

void Lab21::Lab2_1::loadDataWithId(int id)
{
	tbFio->Text = convert_string_to_String(db[id].fio);
	cbSex->SelectedIndex = db[id].sex;
	tbGroup->Text = db[id].group.ToString();
	tbGroupNum->Text = db[id].groupNum.ToString();
	String^ temp = "";
	for (int i = 0; i < marksNum; ++i) {
		temp += db[id].marks[i].ToString();
		if (i < marksNum - 1) temp += " ";
	}
	tbMarks->Text = temp;
	cbEdForm->SelectedIndex = db[id].edForm;
}

bool Lab21::Lab2_1::getDataFromForm(Student& temp)
{
	short err = 0;
	std::string tempstr = "";

	convert_String_to_string(tbFio->Text, tempstr);
	if (!emptyValidate(tempstr) || !onlyTextValidate(tempstr)) {
		tbFio->BackColor = Color::LightPink;
		err += 1;
	}
	else {
		temp.fio = tempstr;
	}

	switch (cbSex->SelectedIndex) {
	case 0:
		temp.sex = 0;
		break;
	case 1:
		temp.sex = 1;
		break;
	}

	convert_String_to_string(tbGroup->Text, tempstr);
	if (!emptyValidate(tempstr)) {
		tbGroup->BackColor = Color::LightPink;
		err += 1;
	}
	else {
		temp.group = std::stoi(tempstr);
	}


	convert_String_to_string(tbGroupNum->Text, tempstr);
	if (!emptyValidate(tempstr)) {
		tbGroupNum->BackColor = Color::LightPink;
		err += 1;
	}
	else {
		temp.groupNum = std::stoi(tempstr);
	}

	convert_String_to_string(tbMarks->Text, tempstr);
	if (tempstr == "              ") {
		tbMarks->BackColor = Color::LightPink;
		err += 1;
	}
	else {
		int i = 0;
		for (const unsigned char c : tempstr) {
			if (c >= 50 && c <= 53) {
				temp.marks[i] = c - '0';
				i++;
			}
			else if (c > 53) {
				break;
			}
		}
		if (i < 7) {
			tbMarks->BackColor = Color::LightPink;
			err += 1;
		}
		else
			temp.averageScore = averageScore(temp.marks);
	}


	switch (cbEdForm->SelectedIndex) {
	case 0:
		temp.edForm = 0;
		break;
	case 1:
		temp.edForm = 1;
		break;
	case 2:
		temp.edForm = 2;
	}
	DateTime^ time = DateTime::Now;
	std::string s;
	temp.time = convert_String_to_string(time->ToString("ddd MMM d HH:mm:ss yyyy", System::Globalization::CultureInfo::CreateSpecificCulture("en-US")), s);
	return (err == 0) ? 1 : 0;
}

double Lab21::Lab2_1::averageScore(short* arr)
{
	double averageScore = 0;
	for (int i = 0; i < marksNum; i++) {
		averageScore += arr[i];
	}
	return averageScore / marksNum;
}

void Lab21::Lab2_1::insertSortAS(int arrayWidth, std::vector<Student>(&arr))
{
	for (int i = 1; i < arrayWidth; i++) {
		for (int j = i; j > 0 && arr[j - 1].averageScore < arr[j].averageScore; j--)
			std::swap(arr[j - 1], arr[j]);
	}	
}

bool Lab21::Lab2_1::isFellow(short* arr, short edForm)
{
	if (!minMarks(arr, 4)) return 0;
	if (edForm != 0) return 0;
	return 1;
}

bool Lab21::Lab2_1::minMarks(short* arr, short min)
{
	for (int i = 0; i < marksNum; ++i)
		if (arr[i] < min) return 0;
	return 1;
}

bool Lab21::Lab2_1::isOneDate(DateTime start, DateTime end, String^ d)
{
	DateTime recordDate = convertDate(d); 
	if (recordDate.Date >= start.Date && recordDate.Date <= end.Date) return 1;
	else return 0;
}

bool Lab21::Lab2_1::isOneTime(DateTime^ timeStart, DateTime^ timeEnd, String^ d)
{
	DateTime recordDate = convertDate(d);
	if (recordDate.TimeOfDay >= timeStart->TimeOfDay && recordDate.TimeOfDay <= timeEnd->TimeOfDay) return 1;
	else return 0;
}

void Lab21::Lab2_1::clearForm()
{
	tbFio->Text = "";
	tbGroup->Text = "";
	tbGroupNum->Text = "";
	tbMarks->Text = "";

}




void Lab21::Lab2_1::getData(std::string filename, std::vector<Student> (&db))
{
	if (checkFile(filename)) {
		db.clear();
		Student buf;

		std::string clear = "";
		std::ifstream file(filename);
		for (int i = 0; i < numOfRecords; ++i) {
			std::getline(file, buf.fio);
			file >> buf.sex >> buf.group >> buf.groupNum;
			for (int j = 0; j < 8; ++j) {
				file >> buf.marks[j];
			}
			file >> buf.edForm;
			std::getline(file, buf.time);
			std::getline(file, buf.time);
			buf.averageScore = averageScore(buf.marks);

			db.push_back(buf);
		}
		file.close();
	}
	else MessageBox::Show("Ошибка открытия файла!", "Ошибочка!");
}

void Lab21::Lab2_1::showHeader()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "fio";
	c1->HeaderText = "Имя";
	c1->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
	dataTable->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "sex";
	c2->HeaderText = "Пол";
	dataTable->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "group";
	c3->HeaderText = "Группа";
	dataTable->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "groupNum";
	c4->HeaderText = "№";
	dataTable->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "marks";
	c5->HeaderText = "Оценки";
	dataTable->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "edForm";
	c6->HeaderText = "Форма обучения";
	dataTable->Columns->Add(c6);

	DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
	c7->Name = "time";
	c7->HeaderText = "Изменено";
	dataTable->Columns->Add(c7);

	dataTable->TopLeftHeaderCell->Value = "№";
}

void Lab21::Lab2_1::showData(std::vector<Student>(&arr))
{
	std::string temp;
	for (int i = 0; i < dataTable->RowCount - 1; i++) {
		dataTable->Rows[i]->HeaderCell->Value = (i + 1).ToString();
		dataTable->Rows[i]->Cells[0]->Value = convert_string_to_String(arr[i].fio);
		
		switch (arr[i].sex) {
		case 0: 
			temp = "Женский";
			break;
		case 1:
			temp = "Мужской";
			break;
		default:
			temp = "Не определился";
		}

		dataTable->Rows[i]->Cells[1]->Value = convert_string_to_String(temp);
		dataTable->Rows[i]->Cells[2]->Value = (arr[i].group).ToString();
		dataTable->Rows[i]->Cells[3]->Value = (arr[i].groupNum).ToString();
		temp = "";
		for (int j = 0; j < 8; j++) {
			if (arr[i].marks[j] > 0 && arr[i].marks[j] < 6) {
				temp += std::to_string(arr[i].marks[j]);
				temp += " ";
			}
			else {
				temp = "Ошибка";
				break;
			}
		}
		dataTable->Rows[i]->Cells[4]->Value = convert_string_to_String(temp);
		switch (arr[i].edForm) {
		case 0:
			temp = "Очная";
			break;
		case 1:
			temp = "Вечерняя";
			break;
		case 2:
			temp = "Заочная";
			break;
		default:
			temp = "Ошибка";
		}
		dataTable->Rows[i]->Cells[5]->Value = convert_string_to_String(temp);
		dataTable->Rows[i]->Cells[6]->Value = convert_string_to_String(arr[i].time);
	}
}


System::Void Lab21::Lab2_1::addBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Student temp;
	bool checkForm = getDataFromForm(temp);

	if (checkForm) {
		db.push_back(temp);
		numOfRecords++;
		reloadForm(db);
		clearForm();
	}

}

System::Void Lab21::Lab2_1::btnSaveFile_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveFile(filename, db);
}

System::Void Lab21::Lab2_1::editBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int id = getInputNumberData(tbId) - 1;
	if (id >= 0 && id < numOfRecords) {
		loadDataWithId(id);
		recordId = id;
		saveBtn->Enabled = true;
		tbId->Text = "";
	}
	else {
		tbId->BackColor = Color::LightPink;
		tbId->Text = "";
		MessageBox::Show("Введите существующий ID", "Ошибочка");
	}
}

System::Void Lab21::Lab2_1::saveBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	Student temp;
	bool checkForm = getDataFromForm(temp);

	if (checkForm) {
		db[recordId] = temp;
		reloadForm(db);
		saveBtn->Enabled = false;
		clearForm();
	}

}

System::Void Lab21::Lab2_1::genderBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int femNum = 0;
	for (const auto& record : db) {
		if (record.sex == 0) femNum++;
	}
	String^ mestext = "В списке:\n" + "девушек: " + femNum.ToString() + "\n" + "парней: " + (numOfRecords - femNum).ToString();
	MessageBox::Show(mestext, "Для информации");
}

System::Void Lab21::Lab2_1::groupBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int groupId = getInputNumberData(tbFilterGroupNum);

	std::vector<Student> temp;
	if (groupId > 0) {
		for (int i = 0; i < numOfRecords; ++i) {
			if (db[i].group == groupId)
				temp.push_back(db[i]);
		}
		if (temp.size() > 0)
			reloadForm(temp);
		else
			MessageBox::Show("В списке нет студентов группы " + groupId, "Варнинг!");
	}
	else tbFilterGroupNum->BackColor = Color::LightPink;
}
System::Void Lab21::Lab2_1::topBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::vector<Student> temp(db), top;
	insertSortAS(numOfRecords, temp);
	for (auto& record: temp) {
		top.push_back(record);
	}
	reloadForm(top);
}

System::Void Lab21::Lab2_1::reloadBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	reloadForm(db);
}

System::Void Lab21::Lab2_1::fellowshipBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	int fellowNum = 0;
	for (auto& record : db) {
		if (isFellow(record.marks, record.edForm))
			fellowNum++;
	}
	MessageBox::Show("Количество студентов, получающих стипендию: " + fellowNum, "Прост для информации");
}

System::Void Lab21::Lab2_1::marksFilterBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::vector<Student> temp;
	switch (cbMarks->SelectedIndex) {
	case 0:
		for (auto& record : db) {
			if (!isFellow(record.marks, record.edForm))
				temp.push_back(record);
		}
		break;
	case 1:
		for (auto& record : db) {
			if (minMarks(record.marks, 4))
				temp.push_back(record);
		}
		break;
	case 2:
		for (auto& record : db) {
			if (minMarks(record.marks, 5))
				temp.push_back(record);
		}
		break;
	}

	if (temp.size() > 0)
		reloadForm(temp);
	else
		MessageBox::Show("В списке студентов с такими оценками", "Варнинг!");
}

System::Void Lab21::Lab2_1::dateBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::vector<Student> temp;
	for (auto& record : db) {
		if(isOneDate(calendar->SelectionStart, calendar->SelectionEnd, convert_string_to_String(record.time)))
			temp.push_back(record);
	}
	if (temp.size() > 0)
		reloadForm(temp);
	else
		MessageBox::Show("В списке нет записей с указанной датой", "Варнинг!");
}

System::Void Lab21::Lab2_1::timeFilterBtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::vector<Student> temp;
	DateTime^ timeStart;
	DateTime^ timeEnd;
	switch (cbTime->SelectedIndex) {
	case 0:
		timeStart = gcnew DateTime(2020,05,27,0,0,0);
		timeEnd = gcnew DateTime(2020, 05, 27,11,59,59);
		break;
	case 1:
		timeStart = gcnew DateTime(2020, 05, 27, 12, 0, 0);
		timeEnd = gcnew DateTime(2020, 05, 27, 23, 59, 59);
	}
	for (auto& record : db) {
		if (isOneTime(timeStart, timeEnd, convert_string_to_String(record.time)))
			temp.push_back(record);
	}
	if (temp.size() > 0)
		reloadForm(temp);
	else
		MessageBox::Show("В списке нет записей с указанным временем", "Варнинг!");
}
