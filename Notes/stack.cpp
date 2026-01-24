#include<bits/stdc++.h>
using namespace std;
class Stack {
        vector<int>vec;
    public:
    void push(int data){
        vec.push_back(data);
    }
    void pop(){
        vec.pop_back();
    }
    int top(){
        return vec.back();
    }
    bool isEmpty(){
        return vec.size()==0;
    }
     
    


    };

int main(){
    Stack s;
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    cout<<s.top()<<endl;
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";



    return 0;
}
