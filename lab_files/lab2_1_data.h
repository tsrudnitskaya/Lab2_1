#pragma once
#include <vector>
#include <string>
#include <ctime>
#include "functions.h"

const int marksNum = 8;			//количество оценок

struct Student {
	std::string fio;
	short sex, group, groupNum;
	short marks[marksNum];
	short edForm;
	std::string time;
	double averageScore;
};

std::vector<Student> db;	//массив записей
int numOfRecords = 0;		//количество записей в файле
int numOfLines = 0;			//количество строк в файле
int numFields = 7;			//количество строк в одной записи
std::string filename = "E:\\!Univer\\Proga labs\\Lab2_1\\Debug\\students.txt";		//путь к файлу с записями

int recordId;				//id записи, с которой ведётся работа

struct tm* timeinfo;
time_t tstamp;