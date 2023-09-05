#include <bits/stdc++.h>
using namespace std;

int Secondlargest(int arr[],int n){
    int largest = INT_MIN,Secondlarge = INT_MIN;
    for(int i=0;i<n;i++)
    {
     largest = max(largest,arr[i]); 
    }
    for (int i=0; i<n;i++)
    {
        if(arr[i]>Secondlarge && arr[i]!=largest)
        {
            Secondlarge = arr[i];
        }
    }
    return Secondlarge;
}
int main(){
 
 int arr[] = {1,2,3,10,14,14};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout << "The Second Largest Element In The Array "<< Secondlargest(arr,n);
}
