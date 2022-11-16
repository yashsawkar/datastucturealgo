
#include<iostream>
#include<stack>
#include<cmath>
using namespace std;


int PostFixEvulation(string s)
{
     stack<int> st;
     for(int i = 0; i < s.length(); i++)
     {
          if(s[i] >='0' && s[i] <='9')
          {
               st.push(s[i]-'0');
          }else{
               int opt2 = st.top();
               st.pop();
               int opt1 = st.top();
               st.pop();
                
               switch(s[i])
               {
                    case '+':
                         st.push(opt1+opt2);
                         break;
                    case '-':
                         st.push(opt1-opt2);
                         break;
                    case '*':
                         st.push(opt1*opt2);
                         break;
                    case '/':
                         st.push(opt1/opt2);
                         break;  
                    case '^':
                    st.push(pow(opt1,opt2));
                    break;
               }
          }
     }
     return st.top(); 
}

int precident(char c)
{
     if ( c == '^')
     {
          return 3;
     }else if (c == '*' && '/')
     {
          return 2;
     }else if (c == '+' && '-')
     {
          return 1;
     }else
     {
          return -1;
     }
}

string InFixEvulation(string s)
{
     stack<char> st;
     string res;

     for(int i  = 0; i < s.length(); i++)
     {
          if((s[i] >= 'a' && s[i]<= 'z') || (s[i] >= 'A' && s[i]<= 'Z'))
          {
               res+= s[i];
          }
          else if(s[i]=='(')
          {
               st.push(s[i]);
          }
          else if(s[i]== ')')
          {
               while(!st.empty() && s[i] == '(')
               {
                    res += st.top();
                    st.pop();
               } 
               if(!st.empty())
               {
                    st.pop(); 
               }
          }else{
          while(!st.empty() && precident(st.top()) > precident(s[i]))
          {
               res += st.top();
               st.pop();
          }
          st.push(s[i]);
     }
     while(!st.empty())
     {
          res += st.top();
          st.pop(); 
     }
     } 
     return res;
}

int main()
{
     // cout << PostFixEvulation("23+") << endl;
     cout<<InFixEvulation("(a-b/c)*(a/k-1)")<<endl;
     return 0;
}