#include <iostream>
#include <string>

#define PRINT(x) cout << (#x) << ": " << x << endl

using namespace std;

class YuYu {
	string name;
	int size;
	string login;
	int age;
public:
	YuYu(string name, string login, int size, int age) {
		this->name = name; 
		this->login = login;
		this->size = size;
		this->age = age;
	}
	YuYu(){}
	void print() {
		PRINT(name);
		PRINT(login);
		PRINT(age);
		PRINT(size);
		cout << "-------------------------------" << endl;
	}
	void sayWi(){
		cout << "WIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
	}
	void lox() {
		cout << "Kto prochital tot LOX" << endl;
	}
	void ghoul() {
		cout << "DEAD INSIDE\n1000-7????????" << endl;
	}
};
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