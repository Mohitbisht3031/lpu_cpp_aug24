#include<bits/stdc++.h>
using namespace std;

template<typename T,typename M>
class Math{
    public:
    T a;
    M b;
    Math(T a,M b): a(a),b(b){
    }

    T multiply(){
        return a*b;
    }

    M sum(){
        return a+b;
    }

};

int main(){
    //Math obj(2,5,5);
    // vector<>
    // stack<>
    Math<int,double> obj(2,5.5);
    cout<<obj.multiply()<<endl;
    cout<<obj.sum()<<endl;
    return 0;
}