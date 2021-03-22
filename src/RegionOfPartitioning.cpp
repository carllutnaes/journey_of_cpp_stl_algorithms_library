#include <iostream>
#include <vector>
#include <algorithm>
#include "../include/algorithmPrint.hpp"
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
    std::cout << "\n1.3 Region Of Partitioning"
              << std::endl;

    std::vector<int> vec{7, 16, 24, 64, 11};
    std::vector<int>::iterator crit = std::partition(vec.begin(), vec.end(), isPowerOfTwo);
    algorithm("partition",vectorToString(vec.begin(),vec.end()),partitionedVectorToString(vec, crit));
    
    auto p = std::partition_point(vec.begin(),vec.end(),isPowerOfTwo);
    algorithm("partition_point",partitionedVectorToString(vec, crit),std::to_string(*p));

} // int Algo number, string function name, optional: auto function input, function output