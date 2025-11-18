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
