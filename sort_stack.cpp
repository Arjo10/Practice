class Solution {
public:
    void insertstack(stack<int>&st,int temp){
    if(st.empty()||(st.top()<=temp)){
        st.push(temp);
        return;
    }
    int x=st.top();
    st.pop();
    insertstack(st,temp);
    st.push(x);
    }
    void sortStack(stack<int> &st) {
       if(st.empty()) return;
       int temp=st.top();
       st.pop();
       sortStack(st);
       insertstack(st,temp);
    }
};
