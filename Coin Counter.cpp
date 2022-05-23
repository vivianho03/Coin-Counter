#include <iostream> <string>
using namespace std;

int main() {

double penny = 0.01;
double nickel = 0.05;
double dime = 0.10;
double quarter = 0.25;

double sum;
double p;
double n;
double d;
double q;


cout << "Number of penny: ";
cin >>  p;
cout << "Number of nickel: ";
cin >> n;
cout << "Number of dime: ";
cin >> d;
cout << "Number of quarter: ";
cin >> q;
 sum = (p * penny) + (n * nickel) + (d *dime) + (q * quarter);
 cout << "Sum of coins: $ " <<sum;
return 0;
}
