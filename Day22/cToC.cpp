#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int m;
    Metric(int kms,int m):kms(kms),m(m){}
    void print(){
        cout<<this->kms<<" kms ans "<<this->m<<" meter"<<endl;
    }
};


class Imperial{
    public:
    int miles;
    int foot;
    Imperial(int miles,int foot):miles(miles),foot(foot){}

    //way2 -> using copy contructor!
    Imperial(Metric m){
        this->miles = m.kms/1.6;
        this->foot = m.m/0.34;
    }

    //conversion function -> way1
    operator Metric(){
        return Metric(miles*1.6,foot*0.34);
    }

    void print(){
        cout<<this->miles<<" miles ans "<<this->foot<<" foot"<<endl;
    }
}; 

int main(){
    Imperial i(10,5);
    Metric m = (Metric)i; //type casting imperial into metric class to class
    m.print();
    Imperial i2 = m;
    return 0;
}