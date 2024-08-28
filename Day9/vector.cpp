#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v; // one way of making a vector
    vector<int>v2(5); // 2nd way
    vector<int>v3(6,5); //3rd way
    cout<<v3.size()<<endl;
    for(int i = 0;i<v3.size();i++)cout<<v3[i]<<" ";
    // cout<<v2.size()<<endl; // to get the size
    // v2.push_back(100);
    // cout<<v2.size()<<endl;
    // v2.pop_back();
    // cout<<v2.size()<<endl;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5); // to push an element on the back
    // v.pop_back(); // to pop an element from the back
    // v[2] = 100; // to update a specific element
    // cout<<v[0]<<" "<<v[2]<<endl;
    // cout<<v.size()<<endl;
    return 0;
}