

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
}

int main()
{
     C C;
     C.operationa();
     C.operationb();
     return 0;
}