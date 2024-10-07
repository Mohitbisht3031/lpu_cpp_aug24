#include<bits/stdc++.h>
using namespace std;

// .dat -> stores the information!
int main(){
    //cin ,cout
    // stringstream
    fstream fs;
    fs.open("./newAbhijit.txt",ios::out | ios::in);//to make it work in both the mode!

    if(fs){
        cout<<"file is there!"<<endl;
    }else{
        cout<<"file is not there!"<<endl;
    }
    //cout<<"hey my name is abhijit!"<<endl;
    fs<<"hey my name is abhijit don!"<<endl;
    while(1){
        string s ="";
        fs>>s;
        cout<<s<<" ";
        if(fs.eof())break;
    }
    string s = "";
    while(getline(fs,s)){
        cout<<s<<endl;
    }
    fs.close();
    return 0;
}