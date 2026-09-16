class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int str=0,end=arr.size()-1,maxVal=-1;
        while(str<=end){
            if(arr[str]>=arr[end]){
                maxVal=max(maxVal,arr[str]);
                end--;
                
            }else{
                
                maxVal=max(maxVal,arr[end]);
                str++;

            }
        }
        return maxVal;
    }
};
