#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
    int no_of_pookies;
    public:
    string name;
    int age;
    // default
    Person(){}
    // parametrized
    // Person(string name,int age,int no_of_pookies){
    //     cout<<"const "<<this<<endl;
    //     this->name = name;
    //     this->age = age;
    //     this->no_of_pookies = no_of_pookies;
    // }
    Person(string name,int age,int no_of_pookies):name(name) , age(age), no_of_pookies(no_of_pookies) {}
    void intro(){
        cout<<"hey, My name is "<<name<<" i'm "<<age<<" year young!!"<<endl;
    }
    ~Person(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    // Person p1("Abhijit",19,10);//static memory
    // p1.intro();

    Person* p2 = new Person("Savant",19,20); //dynamic memory
    cout<<p2<<endl;
    p2->intro(); //indirection operator
    delete p2;
    cout<<"At the last line of the program"<<endl;
    /*
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
    arr[10] = 70;
    cout<<"10th index is "<<" "<<arr[10]<<endl;
    delete []arr;*/
    return 0;
}