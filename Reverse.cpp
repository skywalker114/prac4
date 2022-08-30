#include <iostream>
#include <string>
#include <math.h>
#include "Reverse.h"

Reverse::Reverse(){}

long long int Reverse::reverseDigit(long long int value)
{
    if (value == NULL || value < 0)
    {
        return -1;
    }
    if (value < 10)
    {
        return value;
    }
    else
    {
        return (value % 10) * pow(10, (long int)log10(value)) + reverseDigit(value / 10);
    }
}

std::string Reverse::reverseString(std::string letters)
{
    if (letters == "")
    {
        return "ERROR";
    }
    if (letters.length() == 1)
    {
        return letters;
    }
    else
    {
        return letters[letters.length() - 1] + reverseString(letters.substr(0, letters.length() - 1));
    }
    
}