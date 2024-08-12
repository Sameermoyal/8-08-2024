#include<bits/stdc++.h>

using namespace std;



int main(){
    map<string,float> mymap = {
        {"sameer",2.3},
        {"cepra",3.6},
        {"uncle",4.8},
        {"damru",5.9}
    };
    stack<map<string,float>> st;
    st.push(mymap);
    
    while(!st.empty()){
        map<string,float> k = st.top();
        for(auto it: k){
            cout<<it.first<<":"<<it.second<<endl;
        }
        cout<<endl;
        st.pop();
    }
    
    
    return 0;
}