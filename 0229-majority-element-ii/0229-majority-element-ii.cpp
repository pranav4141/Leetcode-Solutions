class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
set<int> st;
for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
    if(mp[nums[i]]==nums.size()/3+1){
    st.insert(nums[i]);}
}
   return vector<int>(st.begin(), st.end());  }
};