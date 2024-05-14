int mySqrt(int x) {
    
    int low=1;
    long long int high=x;
    while(low<=high){
        long long int mid=(low+high)/2;
        long long int y=mid*mid;
        if(y<=x){
            
             low=mid+1;
        }
         else{
            high=mid-1;
        }
    }
   return high;
    
}
