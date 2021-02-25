#include <iostream>
#include <vector>
#include <algorithm>

#include "../include/VectorPrint.hpp"

bool isPowerOfTwo(int x)
{
    if (x > 0)
    {
        return (x & (x - 1)) == 0;
    }
    else
    {
        return false;
    }
}

void RegionOfPartitioning()
{
    std::cout << "\n1.3 Region Of Partitioning\n"
              << std::endl;

    //Algorithm 9:
    std::cout << "\nAlgorithm 9 :   partition" << std::endl;
    std::vector<int> vec{1, 12, 2, 45, 64, 12, 4, 66, 128, 6, 256};
    std::vector<int>::iterator crit = std::partition(vec.begin(), vec.end(), isPowerOfTwo);
    printPartitionedVector(vec, crit);
}