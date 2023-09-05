#include<bits/stdc++.h>
using namespace std;


int getelement(vector<int> arr, int n){
    
    map<int, int> mpp ;
    
    for (int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    
    for(auto it:mpp){
        if(it.second==1)
        {
            return it.first;
        }
    }
     return -1;
}
int main(){
    vector<int> arr = {1,1,4,2,2};
    int n = arr.size();
    cout << "The Element That Appear Once Is : "<< getelement(arr,n);
    return 0;
}