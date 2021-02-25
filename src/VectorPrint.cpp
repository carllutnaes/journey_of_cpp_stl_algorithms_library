#include <ostream>
#include <iostream>
#include <algorithm>
#include <vector>

#include "../include/VectorPrint.hpp"

std::ostream &operator<<(std::ostream &s, std::vector<int> &vec)
{
    if (vec.empty())
        return s;

    int j{1U};
    std::vector<int>::const_iterator it;
    std::string str = (std::is_heap(vec.begin(), vec.end()) ? "|" : ",");

    s << "{";
    for (it = vec.begin(); it != vec.end(); ++it)
    {
        s << *it;
        ++j;
        s << (((j & j - 1) == 0) ? " " + str
                                 : ((it != vec.end() - 1) ? ", " : ""));
    }
    s << "}";
    return s;
}

void printPartitionedVector(std::vector<int> &vec, std::vector<int>::iterator &crit)
{
    std::cout << "{";

    for (std::vector<int>::iterator it = vec.begin(); it != crit; ++it)
    {
        std::cout << *it;
        std::cout << (it != (crit - 1) ? ", " : "");
    }
    std::cout << "} {";
    for (std::vector<int>::iterator it = crit; it != vec.end(); ++it)
    {
        std::cout << *it;
        std::cout << (it != vec.end() - 1 ? ", " : "");
    }
    std::cout << "}" << std::endl;
}
