#include<bits/stdc++.h>
using namespace std;

//  template of a function 
template<typename T,typename M> T max(T a,M b){
    return a >= b ? a : b;
}

int main(){
    cout<<"max of 2.5 and 2.2 is "<<max(3,2.3)<<endl;
    cout<<"max of 2.5 and 2.2 is "<<max<int,double>(3,2.3)<<endl;
    return 0;
}