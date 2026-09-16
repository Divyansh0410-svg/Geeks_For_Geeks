class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int secondLarge=-1,compair=arr.size()-2;
        if(arr[0]==arr[arr.size()-1]){
            return secondLarge;
        }
        if(arr[arr.size()-1]>arr[compair]){
            secondLarge=arr[arr.size()-2];
            return secondLarge;
            
        }
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[compair]==arr[arr.size()-1]){
                compair--;
                
            }else{
                return arr[compair];
            }
        }

    }
};