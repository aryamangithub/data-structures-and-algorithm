class Solution {
public:
    int reverse(int x) {
        bool isNegative = false; 
        long long num = x;
        if(num<0){
            isNegative = true;
            num *= -1;
        }
        
        long long rev = 0;
        while(num != 0){
            rev = rev*10 + num%10;
            num/=10;
        }

        if(rev > INT_MAX){
            return 0;
        }

        if(isNegative == true){
            return -rev;
        }
        else return rev;

    }
};