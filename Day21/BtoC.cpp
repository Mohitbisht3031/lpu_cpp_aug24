#include<bits/stdc++.h>
using namespace std;

class Time{
    int h;
    int min;
    public:
    //way 1
    Time(){}
    Time(int t){
        h = t/60;
        min = t%60;
    }
    //way 2
    void operator =(int t){
        h = t/60;
        min = t%60;
    }
    void display(){
        cout<<"time is "<<h<<" "<<min<<endl;
    }
};

int main(){
    int t = 600;
    Time t2 = t;
    Time t3;
    t3 = t;
    // int a = 10;
    // double d = a;
    t2.display();
    t3.display();
    return 0;
}