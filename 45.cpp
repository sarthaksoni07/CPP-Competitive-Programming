class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int sizes = s.size();
        int sizet = t.size();
        if(sizes!=sizet){
            return false;
        }
        int flag = 0;
        for (int i = 0; i < sizes; i++) {
            if (s[i] != t[i]) {
                flag++;
            }
        }
        if (flag != 0) {
            return false;
        } else {
            return true;
        }
    }
};