#include<bits/stdc++.h>
using namespace std;

// recursive function to find nth fibo number!!
int fibo(int n){
    if(n <= 2)return 1;
    int a1 = fibo(n-1);
    int a2 = fibo(n-2);

    return a1+a2;
}

int main(){}