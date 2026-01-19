class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int n1 = word1.size(), n2 = word2.size();
        int i = 0, j = 0;
 
        while (i < n1 || j < n2) {
            if (i < n1) merged += word1[i++];
            if (j < n2) merged += word2[j++];
        }

        return merged;
    }
};
