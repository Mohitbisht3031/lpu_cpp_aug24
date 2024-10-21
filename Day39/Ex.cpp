#include<bits/stdc++.h>
using namespace std;

class MyEx : public exception
{
    string msg;
    public:
    MyEx(const string str): msg(str){}

    virtual const char* what(){
        return msg.c_str();
    }
};

int divide(int a,int b){
    if(b == 0)throw MyEx("from my Ex dividing by 0");
    return a/b;
}

int main(){
    try{
        try{
            divide(1,0);
        }catch(int ex){
            cout<<"exception caught "<<ex<<endl;
        }catch(const char* ex){
            cout<<"exceptin caught "<<ex<<endl;
        }catch(MyEx ex){
            cout<<"my exception "<<ex.what()<<endl;
        }
    }catch(...){
        cout<<"generic exception"<<endl;
    }
    cout<<"Hi abhijit i'm outside all the try and catch"<<endl;
    
    return 0;
}