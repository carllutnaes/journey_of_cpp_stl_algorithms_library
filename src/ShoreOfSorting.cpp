#include <iostream>
#include <algorithm>
#include <vector>

#include "../include/algorithmPrint.hpp"
#include "../include/VectorPrint.hpp"


void ShoreOfSorting(std::vector<int> &int_vec)
{
   std::cout << "\n1.2 Shore of Sorting" << std::endl;
   std::vector<int> vec_temp = int_vec;

   
   
   std::partial_sort(vec_temp.begin(), vec_temp.begin()+2, vec_temp.end() );
   algorithm("partial_sort","begin()+2",vectorToString(vec_temp.begin(), vec_temp.end()));

   vec_temp = int_vec;
   std::nth_element(vec_temp.begin(), vec_temp.begin()+3, vec_temp.end());
   algorithm("nth_element","begin()+3",vectorToString(vec_temp.begin(), vec_temp.end()));

   std::sort(vec_temp.begin(), vec_temp.end());
   algorithm("sort",vectorToString(vec_temp.begin(), vec_temp.end()));

   //Algorithm 7:   
   std::sort_heap(int_vec.begin(), int_vec.end());   
   algorithm("sort_heap",vectorToString(int_vec.begin(), int_vec.end()));

   //Algorithm 8:   
   std::vector<int> vec_half{1,3,2,4,5};
   auto temp = vec_half;
   std::inplace_merge(vec_half.begin(), vec_half.begin()+2, vec_half.end()); 
   algorithm("inplace_merge",vectorToString(temp.begin(), temp.end()),vectorToString(vec_half.begin(), vec_half.end()));
}