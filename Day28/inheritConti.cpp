#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"A const"<<endl;
    }
    virtual void speaks()=0;
    ~Animal(){
        cout<<"A dest"<<endl;
    }
};

class Dog : virtual public Animal{
    public:
    Dog(){
        cout<<"D const"<<endl;
    }
    // function overridin
    ~Dog(){
        cout<<"D dist"<<endl;
    }
};

class Cat:virtual public Animal{
    public:

};

class Unknown : public Dog , public cat{
    public:
};

int main(){
    return 0;
}