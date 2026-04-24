class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        int product = 1;
        int zeroIndex = -1;
        int zeroCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zeroCount++;
                zeroIndex = i;
                continue;
            }
            product *= nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            if(zeroCount > 1){
                return output;
            }
            if(zeroIndex != -1){
                output[zeroIndex] = product;
                return output;
            }
            output[i] = (product/nums[i]);
        }
        return output;
    }
};
