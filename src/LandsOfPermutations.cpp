#include <vector>
#include <iostream>
#include <algorithm>

#include "../include/VectorPrint.hpp"
#include "../include/ProvinceOfHeaps.hpp"
#include "../include/ShoreOfSorting.hpp"
#include "../include/RegionOfPartitioning.hpp"


void LandsOfPermutations() {
    int int_arr[] = {15,11,7,4,2};
    std::vector<int> int_vec(int_arr, int_arr + sizeof(int_arr) / sizeof(int));

    std::cout << "\n1. Lands of Permutations" << std::endl;
    ProvinceOfHeaps(int_vec);
    std::make_heap(int_vec.begin(), int_vec.end());
    ShoreOfSorting(int_vec);
    RegionOfPartitioning();
}