#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include "myarray.h
using namespace std;

class Name {
private:
	string name;
	string surname;
	int age;
	int high;
public:
	Name(string name, string surname, int age, int high)
		:name(name), surname(surname), age(age), high(high){}
	Name(){}
	void print() {
		cout << "Name:" << name << endl;
		cout << "Surname" << surname << endl;
		cout << "Age" << age << endl;
		cout << "High" << high << endl;
	}
	static void read(myarray<Name>& ps) {
		string s1, s2, s3, s4;
		ifstream file("name.csv");
		for (int i = 0; i < 10; i++) {
			getline(file, s1, ';');
			getline(file, s2, ';');
			getline(file, s3, ';');
			getline(file, s4);
			ps.push(Name(stoi(s1), s2, s3, stoi(s4)));
		}
		file.close();
	}
};