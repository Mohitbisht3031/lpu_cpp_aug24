#include<bits/stdc++.h>
using namespace std;

// single level
class A{
};
class B : public A{
};

// Multi level
class A{
};
class B : A{
};
class C : B{};

// Multiple
class A{
};
class B{
};
class C : public A, protected B{};

// Hier
class A{
};
class B : A{
};
class C : A{};

// Hybrid
class A{
};
class B : A{
};
class C : A{};
class D : B,C{};

int main(){
    return 0;
}