#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int s = sizeof(arr)/sizeof(int);
    int narr[s];
    int r = 2;
    // way 1
    for(int i = 0;i<s;i++){
        narr[(i+r)%s] = arr[i];
    }

    // way2
    reverse(arr,arr+s);
    reverse(arr,arr+r);
    reverse(arr+r,arr+s);
    for(int i = 0;i<s;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}