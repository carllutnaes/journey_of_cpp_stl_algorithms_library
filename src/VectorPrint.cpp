#include <ostream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

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

std::string partitionedVectorToString(std::vector<int> &vec, std::vector<int>::iterator crit)
{
    std::string s;   
    s+= vectorToString(vec.begin(),crit);
    s+= vectorToString(crit,vec.end());
    return s;
}

std::string vectorToString(const std::vector<int>::iterator it1, const std::vector<int>::iterator it2) {
    std::string s;
    s+="{";
    for (std::vector<int>::iterator it = it1; it != it2; ++it)
    {
        s += std::to_string(*it);
        s += (it != it2 - 1) ? ", " : "";
    }
    return s+="}";
}