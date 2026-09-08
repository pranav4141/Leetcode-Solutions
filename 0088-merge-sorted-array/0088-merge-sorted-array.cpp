class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n ) 
    {vector<int> res(m+n);
     int id=0;
     int i = 0;
int j = 0;
        while(i<m && j<n){
           
            if(nums1[i]<=nums2[j]){
                res[id++]=nums1[i++];
                
            }
            else{
                res[id++]=nums2[j++];
               
            }
        }
        while(i<m){
            res[id++]=nums1[i++];
           
        }
        while(j<n){
            res[id++]=nums2[j++];
           
        }
        nums1=res;
    }
};