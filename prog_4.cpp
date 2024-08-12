#include<bits/stdc++.h>
using namespace std;
// Create a stack of characters. Push the characters 'A', 'B', 'C', and 
// 'D' onto it. Print the stack, then pop all elements and print them again.


int main(){
    stack<char>stk;
    stk.push('A');
    
    stk.push('B');
    
    stk.push('C');
    
    stk.push('D');
    
    
    
    vector<char>arr;
    
    while(!stk.empty()){
        cout<<stk.top()<<endl;
        arr.push_back(stk.top());
        stk.pop();
    }
    
    cout<<endl;
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}