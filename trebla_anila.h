#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
#define PRINT(x) cout<<(#x)<<": "<<x<<endl;
using namespace std;

template <typename T>
class Human {
	
	string color;
	int age;
	string gender;
	int height;
public:
	Human(string color, int age,string gender, int height): color(color), age(age), gender(gender), height(height){}
	Human(){}
	void print() {
		PRINT(color); PRINT(age); PRINT(gender); PRINT(height);
	}
	void get_color() {
		return color;
	}
	void get_age() {
		return age;
	}
    void get_gender() {
		return gender;
	}
    void get_height() {
		return height;
	}
};

int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	system("color 02");
	srand(time(NULL));
}