class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int> temp;
        for(int nums:arr){
            if(nums>=0){
                temp.push_back(nums);
            }
        }
        for(int nums:arr){
            if(nums<0){
                temp.push_back(nums);
            }
        }
        arr=temp;
    }
};