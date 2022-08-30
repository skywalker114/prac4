#include <iostream>
#include <string>

int factorial(int n);
int tailfactorial(double x, int n, double sum);
double tailseries(double x, double n);

int main()
{
    std::cout << tailseries(0, 2) << std::endl;
    return 0;
}

int factorial(int n) 
{
    if (!n) 
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int tailfactorial(double x, int n, double sum) 
{
    if (!n) 
    {
        return sum;
    }
    return tailfactorial(x, n - 1, n * sum);
}

double tailseries(double x, double n)
{
    if (n == 0) return x;
    return tailseries(x + (n / (n + 1)), n - 1);
}