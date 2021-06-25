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
};