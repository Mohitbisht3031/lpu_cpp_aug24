#include<bits/stdc++.h>
using namespace std;

// deafult args...
int max(int a,int b,int c = 0,int d = 0){
    return (a >= b? a : b);
}

// int max3(int a,int b,int c){
//     return max2(a,max2(b,c));
// }

// int max4(int a,int b,int c,int d){
//     return max2(a,max3(b,c,d));
// }

int main(){
    // cout<<"enter a number :";
    // int a;
    // cin>>a;
    // char ch;
    // cout<<"you want to give more inputs ?(y/n) ";
    // cin>>ch;
    // if(ch == 'n')cout<<"max is "<<a<<endl;
    cout<<max(2,4)<<endl;
    cout<<max(20,4,1)<<endl;
}