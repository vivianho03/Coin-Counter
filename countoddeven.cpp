#include <iostream>
#include <cmath>

using namespace std;

using std::cout;
using std::endl;
using std::cin;

main() {

int x;
int y;
int a;
int b;

cout << "Please enter 4 positive integers, separated by a space: " << endl;

cin >> x >> y >> a >> b;

int evens = 0;

int odds = 0;

    if ((x % 2) == 0) ++evens; else ++odds;
    if ((y % 2) == 0) ++evens; else ++odds;
    if ((a % 2) == 0) ++evens; else ++odds;
    if ((b % 2) == 0) ++evens; else ++odds;

    if (evens > odds)

        cout << "more evens\n";

    if (odds > evens)

        cout << "more odds\n";

    if (odds == evens)

        cout << "same quantity evens and odds\n";

    return 0;

}

