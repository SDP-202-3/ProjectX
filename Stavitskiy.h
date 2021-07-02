#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Dog {
protected:
	string color;
	string name;
	string type;
	int age;
public:
	Dog(string color, string name, string type, int age) :
		color(color), type(type), name(name), age(age) {}
	Dog() {}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Type: " << type << endl;
		cout << "Color: " << color << endl;
		cout << "Age: " << age << endl;
	}
};
void read(vector<unique_ptr<Dog>>& d) {
	ifstream file("dogs.csv");
	string s1, s2, s3, s4;
	for (int i = 0; i < d.size(); i++) {
		getline(file, s1, ';');
		getline(file, s2, ';');
		getline(file, s3, ';');
		getline(file, s4);
		d.push_back(unique_ptr<Dog>(new Dog(s1, s2, s3, stoi(s4))));
	}
	file.close();
}

int main() {

}