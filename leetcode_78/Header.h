//
//  Header.h
//  leetcode_78
//
//  Created by 王青龙 on 6/12/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > subsets(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        vector<vector<int>> subs;
        vector<int> sub;
        genSubsets(nums, 0, sub, subs);
        return subs;
    }
    void genSubsets(vector<int>& nums, int start, vector<int>& sub, vector<vector<int>>& subs) {
        subs.push_back(sub);
        for (int i = start; i < nums.size(); i++) {
            sub.push_back(nums[i]);
            genSubsets(nums, i + 1, sub, subs);
            sub.pop_back();
        }
    }
};

#endif /* Header_h */
