#include<bits/stdc++.h>
using namespace std;

/*
WAP to take i/p of an number from the user and return the sum of it's digit's
*/

int main(){
    int t;
    cout<<"How many number's you want to give :";
    cin>>t;
    while(t--){int n;
        cout<<"Enter a number :";
        cin>>n;
        int s =0 ;
        while(n){
            s+=(n%10);
            n/=10;
        }

        cout<<"the sum of the digit of the given number is :"<<s<<endl;
    }
    return 0;
}