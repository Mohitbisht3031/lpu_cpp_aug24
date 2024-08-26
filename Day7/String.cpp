#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string str = "My name is mohit";
    // .size();
    cout<<str.size()<<" "<<s.size()<<endl;
    str+=" and i'm from delhi!!"; //concat
    cout<<str.size()<<" "<<s.size()<<endl;
    cout<<str<<endl;
    str[1] = 'x'; //accesing line an array
    cout<<str<<endl;

    // cin>>s;
    getline(cin,s); //another way of taking inputs if you want to take in a satement!
    // reverse(s.begin(),s.end()); //to reverse the string
    s+=" is My name...!";
    s.push_back('X'); // push in a char at the end!!
    cout<<s<<endl;
    s.pop_back(); // pop out a char from the end!
    cout<<s<<endl;
    
    //To iterate over the string!
    for(int i = 0;i<s.size();i++){
        cout<<i<<"->"<<s[i]<<endl;
    }

    // sub string
    // string sub = s.substr(3,6); // to get the sub string , 1st arg is the index from
    //where to start and 2nd arg is no. of char to take!
    string sub = s.substr(3);
    cout<<sub<<endl;
    return 0;
}