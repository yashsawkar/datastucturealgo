

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


// insertation at head
void inserttionAThead(node*& head,int val)
{
     node*n = new node(val);
     n->next = head;
     head=n;

}

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
     cout << "Insert a value at start to the list : " << endl;
     int val;
     cin >> val;
     inserttionAThead(head, val);
     cout << "displaying the list : " << endl;
     display(head);
     cout << "Enter the digit to find : " << endl;
     int key;
     cin >> key;
     bool ans = searchlink(head,key);
     cout << " The element " << key << " : " << ans<< endl;



     return 0; 
}