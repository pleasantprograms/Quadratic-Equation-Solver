#include <iostream>
#include <math.h>
using namespace std;

int main () {
  
  double a,b,c;
  cout << "Enter the value of a" << endl;
  cin >> a;
  
  cout << "Enter the value of b" << endl;
  cin >> b;
  
  cout << "Enter the value of c" << endl;
  cin >> c;

  if (pow(b,2) >= 4*a*c) {
   double p = (-b + (sqrt (pow(b,2) - 4 * a * c)))/(2 * a);
   double q = (-b - (sqrt (pow(b,2) - 4 * a * c)))/(2 * a);
   
   cout << "The roots of your quadratic equation is/are " << p << " and " << q << endl;}
  
  else {cout << "The quadratic equation does not have real solutions" << endl;}
}
