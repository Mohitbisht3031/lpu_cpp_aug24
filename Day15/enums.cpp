#include<bits/stdc++.h>
using namespace std;

enum Priv{
    Admin,
    Student,
    Teacher
};

int main(){
    enum Priv myVar = Teacher;

    switch (myVar)
    {
    case Student:
        cout<<"Assignment upload"<<endl;
        break;
    case Teacher:
        cout<<"Assigment tracker"<<endl;
        break;
    default:
        cout<<"the database"<<endl;
    }

    return 0;
}