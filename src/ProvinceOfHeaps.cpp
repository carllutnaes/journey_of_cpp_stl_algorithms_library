#include <iostream>
#include <algorithm>
#include <vector>

#include "../include/TestFunc.hpp"
#include "../include/VectorPrint.hpp"

//int main()
//{
void ProvinceOfHeaps(std::vector<int> &int_vec)
{
    //std::cout << "Bla: " << TestFunc::testFunc(2) << std::endl;
    std::cout << "1.1 Province Of Heaps" << std::endl;

    //Algorithm 1 : make_heap
    std::cout << "\nAlgorithm 1 :   make_heap" << std::endl;
    std::make_heap(int_vec.begin(), int_vec.end());
    std::cout << heapTreeIllustration(int_vec) << std::endl;

    //Algorithm 2 : push_heap
    std::cout << "\nAlgorithm 2 :   push_heap" << std::endl;
    int_vec.push_back(21);
    std::cout << "push_back(21): " << std::endl;
    std::push_heap(int_vec.begin(), int_vec.end());
    std::cout << "push_heap():\n"
              << int_vec << std::endl;

    //Algorithm 3 : pop_heap
    std::cout << "\nAlgorithm 3 :   pop_heap" << std::endl;
    std::pop_heap(int_vec.begin(), int_vec.end());
    int_vec.pop_back();
    std::cout << "pop_back():\n"
              << int_vec << std::endl;

    //Algorithm 5: is_heap_until
    /* std::cout << "\nAlgorithm 5:  is_heap_until" << std::endl;
    std::cout << "push_back(5): " << std::endl;
    int_vec.push_back(5);
    std::cout << int_vec << std::endl;
    std::vector<int>::iterator heap_end = std::is_heap_until(int_vec.begin(), int_vec.end());
    std::cout << "heap ends at int = " << *heap_end << std::endl;
 */
 
}
//return 1;
//}
