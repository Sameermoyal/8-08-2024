#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<string> arr = {"sameer", "sonu","lala","papu"} ;
    stack<string> st;
    for(auto it:arr){
        st.push(it);
    }
    int i = 0;
    while(!st.empty() && i<3){
        cout<<st.top()<<" ";
        st.pop();
        i++;
    }
    
    
    return 0;
}