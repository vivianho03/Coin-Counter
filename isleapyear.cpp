#include <iostream>
#include <cmath>

using namespace std;

int main() {

int y;

cout << "Enter a year: ";

cin >> y;

if ( y % 400 == 0)

    cout << y << " was a leap year.";

else if ( y % 100 == 0)

    cout << y << " was not a leap year.";

else if ( y % 4 == 0)

    cout << y << " was a leap year.";

else

    cout << y << " was not a leap year.";

return 0;

}
