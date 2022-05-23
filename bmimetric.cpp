#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
double height;
double  weight;
double BMI;

cout << "Please enter weight in kilograms: ";
cin >> weight;

cout << "Please enter height in meters: ";
cin >> height;

BMI = weight/ (height*height);

std::cout << std::setprecision(4) << BMI << endl;

cout << "BMI is: "  << BMI << endl;

return 0;
}
