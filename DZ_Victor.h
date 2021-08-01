#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Cat {
private:
    string name;
    string breed;
    string color;
    string eyes_color;
public:
    Cat(string n, string b, string c, string e) : name(n), breed(b), color(c), eyes_color(e) {}
    Cat() {}

    void print() { 
        cout << "Cat Name: " << name << endl;
        cout << "Cat Breed: " << breed << endl;
        cout << "Cat Color: " << color << endl;
        cout << "Cat Eyes Color: " << eyes_color << endl;
    }
};

void read(vector<unique_ptr<Cat>>& cats) {
    ifstream file("cats.csv");
    string s[4];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (j != 3) getline(file, s[j], ';');
            else if (j == 3) getline(file, s[j]);
        }
        cats.push_back(unique_ptr<Cat>(new Cat(s[0], s[1], s[2], s[3])));
    }
    file.close();
}

void print(vector<unique_ptr<Cat>>& cats) {
    for (auto& item : cats) { 
        item->print();
    }
}