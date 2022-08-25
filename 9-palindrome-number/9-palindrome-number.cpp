class Solution {
public:
    bool isPalindrome(int x) {
        int i=0;
        string s = to_string(x);
        int j=s.size()-1;
        while(i<j){
            if(s[i] != s[j]) 
                return false;
            i++; j--;
        }
        return true;
    }
};