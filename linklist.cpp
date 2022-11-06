

#include<iostream>
using namespace std;


// Creating a node structure
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

// insertation 
// insertation at head
void inserttionAThead(node*& head,int val)
{
     node*n = new node(val);
     n->next = head;
     head=n;

}

// insertation at tail
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


// deletion
// deletion at head
void deletionAThead(node*&head)
{
     node*todelete = head;
     head = head->next;
     delete todelete;
}
// deletion at given value
void deletion(node*&head,int val)
{
     if(head==NULL)
     {
          return;
     }
     if(head->next ==NULL)
     {
          node*nowdelete = head;
          head = head->next;
          delete nowdelete;
          return;
     }
     node*temp = head;
     while(temp->next->data !=val)
     {
          temp = temp->next;
     }
     node* todelete = temp->next;
     temp->next = temp->next->next;
}

// searching
// searching the element
bool searchlink(node*head, int key)
{
     node*temp = head;
     while(temp!=NULL)
     {
          if(temp->data==key)
          {
               return true;
          }
          temp = temp->next;
     }
     return false;
}

// reversing the order
// using while loop
node* reverselinkloop(node*&head)
{
     cout << "Reversed string : "<< endl;

     node*prevptr = NULL;
     node*currptr = head;
     node*nextpt;

     while(currptr !=NULL)
     {
          nextpt = currptr->next;
          currptr->next = prevptr;

          prevptr = currptr;
          currptr = nextpt;
     }
     return prevptr;             // since this is the new head pointer
}

//using recurrsion
node*reverselinkrec(node*&head)
{

     if(head->next==NULL || head == NULL)
     {
          return head;
     }
     node*newhead = reverselinkrec(head->next);
     head->next->next = head;
     head->next = NULL;

     return newhead;
}

// reversing with bit size
node* reversebit(node*&head, int bit)
{
     node*previous = NULL;
     node*current = head;
     node*nextptr;

     int cout = 0;
     while (current!=NULL && cout < bit)
     {
          nextptr = current->next;
          current->next = previous; 

          previous  = current;
          current = nextptr;
          cout++;
     }
     if(nextptr!=NULL)
     {
          current->next = reversebit(nextptr,bit); 
     }
     return previous;
}



// output
// display
void display(node*head)
{
     cout << "[  ";
     node*temp = head;
     while(temp!=NULL)
     {
          cout << temp->data << " -> ";
          temp = temp->next;
     }
     cout << " NULL"<<"  " <<"]"<<endl;
}


int main()
{         
     node*heade=NULL;
     int size;
     cout << "Enter the list size : " << endl;
     cin >> size;
     for(int i = 0; i < size; i++)
     {    
          inserttionAttail(heade,rand()%100);
     }

     display(heade);
     
     // node*reversedwhi = reverselinkrec(heade);
     // display(reversedwhi);

     // node*reversedrec = reverselinkrec(head);
     // display(reversedrec);

     reversebit(heade,2);
     display(heade);





     return 0; 
}