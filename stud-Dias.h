#include <iostream>
#include<string>
#include<vector>
#include<fstream>
#define PRINT(x) cout << (#x) << ": " << x << endl
using namespace std;

class Bear {
	string color;
	int weight;
	int size;
	int age;
public:
	Bear(string color, int weight, int size, int age): color(color), weight(weight), size(size), age(age){}
	Bear(){}
	void print() {
		PRINT(color);
		PRINT(weight);
		PRINT(size);
		PRINT(age);
	}
	static void read(vector<Bear>& bs, int n = 3, string fname = "bears.csv") {
		string s1, s2, s3, s4;
		ifstream file(fname);
		for (int i = 0; i < n; i++) {
			getline(file, s1, ';');
			getline(file, s2, ';');
			getline(file, s3, ';');
			getline(file, s4);
			bs.push_back(Bear(s1, stod(s2), stod(s3), stoi(s4)));
		}
		file.close();
	}
};
