#include <iostream>
#include "polynomial solver.h"

using namespace std;

int main()
{
    int sindeg = 0, cosdeg = 0;

    cout << "Enter sin degree and cos degree: ";
    cin >> sindeg >> cosdeg;
    int coefficients[100] = {0};

    if (cosdeg % 2 == 1) //cos is odd
    {
        setcoEff((cosdeg - 1)/2, coefficients);
    }

    else if (sindeg % 2 == 1)
    {
        setcoEff((sindeg - 1)/2, coefficients);
    }
}
