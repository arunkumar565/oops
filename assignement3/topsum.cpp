#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> twoSumEasy(vector<int> nums, int target) {

    unordered_map<int, int> mp;       // stores number -> count
    vector<pair<int, int>> result;    // store answer pairs

    for (int i = 0; i < nums.size(); i++) {

        int current = nums[i];
        int required = target - current;   

        if (mp[required] > 0) {
            result.push_back({required, current});
            mp[required]--;    // reduce count to avoid duplicates
        }
        else {
            mp[current]++;     // store current number
        }
    }

    return result;
}

int main() {

    vector<int> nums = {2, 7, 11, 15, 2, 3, 4, 5};
    int target = 9;

    vector<pair<int, int>> ans = twoSumEasy(nums, target);

    cout << "Pairs with sum " << target << ":\n";
    for (auto &p : ans) {
        cout << p.first << " + " << p.second << " = " << target << endl;
    }

    return 0;
}
