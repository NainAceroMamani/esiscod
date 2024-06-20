#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
  float a,b,c=0;
 
  cout << "Digite cateto 1: ";
  cin >> a;
  cout << "Digite cateto 2: ";
  cin >> b;
 
  c = sqrt(pow(a,2)+pow(b,2));
 
  cout << "La hipotenusa es " << c << endl;
 
  return 0;
}
