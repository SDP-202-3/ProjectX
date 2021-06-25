#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Name {
private:
	string name, surname;
	int year, IQ;
public:
	Name(string name, string surname, int year, int IQ)
		:name(name), surname(surname), year(year), IQ(IQ) {}
	Name() {}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Year: " << year << endl;
		cout << "IQ: " << IQ << endl;
	}
	int YearDate(int year) {
		int d = 2021;
		int c = d - year;
		cout << "You born in: " << c << endl;
	}
	void CheckIQ(int IQ) {
		if (IQ <= 100) {
			cout << "Not bad" << endl;
		}
		else {
			cout << "Amazing!" << endl;
		}
	}

};