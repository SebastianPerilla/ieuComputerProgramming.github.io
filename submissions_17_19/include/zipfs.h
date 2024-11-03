#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>


void computeWordFrequency(const std::vector<char>& book) {
    int countUniqueWords(const std::vector<char>& book);
}

void readBook(std::string filename) {
  
    // open file for reading
    std::ifstream istrm(filename);

    if (!istrm.is_open()) {
        std::cout << "failed to open " << filename << '\n';
    }
    
    else {
        std::string line;
        int line_count = 0;
        while (std::getline(istrm, line)) 
        {
            line_count++;
            std::istringstream iss(line);
            std::string word;
            while (iss >> word) {
                
            }
            
        }
        std::cout << "there are: " << line_count << " lines in this file" <<  std::endl;
    }
};

int main() {
    std::string moby_file = "moby_dick.txt";
    std::vector<char> readBook(std::string fileName);
    std::map<std::string, int> computeWordFrequency(readBook);
    
    return 0;
};












// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

// // Function to read the book and analyze word frequencies
// void readBook(const std::string& filename) {
//     std::ifstream istrm(filename);

//     if (!istrm.is_open()) {
//         std::cout << "Failed to open " << filename << '\n';
//         return;
//     }

//     std::unordered_map<std::string, int> wordCount;
//     std::string line;
//     int line_count = 0;

//     while (std::getline(istrm, line)) {
//         line_count++;
//         std::istringstream iss(line);
//         std::string word;
//         while (iss >> word) {
//             std::string cleanWord;
//             for (char c : word) {
//                 if (std::isalpha(c)) {
//                     cleanWord += std::tolower(c);
//                 }
//             }
//             if (!cleanWord.empty()) {
//                 wordCount[cleanWord]++;
//             }
//         }
//     }

//     std::cout << "There are: " << line_count << " lines in this file" << std::endl;

//     // Create a vector of pairs and sort by frequency
//     std::vector<std::pair<std::string, int>> sortedWords(wordCount.begin(), wordCount.end());
//     std::sort(sortedWords.begin(), sortedWords.end(), [](const auto& a, const auto& b) {
//         return b.second < a.second;
//     });

//     // Display the words and their frequencies
//     for (const auto& pair : sortedWords) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }
// }

// int main() {

//     std::string moby_file = "moby_dick.txt";

//     readBook(moby_file);

//     std::vector<char> readBook(std::string fileName);
// }
