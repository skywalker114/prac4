#include "EfficientTruckloads.h"
#include <iostream>
#include <string>
#include <vector>

EfficientTruckloads::EfficientTruckloads(){}

long long int EfficientTruckloads::numTrucks(long long int numCrates, long long int loadSize)
{
    static long long int memo[150][150];
    if (loadSize == 1)
    {
        return numCrates;
    }
    else
    {
        if (memo[numCrates][loadSize] == 0)
        {
            memo[numCrates][loadSize] = numTrucks(numCrates, loadSize - 1) + numCrates;
        }
        return memo[numCrates][loadSize];
    }
}