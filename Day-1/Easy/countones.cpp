#include<bits/stdc++.h>
using namespace std;

int onecount(vector<int>& arr, int n)
{
    int count =0;
    int max_count =INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            count = count+1;
        }
        else
        {
            count =0;
        }
        max_count = max(count,max_count);
    }
    return max_count;
    
}
int main()
{
    vector<int> arr = {1, 0, 1, 1, 0, 1} ;
    int n = arr.size();
    cout << "The Most Consecutive Ones "<< onecount(arr,n);
    return 0;
}