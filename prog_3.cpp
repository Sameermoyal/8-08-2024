#include<bits/stdc++.h>
using namespace std;
// Write a program that reads 5 integers from the user, pushes 
// them onto a stack, and 
// then prints the stack in LIFO (Last In First Out) order.


int main(){
    stack<int>stk;
    int a;
    for(int i=0;i<5;i++){
        cin>>a;
        stk.push(a);
    }
   
    
    
    
    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    return 0;
}