#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;

class User {
protected:
	string login;
	string pwd;
	string name;
	int age;
public:
	User(string login, string pwd,string name,int age):
		login(login),pwd(pwd),name(name),age(age){}
	User(){}
	void print() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Login: " << login << endl;
		cout << "Pwd: " << pwd << endl;
	}
	string getPwd() { return pwd; }
	void setPwd(string value) { pwd = value; }
	string generatePwd(int n = 10) {
		string newpwd;
		string s = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
		for (int i = 0; i < n; i++) {
			newpwd += s[rand() % s.length()];
		}
		return newpwd;
	}
	void CheckPwd(string p) {
		bool ggg = false;
		if (p.length() < 8)
			cout << "Dont correct password" << endl;
		else {
			ggg = true;
		}
	}
	void CheckName(string s) {
		bool fn = false;
		if (isupper(s[0])) fn = true;
		else {
			cout << "Dont correct name" << endl;
		}
	}

};


int main() {

}