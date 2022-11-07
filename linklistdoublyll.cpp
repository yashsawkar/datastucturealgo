

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
// Inserting the value at end
void insertAThead(node*&head,int val)
{
     node *n  = new node(val);
     if(head == NULL)
     {
          
     }
     node*jump = head;
     while(jump->next != NULL)
     {
          jump = jump ->next;
     }
     jump->next = n;
     n->prev = jump;
}



int main()
{
     
     return 0;
}