#include<iostream>
#include <stack>
using namespace std;
stack<int> st;
void inseartAtBottom(char x){
    if(st.empty()){
        st.push(x);
    }else{
        char i=st.top();
        st.pop();
        inseartAtBottom(x);
        st.push(i);
    }
}
void reverse(){
    if(!st.empty()){
        int a=st.top();
        st.pop();
        reverse();
        inseartAtBottom(a);
    }
}
int main(){
    st.push(5);
    
    st.push(6);
    
    st.push(7);
    
    st.push(8);
    
    st.push(9);
    
    st.push(11);
    
    st.push(12);
    
    st.push(13);
    int n=st.size();
    for(int i=0;i<n;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    st.push(5);
    
    st.push(6);
    
    st.push(7);
    
    st.push(8);
    
    st.push(9);
    
    st.push(11);
    
    st.push(12);
    
    st.push(13);
    reverse();
    
    for(int i=0;i<n;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
