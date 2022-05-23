#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
int height;
int weight;
double kg;
double m;
double BMI;




cout << "Please enter weight in pounds: ";
cin >> weight;

kg = weight * 0.453592;

cout << "Please enter height in inches: ";
cin >> height;

m = height * 0.0254;

BMI = kg / (m * m);

std::cout << std::setprecision(4) << BMI << endl;

cout << "BMI is: " << BMI << endl;
return 0;
}
