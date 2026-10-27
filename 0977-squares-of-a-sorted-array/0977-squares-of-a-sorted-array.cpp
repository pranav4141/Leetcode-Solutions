class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int i=0;
    int n=nums.size();
    int j=n-1;
    vector<int> ans(n);
    for(int k=n-1;k>=0;k--){
        if(abs(nums[i])>abs(nums[j])){
        ans[k]=nums[i]*nums[i];
        i++;
    }
        else{
            ans[k]=nums[j]*nums[j];
            j--;
        }
    }
   return ans; }
};