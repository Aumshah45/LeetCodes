class Solution {
public:
    bool isPalindrome(int x) {
         int n=x;
         if(n<0){
             return false;
         }
         long long int temp=0;
        
         while(n>0){
            int rem = n%10;
           temp=(temp*10)+rem;
           n=n/10;
         }
         if(temp==x){
             return true;
         }
         else 
           return false;
        }
    
};
