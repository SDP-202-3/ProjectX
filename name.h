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