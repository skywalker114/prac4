#include <iostream>
#include <string>
#include "Truckloads.h"

Truckloads::Truckloads(){}

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    if (loadSize == 1)
    {
        return numCrates;
    }
    else
    {
        return numTrucks(numCrates, loadSize - 1) + numCrates;
    }
}