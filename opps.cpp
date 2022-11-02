

#include<iostream>
using namespace std;

class A{
     public:
     void operationa()
     {
          cout << " Your in class A" << endl;
     }
};
class B : public A{
     public:
     void operationb()
     {   
          cout << " In class B" << endl;
     }
};

class C : public B{
     public :
     void opertionc()
     {
          cout << " operting class C" << endl;
     }
};

class ground{
     public :
     void preseceg()
     { 
          cout << "GROUND" << endl;
     }
};

class middle : private ground {
     public :
     void presesem()
     {
          cout << "MIDDLE" << endl;
     }
     protected : 
     void presesepm()
     {
          cout << "protected " << endl;
     }
};

class top : public middle {
     public :
     void prseset()
     {
          cout << "TOP"<< endl; 
     }
};


int main()
{
     C C;
     C.operationa();
     C.operationb();
     top t;
     t.presesem();
     t.prseset();
     return 0;
}