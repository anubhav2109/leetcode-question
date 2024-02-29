class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i=0;
        int n=arr.size();
        int j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==target){
                return {i+1,j+1};
            }
            else if(target>arr[i]+arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return{};
    }
};