class Solution {
public:
int reverse(int x) {
        int revNum = 0;
        int rem = 0;
        while(x!=0){
            if(revNum>INT_MAX/10 || revNum<INT_MIN/10){
                return 0;
            } else{
                rem = x%10;
                revNum = 10*revNum+rem;
                x/=10;
            }
        }
        return revNum; 
    }
    bool isPalindrome(int n) {
        
        if(n<0){
            return false;
        } else {
            int revNum = reverse(n);
         return n==revNum;
        }
    }
};