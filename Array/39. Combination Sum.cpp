// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void solve(int index, vector<int>& candidates, int target,
               vector<int>& current, vector<vector<int>>& result)
    {
        // Base Case
        if (target == 0) {
            result.push_back(current);
            return;
        }

        if (target < 0 || index == candidates.size()) {
            return;
        }

        // Take the current element
        current.push_back(candidates[index]);
        solve(index, candidates, target - candidates[index], current, result);

        // Backtrack (remove last element)
        current.pop_back();

        // Skip current element
        solve(index + 1, candidates, target, current, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        solve(0, candidates, target, current, result);
        return result;
    }
};