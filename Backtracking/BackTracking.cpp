#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int>& nums, vector<int>& temp, vector<bool>& used, vector<vector<int> >& result) {
    if (temp.size() == nums.size()) {
        result.push_back(temp);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (used[i]) continue;
        used[i] = true;
        temp.push_back(nums[i]);
        backtrack(nums, temp, used, result);
        used[i] = false;
        temp.pop_back();
    }
}

vector<vector<int> > permute(vector<int>& nums) {
    vector<vector<int> > result;
    vector<int> temp;
    vector<bool> used(nums.size(), false);
    backtrack(nums, temp, used, result);
    return result;
}

int main() {
    vector<int> nums{1, 2, 3};
    vector<vector<int> > result = permute(nums);
    for (auto& vec : result) {
        for (auto& num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
