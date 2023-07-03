class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int l = 0;
        int h = s.length() - 1;
        int flag = 1;
        while(l < h){
            if(s[l++] != s[h--]){
                flag = 0;
            }
        }
        if(flag == 1)
            return true;
        else return false;
    }
};