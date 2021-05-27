#pragma once
#include <vector>
#include <string>
#include <ctime>
#include "functions.h"

const int marksNum = 8;			//���������� ������

struct Student {
	std::string fio;
	short sex, group, groupNum;
	short marks[marksNum];
	short edForm;
	std::string time;
	double averageScore;
};

std::vector<Student> db;	//������ �������
int numOfRecords = 0;		//���������� ������� � �����
int numOfLines = 0;			//���������� ����� � �����
int numFields = 7;			//���������� ����� � ����� ������
std::string filename = "E:\\!Univer\\Proga labs\\Lab2_1\\Debug\\students.txt";		//���� � ����� � ��������

int recordId;				//id ������, � ������� ������ ������

struct tm* timeinfo;
time_t tstamp;