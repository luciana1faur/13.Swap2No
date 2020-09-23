#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  int aux;

  cout << "Care este primul numar? ";
  cin >> a;

  cout << "Care este cel de-al doilea numar? ";
  cin >> b;

  aux = a;
  a = b;
  b = aux;

  cout << "Numerele inversate sunt:" << a << " " << b;

  return 0;
}