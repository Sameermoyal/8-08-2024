#include<bits/stdc++.h>
using namespace std;

bool sol(stack<int> st, string& str){
    for(auto ch:str){
        if(!st.top()==ch){
            return false;
        }
        st.pop();
    }
   return true;
}

int main(){
    
    stack<int> st;
    cout<<"enter string to find palindrom : ";
    string s;
    cin>>s;
    
    for(auto it:s){
        st.push(it);
    }
    if(sol(st,s)){
        cout<<"it's palindrome";
    }else{
        cout<<"it's not palindrome";
    }
    
    
    return 0;
}