#include<bits/stdc++.h>
using namespace std;

//recursive code for factorial
int fact(int n){
    if(n <= 1)return 1;
    int ans = fact(n-1);
    return n*ans;
}

int main(){
    return 0;
}