// find subsets of a set

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > getSubsets(vector<int> num)
{
    int size = num.size();     // size = 3, num = {1, 2, 3}
    int subsetNum = 1 << size; // subsetNum = 8
    vector<vector<int> > allSubSets;
    for (int subsetMask = 0; subsetMask < subsetNum; subsetMask++)
    {
        vector<int> subset;
        for (int i = 0; i < size; i++)
        {
            if ((subsetMask & 1 << i) != 0)
            {
                subset.push_back(num[i]);
            }
        }
        allSubSets.push_back(subset);
    }
    return allSubSets;
}
// time complexity 
// outer loop 2^n
// inner loop n
// total = O(2^n * n)

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<getSubsets(v);
    return 0;
}