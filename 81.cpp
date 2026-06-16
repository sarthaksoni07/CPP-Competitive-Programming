#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int divisors = 0;
        string n = to_string(num);
        for (int i = 0; i <= n.length()-k; i++) {
            int check = stoi(n.substr(i, k));
            if (check != 0 && num % check == 0) {
                divisors++;
            }
        }
        return divisors;
    }
};
//