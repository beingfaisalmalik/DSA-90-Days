#include<bits/stdc++.h>
using namespace std;

int apearedntimes(vector<int>& arr, int n)
{
    int cnt=0;
    map<int, int> mpp ;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if (it.second > n/2)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr =  {2,2,1,1,1,2,2};
    int N = 3;
    cout << " The Element That Appeared The Most Is : "<< apearedntimes(arr,N);
}