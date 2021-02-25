#include <iostream>
#include <algorithm>
#include <vector>

#include "../include/VectorPrint.hpp"


void ShoreOfSorting(std::vector<int> &int_vec)
{
   std::cout << "\n1.2 Shore of Sorting\n" << std::endl;
   std::cout << int_vec << std::endl;
   std::vector<int> vec_temp = int_vec;

   //Algorithm 4:   partial_sort
   std::cout << "\nAlgorithm 4 :   partial_sort" << std::endl;
   std::cout << "partial_sort on begin() + 5:\n";
   std::partial_sort(vec_temp.begin(), vec_temp.begin()+5, vec_temp.end() );
   std::cout << vec_temp << std::endl;

   //Algorithm 5:   sort
   std::cout << "\nAlgorithm 5 :   sort" << std::endl;
   std::sort(vec_temp.begin(), vec_temp.end());
   std::cout << vec_temp << std::endl;

   vec_temp = int_vec;
   //Algorithm 6:   nth_element
   std::cout << "\nAlgorithm 6 :   nth_element" << std::endl;
   std::cout << "nth_element on begin() + 6:\n";
   std::nth_element(vec_temp.begin(), vec_temp.begin()+6, vec_temp.end());
   std::cout << vec_temp << std::endl;

   //Algorithm 7:   
   std::cout << "\nAlgorithm 7 :   sort_heap" << std::endl;
   std::sort_heap(int_vec.begin(), int_vec.end());   
   std::cout << int_vec << std::endl;

   //Algorithm 8:   
   std::cout << "\nAlgorithm 8 :   inplace_merge" << std::endl;
   std::vector<int> vec_half{1,2,3,4,1,2,3,4,5,6,7};
   std::cout << vec_half << std::endl;
   std::inplace_merge(vec_half.begin(), vec_half.begin()+4, vec_half.end());  
   std::cout << vec_half << std::endl;
}