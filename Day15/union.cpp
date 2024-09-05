#include<bits/stdc++.h>
using namespace std;

struct MyStruct
{
    double m;
    int age;
};

union MyUnion
{
    double m;
    int age;
};

int main(){
    union MyUnion un;
    struct MyStruct st;

    cout<<sizeof(un)<<" "<<sizeof(st)<<endl;

    return 0;
}