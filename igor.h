#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Horse {
private:
	string name;
	string breed;
	int year;
	int cost;
public:
	Horse(string n, string b, int y, int c) : name(n), breed(b), year(y), cost(c) {}
	Horse(){}

	void print() { cout << "Name: " << name << " | Breed: " << breed << "| Year: " << year << " | Cost - " << cost << endl; }
};

void read(vector<unique_ptr<Horse>>& v) {
    ifstream file("file.txt");
    string s[4];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) { 
            if (j != 3) getline(file, s[j], ';');
            else if (j == 3) getline(file, s[j]);
        }
        v.push_back(unique_ptr<Horse>(new Horse(s[0], s[1], stoi(s[2]), stoi(s[3]))));
    }
    file.close();
}

void print(vector<unique_ptr<Horse>>& v) {
    for (auto& item : v) { item->print(); cout << "-------------------------" << endl; }
}