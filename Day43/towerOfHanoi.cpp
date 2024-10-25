#include<bits/stdc++.h>
using namespace std;


void tower(int n,char src,char aux,char des){
    if(n == 0)return;

    tower(n-1,src,des,aux); // to move one disc from src to aux
    cout<<src<<" "<<des<<endl;
    tower(n-1,aux,src,des);

    return;
}