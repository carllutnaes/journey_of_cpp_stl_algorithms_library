#include <vector>
#include <iostream>

#include "include/VectorPrint.hpp"
#include "include/ProvinceOfHeaps.hpp"
#include "include/ShoreOfSorting.hpp"


int main() {
    int int_arr[] = {1, 2, 4, 15, 8, 6, 4, 8, 1, 3, 12, 18};
    std::vector<int> int_vec(int_arr, int_arr + sizeof(int_arr) / sizeof(int));
    std::cout << "Starting vector:\n"
              << int_vec << std::endl;

    std::cout << "1. Lands of Permutations" << std::endl;
    ProvinceOfHeaps(int_vec);
    ShoreOfSorting(int_vec);

    return 1;
}