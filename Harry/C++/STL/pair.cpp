#include<iostream>
using namespace std;

int main()
{
    // intializing pairs
    pair<int, string> p;

    // making pair
    p = make_pair(2, "abc");
    // p = {2, "abcd"};

    // copying pair into another pair (using & if not present it will make copy of p pair)
    pair<int, string> &p1 = p;
    cout<< p.first << " "<< p.second << endl;

    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int,int> pairArr[3];
    pairArr[0] = make_pair(11,23);
    pairArr[1] = make_pair(10,22);
    pairArr[2] = make_pair(14,12);
    swap(pairArr[0], pairArr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<pairArr[i].first << " "<< pairArr[i].second<<endl;
    }
    
    return 0;
}