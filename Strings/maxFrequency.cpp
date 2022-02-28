#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "ndfakejbqwebbiwqebffff";

    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    // incrementing the frequency
    for (int i = 0; i < s.size(); i++)
    {
        // freq[s[0] - 'a']
        freq[s[i] - 'a'] += 1;
    }
    
    // finding the max in array
    int max=0;
    char maxCh = 'a';

    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > max){

            max = freq[i];
            maxCh = i + 'a';
        }

    }
    
    cout<< maxCh << " " << max << endl;
    return 0;
}