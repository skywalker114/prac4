#ifndef REVERSE_H
#define REVERSE_H
#include <string>


class Reverse
{
private:
    int reversed=0;
public:
    Reverse();
    long long int reverseDigit(long long int value);
    std::string reverseString(std::string letters);
};

#endif