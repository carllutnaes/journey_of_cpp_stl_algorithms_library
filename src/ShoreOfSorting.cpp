#include <iostream>
#include <algorithm>
#include <vector>



#include "../include/TestFunc.hpp"
#include "../include/VectorPrint.hpp"


void ShoreOfSorting()
{
   int int_arr[] = {1, 2, 4, 15, 8, 6, 4, 8, 1, 3, 12, 18};
    std::vector<int> int_vec(int_arr, int_arr + sizeof(int_arr) / sizeof(int));

   //Algorithm 4: sort_heap
    std::cout << "\nAlgorithm 4 :   sort_heap" << std::endl;
    std::sort_heap(int_vec.begin(), int_vec.end());
    std::cout << int_vec << "\n"
              << std::endl;

}