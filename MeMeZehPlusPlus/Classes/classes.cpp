#include "iostream"
using namespace std;

class Fruit {
	public:
		string color;
		int weight;
		string name;
		bool ispeeled;
		
		Fruit(){
			cout << "Eine Frucht wurde erstellt!" << endl;
		}
};

class FruitFactory {	
	public:
		FruitFactory() {
			cout << "Die Fruchtfabrik wurde erstellt!" << endl;
		}
	
		Fruit CreateFruit(string name, string color, int weight) {
			Fruit obj;
			obj.color = color;
			obj.name = name;
			obj.weight = weight;
			obj.ispeeled = false;
			return obj;
		}
};

int main()
{
		FruitFactory myfruitfactory;
		Fruit banana = myfruitfactory.CreateFruit("Banane", "gelb", 100);
		
		cout << "Frucht: " << banana.name << " / Farbe: " << banana.color << " / Gewicht: " << banana.weight << "g" <<endl;
		
		if(banana.ispeeled == false)
			cout << "Die Frucht ist noch nicht geschält!" << endl;
		
		return 0;
}



