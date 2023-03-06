#include<iostream>
using namespace std;
class Goomba {
private:
	int xpos;
	int ypos;
	bool isAlive;
	char color;
public:
	Goomba();
	Goomba(int x, int y, char c);
	void walk();
	void printInfo();
	void killGoomba();
	void setPosition(int x, int y);
	bool CheckisDead();
};
int main() {
	Goomba Lary(300, 400, 'l');
	Goomba Bob;
	Lary.printInfo();
	Lary.walk();
	Lary.printInfo();
	Bob.killGoomba();
	Bob.printInfo();
	

}

Goomba::Goomba() {//default constructor
	xpos = 0;
	ypos = 0;
	isAlive = true;
	color = 'b';
}

Goomba::Goomba(int x, int y, char c) {//default constructor
	xpos = 0;
	ypos = 0;
	isAlive = true;
	color = 'b';
}

//type up parameterized constructor here!

void Goomba::walk() { xpos += 1; }

void Goomba::printInfo() {
	cout << "H, I'm a goomba and my posotion is " << xpos << "," << ypos << endl;
	cout << "I am a " << color << "goomba" << endl;
	if (isAlive == true)
		cout << "I am currently alive." << endl;
	else
		cout << "I am currently dead." << endl;
}

void Goomba::killGoomba() {
	isAlive = false;

}

void Goomba::setPosition(int x, int y) {
	xpos = x;
	ypos = y;
	isAlive = true;
}

bool Goomba::CheckisDead() {
	if (isAlive == true)
		return 1;
	if (isAlive == false)
		return 0;
}

