class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        for (char &c : paragraph) {
            if (!isalpha(c))
                c = ' ';
            else
                c = tolower(c);
        }

        string word, ans;
        int maxCount = 0;
        stringstream ss(paragraph);

        while (ss >> word) {
            if (ban.count(word) == 0) {
                freq[word]++;
                if (freq[word] > maxCount) {
                    maxCount = freq[word];
                    ans = word;
                }
            }
        }

        return ans;
    }
};
