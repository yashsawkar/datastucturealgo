

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


int main()
{
     string sen;
     getline(cin,sen);
     reversingsentence(sen);
     return 0;
}