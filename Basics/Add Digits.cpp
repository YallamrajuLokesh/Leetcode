class Solution {
public:
    int addDigits(int num) {
        //code here
        //counter negative numbers using returning -1
        //can we find the sum as usual similar to add digits of positive number
        int sum=0;
        if(num<10){
            return num;
        }
       
        while(num!=0){
            int a=num%10;
            sum+=a;
            num=num/10;
        }
            if(sum<10){
                return sum;
                
            }
            else{
                return addDigits(sum);
            }
        
        
    }
};
