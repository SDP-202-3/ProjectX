#include <iostream>
#include<string>

#define PRINT(x) cout << (#x) << ": " << x << endl;

using namespace std;

class YuYu {
	string name;
	string login;
	int mmr;
	int age;
public:
	YuYu(string name, string login, int mmr, int age):name(name), login(login), mmr(mmr), age(age){}
	YuYu(){}
	void print() {
		PRINT(name);
		PRINT(login);
		PRINT(mmr);
		PRINT(age);
	}
	void sayWi() {
		cout << "WIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
	}
	void lox() {
		cout << "Tko prochital tot LOX!)))" << endl;
	}
	void ghoul() {
		cout << "DEAD INSIDE s " << mmr << "\n1000-7?????" << endl;
	}
};
