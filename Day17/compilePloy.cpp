#include<bits/stdc++.h>
using namespace std;

//function overloading!!
int max(int a,int b){
    cout<<"int max"<<endl;
    return (a >=b ? a : b);
}

int max(double a,double b){
    cout<<"double max"<<endl;
    return (a >= b ? a: b);
}

int main(){
    cout<<max(2,3)<<" "<<max(4.0,5.0)<<endl;
    return 0;
}