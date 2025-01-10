#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s;
    int n, i, flag=0;

    cin>>s;

    n=s.size();

    stack<char> st;

    for(i=0; i<n; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else{
            if(st.empty()==true){
                flag=1;
                break;
            }

            if(st.top()=='(' && s[i]==')'){
                st.pop();
            }else if(st.top()=='{' && s[i]=='}'){
                st.pop();
            }else if(st.top()=='[' && s[i]==']'){
                st.pop();
            }else{
                flag=1;
                break;
            }
        }
    }

    if(st.empty()==false){
        flag=1;
    }

    if(flag==0){
        cout<<"Balanced\n";
    }else{
        cout<<"Not Balanced\n";
    }

}