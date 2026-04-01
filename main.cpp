#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;

    cout << "Enter begin and end values: ";
    while (!(cin >> begin >> end) || begin > end) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Enter begin and end values: ";
    }

    for (i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "The sum of even values is " << sum << endl;

    return 0;
}