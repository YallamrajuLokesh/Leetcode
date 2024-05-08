//Idea:run a for loop and find the factors
//place the factors at a place
//and return the the value at index as kth factor
//check for solution less than O(n);
//Time complexity:O(n);
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0){
                v.push_back(i);
            }
        }
        if(k>v.size()){
            return -1;
        }
        else{
           return v[k-1];
        }
   }
};
