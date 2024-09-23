#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speaks(){
        cout<<"Animal speaks"<<endl;
    }
};

class Dog : public Animal{
    public:
    // function overriding 
    void speaks(){
        cout<<"dog barks"<<endl;
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

    Animal*a = new Dog();
    
    return 0;
}