class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        sort(nums.begin(), nums.end());
        int sequenceCount = 1;
        int maxSequenceCount = 1;

        for(int i = 0; i < n; i++){
            if(nums[i + 1] == nums[i]){
                continue;
            }
            if(nums[i + 1] == nums[i] + 1){
                sequenceCount++;
            }
            else{
                sequenceCount = 1;
            }
            if(sequenceCount > maxSequenceCount){
                maxSequenceCount = sequenceCount;
            }
        }
        return maxSequenceCount;
    }
};
