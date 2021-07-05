#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

class Olen {
private:
	string name;
	string breed;
public:
	Olen(string n, string b) :name(n), breed(b) {}
	Olen() {}
	void print() {
		cout << name << endl;
		cout << breed << endl;
	}
	static void Read(vector<Olen>& ol) {
		ifstream file("text.txt");
		string s1, s2;
		for (int i = 0; i < 2; i++) {
			getline(file, s1, ';');
			getline(file, s2);
			ol.push_back(Olen(s1, s2));
		}
		file.close();
	}
};