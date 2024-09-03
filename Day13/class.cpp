#include<bits/stdc++.h>
using namespace std ;

class pookiesHouse{
    private:
    int pookies_room_no;
    public:
    int no_Of_Room;
    int no_of_windows;
    string name;

    //default const.
    pookiesHouse(){
        cout<<"default const."<<endl;
    }

    //parametrize
    // pookiesHouse(int prn,int nr,int nw,string n){
    //     pookies_room_no = prn;
    //     no_Of_Room = nr;
    //     no_of_windows = nw;
    //     name = n;
    // }

    //initializer list
    pookiesHouse(int prn,int nr,int nw,string n) : pookies_room_no(prn) , no_Of_Room(nr) , no_of_windows(nw){
    }

    // void setVal(int prn,int nr,int nw,string n){
    //     pookies_room_no = prn;
    //     no_Of_Room = nr;
    //     no_of_windows = nw;
    //     name = n;
    // }

};

int main(){
    int a;
    pookiesHouse ph(1,100,20,"pookabhi");
    // ph.setVal(1,100,20,"pookabhi");
    cout<<"No. of rooms in the house are "<<ph.no_Of_Room<<endl;
    return 0;
}