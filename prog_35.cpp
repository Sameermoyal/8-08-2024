#include<bits/stdc++.h>

using namespace std;

stack<string> rev(stack<string> &st){
    stack<string> tem;
    while(!st.empty()){
        tem.push(st.top());
        st.pop();
    }
    st=tem;
    return st;
}

int main(){
    vector<string> arr = {"kadir","lalu","babu","chscha"};
    stack<string> st;
    for(auto it:arr){
        st.push(it);
    }
    rev(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}