#include "iostream"
using namespace std;

// Base class
class Animal {
  public:
    string species = "undefined";
    void move() {
      cout << "Es wurde versucht ein Tier zu bewegen welches noch nicht definiert ist!" << endl;
    }
};

// Derived class
class Dog: public Animal {
  public:
	Dog() {
		species = "Hund";
	}
	
	void move() {
		cout << "Der Hund hat sich bewegt!" << endl;
	}
	
};

int main() {
  Dog newDog;
  newDog.move();
  
  Animal someanimal;
  someanimal.move();
  return 0;
}



