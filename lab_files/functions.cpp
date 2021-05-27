#include "functions.h"

std::string& convert_String_to_string(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

std::string& convert_String_to_string(String^ s)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	std::string os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

String^ convert_string_to_String(std::string& os, String^ s)
{
	return s = gcnew String(os.c_str());
}

String^ convert_string_to_String(std::string& os)
{
	String^ s;
	return s = gcnew String(os.c_str());
}

DateTime convertDate(String^ d)
{
	/*DateTime recordDate = DateTime::ParseExact(d, "ddd MMM dd hh:mm:ss yyyy", System::Globalization::CultureInfo::CreateSpecificCulture("ru-RU"));*/
	DateTime recordDate = DateTime::ParseExact(d, "ddd MMM dd HH:mm:ss yyyy", System::Globalization::CultureInfo::InvariantCulture);
	return recordDate;
}

int getNumOfLines(std::string filename)
{
	if (checkFile(filename)) {
		std::ifstream file(filename);
		int num = 0; 
		std::string line;
		while (getline(file, line))
		{
			num++;
		}
		file.close();
		return num;
	}	
	else return -1;
	
}

int checkFile(std::string filename)
{
	std::ifstream file(filename);
	if (file) {
		file.close();
		return 1;
	}
	else return 0;
}

int emptyValidate(std::string s)
{
	return (s == "") ? 0 : 1;
}
int onlyTextValidate(std::string s)
{
	bool flag = 0;
	for (const unsigned char c : s) {
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ||
			(c >= 192 && c <= 255) || c == 32) flag = 0;
		else return 0;
	}
	return 1;
}

int onlyDigitsValidate(std::string s)
{
	for (const char c : s) {
		if (!isdigit(c)) {
			return 0;
		}
	}
	return 1;
}
