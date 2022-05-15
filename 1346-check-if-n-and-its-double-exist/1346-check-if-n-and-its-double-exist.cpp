class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < arr.size(); ++i) {
            
            int low = 0, high = arr.size() - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (mid != i && 2 * arr[mid] == arr[i]) return true;
                if (2 * arr[mid] >arr[i]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        return false;
    
    }
};