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

    //Conversion function 
    /*
        1. it must be a class member
        2. it must not specify return type even though it returns value
        3. it must not have an args.
    */
    operator int(){
        return (h*60)+min;
    }

    void display(){
        cout<<"time is "<<h<<" "<<min<<endl;
    }
};
//to achive this there is something known as converison function that comes into the
// existence !
int main(){
    Time t = 600;
    int t2 = (int)t;
    cout<<t2<<endl;
    return 0;
}