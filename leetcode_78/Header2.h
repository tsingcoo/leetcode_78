//
//  Header2.h
//  leetcode_78
//
//  Created by 王青龙 on 6/14/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header2_h
#define Header2_h

#include <iostream>
#include <vector>
#include <math.h>
//#include <algrithm>
using namespace std;

class Solution2 {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin(), S.end());
        int elem_num=(int)S.size();
        int subset_num=pow(2, elem_num);
        vector<vector<int>> subset_set (subset_num, vector<int>());
        for (int i=0; i<elem_num; ++i) {
            for (int j=0; j<subset_num; ++j) {
                if((j>>i)&1){
                    subset_set[j].push_back(S[i]);
                }
            }
        }
        return subset_set;
    }
};



#endif /* Header2_h */
