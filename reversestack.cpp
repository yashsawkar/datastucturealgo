

#include<iostream>
#include<stack>
#include<string>
using namespace std;


void reversingsentence(string s)
{
     stack<string> st;
     for(int i = 0; i < s.length();i++)
     {
          string reverse = "";
          while(s[i]!=' ' && i < s.length())
          {
               reverse += s[i];
               i++;
          }
          st.push(reverse);
     }
     while(!st.empty())
     {
          cout << st.top() << " ";
          st.pop();
     }
     cout << endl;
}

void insertATbottom(stack<int> &st,int ele)
{
     if(st.empty())
     {
          st.push(ele);
          return;
     }
     int topele = st.top();
     st.pop();
     insertATbottom(st,ele);
     st.push(topele);

}

void reverseinteger(stack<int> &st)
{
     if(st.empty())
     {
          return;
     }

     int leftover = st.top();
     st.pop();
     reverseinteger(st);
     insertATbottom(st,leftover);
}

int main()
{
     // string sen;
     // getline(cin,sen);
     // reversingsentence(sen);

     stack<int> st;
     for(int i = 0; i < 5; i++)
     {
          int ele=rand()%10;
          st.push(ele);
          cout << ele << endl;
     }

     cout << " reversed stack is : " << endl;

     while(!st.empty())
     {
          cout << st.top() << endl;
          st.pop();
     }
     cout << endl;

     return 0;
}