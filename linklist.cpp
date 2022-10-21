
#include<iostream>
using namespace std;



int main()
{
     struct {
          int info;
          int *id;
     } ele , ele2 , ele3;

     ele.info = 89;
     ele.id = &ele.info;
     ele2.info = 91;
     ele2.id = &ele2.info;
     ele3.info = 93;
     ele3.id = &ele3.info;

     cout << "--------------------------------" << endl;
     cout << "first : \n" << "info : " << ele.info << "\n" << "address : " << ele.id << endl;
     cout << "Conforming the address to the info : " << *ele.id << endl;
     cout << "first : \n" << "info : " << ele2.info << "\n" << "address : " << ele2.id << endl;
     cout << "Conforming the address to the info : " << *ele2.id << endl;
     cout << "first : \n" << "info : " << ele3.info << "\n" << "address : " << ele3.id << endl;
     cout << "Conforming the address to the info : " << *ele3.id << endl;

     return 0;
}