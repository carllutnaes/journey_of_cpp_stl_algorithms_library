#include <iostream>
#include <vector>
#include <algorithm>

#include "../include/algorithmPrint.hpp"
#include "../include/VectorPrint.hpp"

void ProvinceOfHeaps(std::vector<int> &int_vec)
{
    std::make_heap(int_vec.begin(), int_vec.end());
    algorithm("make_heap",vectorToString(int_vec.begin(), int_vec.end()));

    int_vec.push_back(21);
    algorithm("push_back","21",vectorToString(int_vec.begin(), int_vec.end()));

    std::push_heap(int_vec.begin(), int_vec.end());
    algorithm("push_heap",vectorToString(int_vec.begin(), int_vec.end()));
    

    std::pop_heap(int_vec.begin(), int_vec.end());
    int_vec.pop_back();
    algorithm("pop_heap",vectorToString(int_vec.begin(), int_vec.end()));
 
}
