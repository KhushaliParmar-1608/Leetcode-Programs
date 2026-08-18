class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        long num=0;
        int org;
        org=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            rem=x%10;
            x=x/10;
            num=num*10+rem;
        }
        if(org==num){
            return true;
        }
        else{
            return false;
        }
    }
};