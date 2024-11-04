#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>
#include "../include/zipfs.h"


// void computeWordFrequency(const std::vector<char>& book) {
//     int countUniqueWords(const std::vector<char>& book);
// }


int main() {
    auto book = readBook("moby_dick.txt");
    auto wordFrequency = computeWordFrequency(book);
    auto sortedFrequencies = sortFrequencies(wordFrequency);
    outputFrequencies(sortedFrequencies, "output.txt");
    return 0;
}
