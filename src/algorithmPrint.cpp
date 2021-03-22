#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int algorithm_number = 1;

void algorithm(
               const std::string &s,
               const std::string &str1,
               const std::string &str2)
{
    int dist = 22;
    std::cout << "Algorithm " 
            << std::setw(dist-20) << algorithm_number << ": "
            << std::setw(dist-7) << s ;

    if (!str1.empty()) {
        std::cout << " : "<< std::setw(dist) << str1;
    }
    if (!str2.empty()) {
        std::cout << " : " << std::setw(dist) << str2;
    }
    std::cout << std::endl;
    algorithm_number++;
}