#include <iostream>

#include "PrimeChecker.h"

#define MAX_NUMBER_TO_CHECK 100

using namespace std;

int main() {
    cout << "Prime Checker" << endl << endl;

    for (int num=1; num<=MAX_NUMBER_TO_CHECK; num++)
    {
        if (PrimeChecker::check(num))
            cout << "> " << num << endl;
    }

    return 0;
}