#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <ctime>


using namespace System;

std::string& convert_String_to_string(String^ s, std::string& os); //������� �� String^ � string
std::string& convert_String_to_string(String^ s); //������� �� String^ � string 2
String^ convert_string_to_String(std::string& os, String^ s);//������� ��������
String^ convert_string_to_String(std::string& os);//������� �������� 2
DateTime convertDate(String^ d);
int checkFile(std::string filename);//�������� ��������� �����
int getNumOfLines(std::string filename);//��������� ���������� ����� � �����
int emptyValidate(std::string s);
int onlyTextValidate(std::string s);//��������� ������(��� ���� � ������)
int onlyDigitsValidate(std::string s);//��������� ������(������ �����)
	