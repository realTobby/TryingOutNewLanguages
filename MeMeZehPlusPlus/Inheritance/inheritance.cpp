#include "iostream"
using namespace std;

// Base class
class Animal {
  public:
    string species = "undefined";
	string sound = "???";
    void move() {
      cout << "Es wurde versucht ein Tier zu bewegen welches noch nicht definiert ist!" << endl;
    }
	void doAnimalSound() {
		cout << "Das undefinierte Tier kann kein Geräusch machen!" << endl;
	}
};

// Derived class
class Dog: public Animal {
  public:
	Dog() {
		species = "Hund";
		sound = "woof, woof!";
	}
	
	void move() {
		cout << "Der Hund hat sich bewegt!" << endl;
	}
	
	void doAnimalSound() {
		cout << "Der Hund sagt " << sound << endl;
	}
	
};

int main() {
  Dog newDog = new Dog();
  newDog.move();
  newDog.doAnimalSound();
  Animal someanimal;
  someanimal.move();
  someanimal.doAnimalSound();
  return 0;
}



