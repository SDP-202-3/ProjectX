#pragma once


#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class User {
protected:
	string name;
	string sname;
	int email;
	int password;
public:
	User(string name, string sname,int email,int password)
		:name(name),sname(sname),email(email),password(password){}
	User(){}
	void print() {
		cout << "name:" << name << endl;
		cout << "sname:" << sname << endl;
		cout << "email:" << email << endl;
		cout << "password:" << password << endl;
	}
	string generatePwd(int n = 10) {
		string newpwd;
		string s = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
		for (int i = 0; i < n; i++) {
			newpwd += s[rand() % s.length()];
		}
		return newpwd;
	}
	void checkpwd(string password) {
		bool g = false;
		string valid_password = "qwertyuiopasdfghjklzxcvbnm";
		if (password.length() > 8) {
			cout << "you can enter" << endl;
		}
		else {
			g = true;
		}
	}

	void checkemail(string email) {
		bool f = false;
		if (email.length() > 10) {
			cout << "correct" << endl;
		}
		else {
			cout << "incorrect" << endl;
		}
	}
};
int main() {

}
