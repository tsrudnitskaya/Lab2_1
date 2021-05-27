#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <ctime>


using namespace System;

std::string& convert_String_to_string(String^ s, std::string& os); //конверт из String^ в string
std::string& convert_String_to_string(String^ s); //конверт из String^ в string 2
String^ convert_string_to_String(std::string& os, String^ s);//конверт наоборот
String^ convert_string_to_String(std::string& os);//конверт наоборот 2
DateTime convertDate(String^ d);
int checkFile(std::string filename);//проверка открытого файла
int getNumOfLines(std::string filename);//получение количества строк в файле
int emptyValidate(std::string s);
int onlyTextValidate(std::string s);//валидация текста(без цифр и знаков)
int onlyDigitsValidate(std::string s);//валидация текста(только цифры)
	