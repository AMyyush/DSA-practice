#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    int n, target;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to the target are: " 
             << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
