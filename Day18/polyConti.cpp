#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex(){}
    Complex(int real,int img): real(real),img(img){}
    void show(){
        cout<<real<<"+i"<<img<<endl;
    }

    Complex operator +(Complex c){
        Complex nc(this->real+c.real,this->img+c.img);
        return nc;
    }

    //Pre decrement
    void operator --(){
        this->real-=1;
    }
    //post decrement
    void operator --(int){
        this->real-=1;
    }
};

//function overloading!!
int max(int a,int b){
    cout<<"int max"<<endl;
    return (a >=b ? a : b);
}

int max(double a,double b){
    cout<<"double max"<<endl;
    return (a >= b ? a: b);
}

int main(){
    // cout<<max(2,3)<<" "<<max(4.0,5.0)<<endl;
    Complex c1(2,3);
    Complex c2(3,4);
    c1.show();
    c2.show();
    Complex c3 = c1+c2;
    c3.show(); //5+i7
    --c3; //4+i7
    c3--;
    c3.show();
    return 0;
}