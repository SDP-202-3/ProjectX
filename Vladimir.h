#include <iostream>
using namespace std;

class antimage {
public:
	antimage(int a,int b,int c,int d);
	void print();
	void attack();
	void eat_mana();
	void tango();
private:
	int hp;
	int mana;
	int lvl;
	int damage;
};

antimage::antimage(int a, int b, int c, int d) {
	hp = a;
	mana = b;
	lvl = c;
	damage = d;
}

void antimage::print() {
	cout << hp << endl;
	cout << mana << endl;
	cout << lvl << endl;
	cout << damage << endl;
}

void antimage::attack() {
	cout << "he attack" << endl;
}

void antimage::eat_mana() {
	cout << "he ate" << endl;
}

void antimage::tango() {
	cout << "he heal" << endl;
}
