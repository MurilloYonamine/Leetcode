/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

#include <iostream>
#include <vector>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string mergedWord;
        int size = word1.size() > word2.size() ? word1.size() : word2.size();

        for (int i = 0; i < size; i++) {
            if (i < word1.size()) {
                mergedWord += word1[i];
            }
            if (i < word2.size()) {
                mergedWord += word2[i];
            }
        }
        return mergedWord;
    }
};