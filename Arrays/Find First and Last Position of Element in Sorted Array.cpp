// need it in o(logn) so used binary search
//one for finding first occurance 
//other for finding last occurance
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int i1=-1; // good idea to do this instead of maintaining count
        int i2=-1;
        vector<int> v;
        int l=0;
        int h=nums.size()-1;
        
        while(l<=h){
            int mid=l+(h-l)/2;
               if(nums[mid]==target){
                i1=mid;
                   h=mid-1;
            }
           
         
            
            if(target>nums[mid]){
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }
        int low=0;
        int high=nums.size()-1;
        
//             while(low<=high){
//             int mid=low+(high-low)/2;
//                if(nums[mid]==target){
//                     i2=mid;
//                    low=mid+1;
//             }
           
         
            
//             if(target>nums[mid]){
//                 low=mid+1;
                
//             }
//             else{
//                 high=mid-1;
//             }
//         }
        while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == target) {
        i2 = mid;
        low = mid + 1;  // Update the low index to search to the right of mid
    } else if (target > nums[mid]) {
        low = mid + 1;
    } else {
        high = mid - 1;
    }
}
// whats the difference between them?
        
        
            v.push_back(i1);
            v.push_back(i2);
        
        return v;
    }
};
