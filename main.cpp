#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;

    
    do {
        cout << "Enter begin and end values: ";
        cin >> begin >> end;
    } while (begin > end);

    
    for (i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "The sum of even values is " << sum << endl;
}