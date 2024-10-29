#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2,3,4,5,6,7};
    vector<int>::iterator appolo = v.begin();
    vector<int>::iterator voyager = v.begin();

    cout<<"value of appolo and voyager are "<<*appolo<<" "<<*voyager<<endl;
    
    // next , advance
    // next(voyager,2);
    cout<<"voyager is on "<<*next(voyager,2)<<endl;
    advance(voyager,3);
    cout<<"voyager is on "<<*voyager<<endl;
    
    // prev(voyager,1);
    // cout<<*prev(voyager,1)<<endl;
    advance(voyager,-1);
    cout<<*voyager<<endl;
    
    
    return 0;
}