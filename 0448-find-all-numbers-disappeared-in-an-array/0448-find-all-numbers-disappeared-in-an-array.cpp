class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[i+1]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};