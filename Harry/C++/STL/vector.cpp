// arrays with dynamic size

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int> v)
{
    // we are recieving copy here for the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // different declarations statements
    vector<int> v;
    vector<int> v1(4);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // pops the last element
    v.pop_back();

    // copying vector we don't need (&) time complexity of copying O(n)
    // or we can use & if we don't need copy
    vector<int> v2 = v;
    printVec(v);

    return 0;
}