#include "iostream"
#include "utils.h"

using namespace std;

int main() {
  
  cout << "Multiple Files DEMO" << endl;
  
  int a;
  int b;
  
  
  cout << "Erste Zahl: " << endl;
  cin >> a;
  cout << "Zweite Zahl: " << endl;
  cin >> b;
  
  int result = Addition(a, b);
  
  cout << "Ergebnis: " << result << endl;
  
  cin.get();
  
  return 0;
}



