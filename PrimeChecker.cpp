//
// Prime Checker implementation
// Created by Alessio Saltarin on 2019-05-31.
//

#include "PrimeChecker.h"

bool PrimeChecker::check(int n)
{
    if (n <= 3)
        return (n > 1);

    if ((n % 2 == 0) || (n % 3 == 0))
        return false;

    int i = 5;

    while (i * i <= n)
    {
        if ((n % i == 0) || ( n % (i + 2) == 0))
            return false;
        i += 6;
    }

    return true;
}

