
#ifndef VECTORPRINT_H
#define VECTORPRINT_H

std::ostream &operator<<(std::ostream &s, std::vector<int> &vec);

std::string partitionedVectorToString(std::vector<int> &vec, std::vector<int>::iterator crit);

std::string vectorToString(const std::vector<int>::iterator it1, const std::vector<int>::iterator it2);

#endif //VECTORPRINT_H

