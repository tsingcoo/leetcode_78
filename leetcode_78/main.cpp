//
//  main.cpp
//  leetcode_78
//
//  Created by 王青龙 on 6/12/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#include "Header.h"
#include "Header2.h"


int main(int argc, const char * argv[]) {

    Solution2 S;

    vector<int> v={1,2,3};

    vector<vector<int>> res;

    res=S.subsets(v);

    for (int i=0; i<res.size(); ++i) {
        for (int j=0; j<res[i].size(); ++j) {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
