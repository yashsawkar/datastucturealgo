

#include<iostream>
using namespace std;

// creating node for doublyll 
class node{
     public:
     int data;
     node* prev;
     node* next;

     node(int val)
     {
          data=val;
          prev = NULL;
          next = NULL;
     }
};

// insertation
// insertting the value at first
void insertAThead(node*&head, int val)
{
     node*n = new node(val);
     n->next = head;
     if(head!=NULL)
     {
          head->prev = n;
     }
     head = n;
}

// Inserting the value at end
void insertATtail(node*&head,int val)
{
     node *n  = new node(val);
     if(head == NULL)
     {
          insertAThead(head,val);
     }
     node*jump = head;
     while(jump->next != NULL)
     {
          jump = jump ->next;
     }
     jump->next = n;
     n->prev = jump;
}

// deletion
// deletion at given position
void deletion(node*&head, int pos)
{
     node*jump = head;
     int count = 1;
     while(jump!=NULL && count!=pos)
     {
          jump = jump->next;
          count++;
     }
     jump->prev->next = jump->next;
     jump->next->prev= jump->prev;

     delete jump;
}

// display
void display(node*head)
{
     node*jump = head;
     while(jump!=NULL)
     {    
          cout << jump->data << " -> ";
          jump = jump->next;
     }
     cout << "NULL" << endl;
}

int main()
{
     node*head = NULL;
     for(int i = 0; i < 6; i++)
     {
          insertATtail(head,rand()%10);
     }
     display(head);
     cout << "Enter the digit to enter : " << endl;
     int val;
     cin >> val;
     insertAThead(head, val);
     display(head);
     cout << "Delete the position : " << endl;
     int del;
     cin >> del;
     deletion(head, del);
     display(head);
     return 0;
}