

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
void insertAThead(node*&head,int val)
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
     
     return 0;
}