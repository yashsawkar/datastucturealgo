

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

void insertationATend(node*&head, int val)
{
     node*n = new node(val);
     if(head == NULL)
     {
          head = n;
          return;
     }
     node*temp = head;
     while(temp->next !=NULL)
     {
          temp = temp->next;
     }
     temp->next  =n;
}

void display(node*head)
{
     node*temp = head;
     while(temp!=NULL)
     {
          cout << temp->data << " -> ";
          temp = temp->next;
     }
     cout << "NULL" << endl;
}

void deletion(node*&head, int del)
{
     if(head==NULL)
     {
          return;
     }
     node*temp = head;
     while(temp->next->data != del)
     {
          temp = temp->next;
     }
     node*todelete=temp->next;
     temp->next = temp->next->next;
     delete todelete;
}

int main()
{
     node*head=NULL;
     for(int i = 0; i <5;i++)
     {
          insertationATend(head,rand()%10);
     }
     display(head);
     int val;
     cout << " Enter the element to be deleteed : " << endl;
     cin >> val;
     deletion(head,val);
     display(head);
     return 0;
}