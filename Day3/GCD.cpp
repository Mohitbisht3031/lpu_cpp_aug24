#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Give 2 numbers :";
    cin>>a>>b;

    int ans = 1;
    for(int i =2;i<=min(a,b);i++){
        if((a%i) == 0 && (b%i) == 0)ans = i;
    }
    cout<<"gcd of them is : "<<ans<<endl;

    cout<<"using inbuilt gcd is : "<< __gcd(a,b)<<endl;

    return 0;
}