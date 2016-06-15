//
//  Header3.h
//  leetcode_78
//
//  Created by 王青龙 on 6/15/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header3_h
#define Header3_h

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution3 {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> subs(1, vector<int>());
        for (int i = 0; i < nums.size(); i++) {
            int n = (int)subs.size();
            for (int j = 0; j < n; j++) {
                subs.push_back(subs[j]);
                subs.back().push_back(nums[i]);
            }
        }
        return subs;
    }
};

#endif /* Header3_h */
