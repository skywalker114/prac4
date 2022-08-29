#include "EfficientTruckloads.h"
#include <iostream>
#include <string>
#include <vector>

EfficientTruckloads::EfficientTruckloads(){}

long long int EfficientTruckloads::numStone(long long int numBox, long long int numsize)
{
    static long long int memo[150][150];
    if (numsize == 1)
    {
        return numBox;
    }
    else
    {
        if (memo[numBox][numsize] == 0)
        {
            memo[numBox][numsize] = numStone(numBox, numsize - 1) + numBox;
        }
        return memo[numBox][numsize];
    }
}