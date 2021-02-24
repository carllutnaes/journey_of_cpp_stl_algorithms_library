//#include <iostream>
#include <ostream>
#include <algorithm>
#include <vector>
#include <string>

#include "../include/VectorPrint.hpp"

std::ostream &operator<<(std::ostream &s, std::vector<int> &vec) {
    s << "{";
    std::vector<int>::const_iterator it;
    for (it = vec.begin(); it != vec.end(); ++it)
    {
        s << *it;
        if (it != vec.end() - 1)
            s << ", ";
    }
    return s << "}";
} 

std::string heapTreeIllustration(const std::vector<int> &vec)
{
    std::string s = "{";
    if (!std::is_heap(vec.begin(), vec.end())) return s;
    
    int j{1U};
    std::vector<int>::const_iterator it;

    for (it = vec.begin(); it != vec.end(); ++it)
    {
        s.append(std::to_string(*it));
        ++j;
        s.append(((j & j - 1) == 0) ? " │ " : ((it != vec.end() - 1) ? ", " : ""));    
    }
    s.append("}");
    return s;
}