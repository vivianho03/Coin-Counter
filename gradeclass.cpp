 #include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int x;
    int y;


    cout << "Please enter 2 grades, separated by a space:";
    cin >> x >> y;

    if (x < 60 && y < 60) {

        cout << "Student Failed:(";

   } else if (x >= 95 && y >= 95) {

        cout << "Student Graduated with Honors:)";

   } else {

        cout << "Student Graduated!";

    return 0;
}
}

