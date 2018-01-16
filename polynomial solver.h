#ifndef POLYNOMIAL_SOLVER_H_INCLUDED
#define POLYNOMIAL_SOLVER_H_INCLUDED

int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * factorial(n-1);
}

int coefficient(int n, int k)
{
    return factorial(n)/ (factorial(k) * factorial(n-k));
}

void setcoEff(int n, double coeff[])
{
    for (int degreeB = 0; degreeB < n; degreeB++)
    {
        coeff[degreeB] = coefficient(n, degreeB);
    }
}

void findnplus1(int m, int n, int nplus1[])
{
    for (int term = 0; term <= (n-1)/2; term++)
    {
        nplus1[term] = pow(-1, term) * (m + 2 * term) + 1;
    }
}


#endif // POLYNOMIAL_SOLVER_H_INCLUDED
//degree of A = 0 (always 1)
//degree of B = 2 * degreeB (since u^2)
