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
    std::cout << "\n1.1 Province Of Heaps" << std::endl;

    //Algorithm 1 : make_heap
    std::cout << "\nAlgorithm 1 :   make_heap" << std::endl;
    std::make_heap(int_vec.begin(), int_vec.end());
    std::cout << int_vec << std::endl;

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
    std::cout << "pop_heap():" << std::endl;
    int_vec.pop_back();
    std::cout << "pop_back():\n"
              << int_vec << std::endl;
 
}
