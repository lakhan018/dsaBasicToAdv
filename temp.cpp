// morden version of array is vector 
// <vector> 
/*
advantages --> 
            dynamic size 
            memory safe 
            knows its size 
            fich fucntion (more useful fucntion can be used after calling this )
            */
#include <iostream>
#include <vector>     // Required for std::vector
#include <numeric>    // Required for std::accumulate
#include <algorithm>  // Required for std::sort

int main() {
    // 1. Declaration and Initialization
    // Creates a vector of integers named 'scores'.
    std::vector<int> scores;

    // 2. Adding elements to the end
    scores.push_back(88);
    scores.push_back(92);
    scores.push_back(75);
    scores.push_back(100);

    // 3. Iterating and printing elements (Modern C++)
    std::cout << "Scores: ";
    for (int score : scores) {
        std::cout << score << " ";
    }
    std::cout << "\n"; // Prints: Scores: 88 92 75 100

    // 4. Accessing elements
    // .at() is safer because it checks if the index is valid.
    std::cout << "The second score is: " << scores.at(1) << "\n"; // Prints: 92 (zero-based index)

    // 5. Getting the size
    std::cout << "Number of scores: " << scores.size() << "\n"; // Prints: 4

    // 6. Sorting the vector
    // std::sort works on a range defined by iterators (begin() to end()).
    std::sort(scores.begin(), scores.end());
    
    std::cout << "Sorted Scores: ";
    for (int score : scores) {
        std::cout << score << " ";
    }
    std::cout << "\n"; // Prints: Sorted Scores: 75 88 92 100

    // 7. Calculating the sum of elements
    int total = std::accumulate(scores.begin(), scores.end(), 0);
    std::cout << "Total score: " << total << "\n"; // Prints: 355

    return 0;
}