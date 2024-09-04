#include<bits/stdc++.h>
using namespace std ;

class savant{

};

class pookiesHouse{
    private:
    int pookies_room_no;
    public:
    int no_Of_Room;
    int no_of_windows;
    string name;
    static string classId;
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
    // destructor!
    ~pookiesHouse(){
        cout<<"des. called"<<endl;
    }
    friend void jitesh(pookiesHouse &ph);
    // friend savant;
};

void jitesh(pookiesHouse &ph){
    pookiesHouse::classId = "KS011";

    // cout<<"Pookies room number is - "<<ph.pookies_room_no<<endl;
}

int main(){
    int a;
    pookiesHouse ph;
    // ph.setVal(1,100,20,"pookabhi");
    jitesh(ph);
    cout<<"No. of rooms in the house are "<<ph.no_Of_Room<<endl;
    return 0;
}