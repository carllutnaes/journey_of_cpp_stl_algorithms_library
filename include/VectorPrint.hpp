
#ifndef VECTORPRINT_H
#define VECTORPRINT_H

std::ostream &operator<<(std::ostream &s, std::vector<int> &vec);

void printPartitionedVector(std::vector<int> &vec,  std::vector<int>::iterator &crit);

#endif //VECTORPRINT_H

