class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    set<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                   set<long long> hashset;
                   for(int k=j+1;k<nums.size();k++){
                    long long sum=(long long)nums[i]+nums[j]+nums[k];
                    long long fourth=(long long)target-sum;
                    if(hashset.find(fourth)!=hashset.end()){
                        vector<int> temp={nums[i],nums[j],nums[k],(int)fourth};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    hashset.insert(nums[k]);
                   }
                    }
                
            }
      vector<vector<int>> st(ans.begin(),ans.end());
    return st;
  }};