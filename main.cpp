#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string prefix = "";
    for(int idx=0; strs.size()>0; prefix+=strs[0][idx], idx++)
        for(int i=0; i<strs.size(); i++)
            if(idx >= strs[i].size() ||(i > 0 && strs[i][idx] != strs[i-1][idx]))
                return prefix;
    return prefix;
}
#include <iostream>
using namespace std;
#include <iostream>

int main()
{
    int i;
    char *arr[] = {"C", "C++", "Java", "VBA"};
    char *(*ptr)[4] = &arr;
    cout << ++(*ptr)[2];
    return 0;
}