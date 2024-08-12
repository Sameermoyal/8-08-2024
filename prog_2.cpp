#include<bits/stdc++.h>
using namespace std;
//initialize a stack of strings. Push the strings "apple", 
//"banana", and "cherry" onto it. Pop the top element and print it.



int main(){
    stack<string>stk;
    string s; 
   
    stk.push("apple");
    
    stk.push("banana");
    
    stk.push("cherry");
    
    
    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}