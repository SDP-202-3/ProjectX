#pragma once
#include <iostream>
#include <string>
using namespace std;
class User {
private:
	string login;
	string pwd;
	string email;
	string phone;
public:
	User(string lg, string pwd, string email, string num) : login(lg), pwd(pwd), email(email), phone(num) {}
	User(){}

	void setData(string lg, string pwd, string email, string num) { this->login = lg; this->pwd = pwd; this->email = email; this->phone = num; }
	string getPwd() { return pwd; }

	void print() { cout << login << " | " << pwd << " | " << email << " | " << phone << endl; }
};