class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set <char> table;
        int count =0;
        for (char a : word){
            table.insert(a);
        }
        for(char a : table){
            
            if(islower(a)&&table.find(toupper(a))!=table.end()){
                count++;
            }
        }
        return count;
    }
};
//count number of special characters