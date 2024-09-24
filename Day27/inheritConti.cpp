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

class Dog : public Animal{
    public:
    Dog(){
        cout<<"D const"<<endl;
    }
    // function overriding 
    void speaks(){
        cout<<"dog barks"<<endl;
    }
    ~Dog(){
        cout<<"D dist"<<endl;
    }
};

int main(){
    // using static memory
    // Animal a;
    // a.speaks();
    // Dog d;
    // d.speaks();

    // heap memory
    // Animal*a = new Animal();
    // a->speaks(); // (*a).speaks();
    // Dog*d = new Dog();
    // d->speaks();

    // Animal*a = new Dog();
    // a->speaks();    
    Dog d;
    Animal a;// this will throw error since animal is an abstract class!
    return 0;
}