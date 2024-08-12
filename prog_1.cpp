
//Create a stack of integers and push the numbers 1 to 10 onto it.
//Then, print all elements of the stack.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack<int> st;
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
