

#include<iostream>
using namespace std;

class node{
     public:
     int data;
     node*next;

     node(int val)
     {
          data = val;
          next = NULL;
     }
};

void inserttionAttail(node*&head, int val)
{
     node*n = new node(val);
     if(head == NULL)
     {
          head = n;
          return;
     }
     node* temp = head;
     while (temp->next != NULL)
     {
          temp = temp->next;
     }
     temp->next =n;
}

void display(node*head)
{
     cout << "[\t";
     node*temp = head;
     while(temp!=NULL)
     {
          cout << temp->data << "\t";
          temp = temp->next;
     }
     cout << "]"<<endl;
}


int main()
{         
     node*head=NULL;
     int size;
     cout << "Enter the amount of list size : " << endl;
     cin >> size;
     for(int i = 0; i < size; i++)
     {    
          int valu;
          cin >> valu;
          inserttionAttail(head,valu);
     }

     cout << "displaying the list : " << endl;
     display(head);
     return 0;
}