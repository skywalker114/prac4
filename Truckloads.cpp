#include <iostream>
#include <string>
#include "Truckloads.h"

Truckloads::Truckloads(){}

int Truckloads::numStone(int numBox, int numsize)
{
    if (numsize == 1)
    {
        return numBox;
    }
    else
    {
        return numStone(numBox, numsize - 1) + numBox;
    }
}