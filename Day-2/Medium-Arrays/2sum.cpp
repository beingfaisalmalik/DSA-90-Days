#include<bits/stdc++.h>
using namespace std;

string twoSum(vector<int>& arr, int n, int target)
{
    sort(arr.begin(),arr.end());
    int left = 0;
    int right = n-1;
    int sum=0;
    while(left<right)
    {
        sum = arr[right]+arr[left];
        if(sum==target)
        {
            return "TRUE";
        }
        else if (sum>target)
        {
            right--;
        }
        
        else{
            left++;
        }
        
    }
    
    return "FALSE";
    
    
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(arr,n, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}