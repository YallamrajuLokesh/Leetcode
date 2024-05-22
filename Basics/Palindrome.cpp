class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0){           //-121 becomes 121- so all neg numbers returned false
        return false;
       }
        long long  rev=0; //take long long instead of int
        long long  temp=x;  //made updates on x, take temp var;
        while(temp!=0){
           int r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
     
        return (x==rev);
            }
};
