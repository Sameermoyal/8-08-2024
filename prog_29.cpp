#include<bits/stdc++.h>

using namespace std;



int main(){
    vector<pair<int,string>> arr = {
        {1, "sameer"},
        {2, "bablu"},
        {3, "pani"},
        {4, "anneer"}
    };
    stack<vector<pair<int,string>>> st;
    st.push(arr);
    
    while(!st.empty()){
        vector<pair<int,string>> k = st.top();
        for(auto it: k){
            cout<<it.first<<":"<<it.second<<endl;
        }
        cout<<endl;
        st.pop();
    }
    
    
    return 0;
}