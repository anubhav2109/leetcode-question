class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
      int n =nums.size();
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int maxL=0;
        while(j<n){
            mp[nums[j]]++;
            while(i<j  &&   mp[nums[j]]>k)
            {
                mp[nums[i]]--;
                i++;
            }
            maxL=max(maxL,j-i+1);
            j++;
        }
        return maxL;
    }
};