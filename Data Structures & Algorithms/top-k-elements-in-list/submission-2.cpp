class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        vector<pair<int,int>> map;
        pair<int,int> temp;
        int count = 1;
        for(int i = 1; i <= nums.size(); i++){
            if (nums[i - 1] == nums[i]){
                count++;
            }
            else{
                temp.first = nums[i - 1];
                temp.second = count;
                map.push_back(temp);
                count = 1;
            }
        }
        sort(map.begin(), map.end(), [](pair<int,int>& a, pair<int,int>& b){
    return a.second > b.second;
});

        for(int i = 0; i < k; i++){
            ans.push_back(map[i].first);
        }
        return ans;
    }
};
