// 1768. Merge Strings Alternately
//
// **Problem Statement**
// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1.
// If a string is longer than the other, append the additional letters onto the end of the merged string.
// Return the merged string.
// ## **Approach**
//
// ### **1. Loop Through the Shorter String**
// - Alternate characters from both strings using a loop that runs until one 
//   string ends.
// - Append paired characters: `word1[i] + word2[i]`.
// **Time Complexity:** O(n + m)  
// **Space Complexity:** O(n + m)
// Where n = length of word1, m = length of word2

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
            std::string combinedword = "";
            if (word1.length() > word2.length()) {
                for (int i = 0; word2.length() > i; i++) {
                    combinedword = combinedword + word1[i] + word2[i];
                }
                for (int i = word2.length(); word1.length() > i; i++) {
                    combinedword = combinedword + word1[i];
                }
                return combinedword;
            }
            if (word1.length() < word2.length()) {
                for (int i = 0; word1.length() > i; i++) {
                    combinedword = combinedword + word1[i] + word2[i];
                }
                for (int i = word1.length(); word2.length() > i; i++) {
                    combinedword = combinedword + word2[i];
                }
                return combinedword;
            }
            
            if (word1.length() == word2.length()) {
                for (int i = 0; word1.length() > i; i++) {
                    combinedword = combinedword + word1[i] + word2[i];
                }
                return combinedword;
            }

            return "";
    }
};
