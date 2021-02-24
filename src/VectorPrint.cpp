#include <ostream>
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
