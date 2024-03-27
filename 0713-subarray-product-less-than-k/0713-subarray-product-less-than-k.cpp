class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int n =nums.size() ;
        int ans=0;
        for(int i=0;i<n;i++){
             int s=1;
            for(int j=i;j<n;j++){
                s=s*nums[j];
                if(s>=k)
                {
                break;
                }
                ans++;
            }
        }
           
       return ans;     
        
    }
};