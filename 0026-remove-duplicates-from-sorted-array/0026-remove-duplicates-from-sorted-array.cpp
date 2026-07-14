class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        set<int> ans;
        for(int i=0;i<nums.size();i++){
        ans.insert(nums[i]);
        }
        nums.clear();
      for(int x:ans){
        nums.push_back(x);
      } 
      return nums.size(); }
};