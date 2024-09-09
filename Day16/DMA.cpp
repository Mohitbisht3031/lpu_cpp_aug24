#include<bits/stdc++.h>
using namespace std;

int main(){
    //malloc
    int *ptr = (int *)malloc(sizeof(int));
    //new 
    int *nptr = new int;
    cout<<"value "<<*nptr<<endl;
    *nptr = 10;
    cout<<"value2 "<<*nptr<<endl;
    delete nptr;
    cout<<*nptr<<endl;
    int n =100;
    int *arr = new int[n];
    delete []arr;
    return 0;
}