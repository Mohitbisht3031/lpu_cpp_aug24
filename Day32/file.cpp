#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int r_n;
}

// .dat -> stores the information!
int main(){
    //cin ,cout
    // stringstream
    fstream fs;
    fs.open("./student.dat", ios::out | ios::binary);
    if(!fs){
        cout<<"file cannot be generated!"<<endl;
        fs.close();
        return 1;
    }
    Student s;
    s.name = "Abhijit";
    s.r_n = 1;
    fs.write(reinterpret_cast<char*>(&s),sizeof(Student));

    fstream fi("./student.dat",ios::in | ios::binary);
    if(!fi){
        cout<<"file not found!"<<endl;
        fi.close();
        return 1;
    }
    Student s2;
    fi.read(reinterpret_cast<char*>(&s2),sizeof(Student));
    return 0;
}