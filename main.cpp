#include <iostream>

#include "PrimeChecker.h"

using namespace std;

int main() {
    cout << "Prime Checker" << endl << endl;

    for (int num=1; num<=100; num++)
    {
        if (PrimeChecker::check(num))
            cout << "> " << num << endl;
    }

    return 0;
}