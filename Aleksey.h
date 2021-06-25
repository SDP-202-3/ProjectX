#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <Windows.h>
#include <conio.h>
using namespace std;


class User {

	string login;
	string password;
	int id;
	string name;
public:
	User(string login,string password, int id, string name): login(login),password(password),id(id),name(name){}
	User(){}
	void print() {
		cout << "login :" << login << endl;
		cout << "password :" << password << endl;
		cout << "id :" << id << endl;
		cout << "name :" << name << endl;

	}
	string generatePwd(int n = 10) {
		string newpwd;
		string s = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
		for (int i = 0; i < n; i++) {
			newpwd += s[rand() % s.length()];
		}
		return newpwd;
	}

	string generateID(int n = 20) {
		string newID;
		string s = "1234567890";
		for (int i = 0; i < n; i++) {
			newID += s[rand() % s.length()];
		}
		return newID;
	}
};