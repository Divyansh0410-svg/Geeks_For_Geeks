

class Solution {
public:
    vector<int> getMinMax(vector<int> &arr) {
        int minVal = INT_MAX;
        int maxVal = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }

        // Return a vector formatted as {min, max}
        return {minVal, maxVal};
    }
};