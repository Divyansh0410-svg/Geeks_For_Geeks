class Solution {
  public:
    void sort012(vector<int>& nums) {
        // code here
        int low=0,mid=0,end=nums.size()-1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
                
            }else if(nums[mid]==1){
                mid++;
                
            }else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
        
    }
};