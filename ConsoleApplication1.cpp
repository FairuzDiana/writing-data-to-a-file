#include "pch.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void main()
{
	char name[25];
	char id[5];
	float m1, m2, m3, m4, m5;

	ofstream outputFile("studentMarks.text", ios::out);

	if (!outputFile)
	{
		cerr << "File could not be opened \n";
		exit(1);
	}

	cout << "please enter the student id, name and five" << "marks:\n";
	cin >> id >> name >> m1 >> m2 >> m3 >> m4 >> m5;
	outputFile << id << " " << name << " " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
}

