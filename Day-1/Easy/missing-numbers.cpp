#include<bits/stdc++.h>
using namespace std;

int missingnumber(vector<int>& arr, int N)

{
    int summation = (N * (N + 1)) / 2;
    int summ=0;
    
    for(int i=0;i<N-1;i++)
    {
        summ+=arr[i];
    }
    
    int missingnum = summation - summ;
    return missingnum;
}
int main(){
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingnumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}