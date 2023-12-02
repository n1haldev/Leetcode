class Solution {
public:
    int goodStr(const string &word, const string &chars) {
        unordered_map<char, int> charCount;
        
        for(char c: chars) {
            charCount[c]++;
        }
        
        for(auto wordIter: word) {
            if(chars.find(wordIter) == string::npos || charCount[wordIter] == 0) {
                return 0;
            }
            charCount[wordIter]--;
        }
        return word.length();
    }
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        for(auto word: words) {
            ans += goodStr(word, chars);
        }
        return ans;
    }
};