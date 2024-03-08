class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> frequencyMap;
        int maxFreq = 0;

        for (int num : nums) {
            frequencyMap[num]++;
            maxFreq = max(maxFreq, frequencyMap[num]);
        }

        for (const auto& pair : frequencyMap) {
            if (pair.second == maxFreq)
                count += pair.second;
        }

        return count;
    }
};