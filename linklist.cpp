

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
node* reverselinklist(node*&head)
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
     node*head=NULL;
     int size;
     cout << "Enter the list size : " << endl;
     cin >> size;
     for(int i = 0; i < size; i++)
     {    
          inserttionAttail(head,rand()%100);
     }

     display(head);
     cout << "Enter the element to delete : " << endl;
     
     node*reversedlink = reverselinklist(head);
     display(reversedlink);



     return 0; 
}