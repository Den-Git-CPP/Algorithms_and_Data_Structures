#include<iostream>
#include<stack>
#include<string>



int main()
{
stack<int> st;
st.push(2);
st.push(7);
std::cout<<st.top(); //7
st.top();
st.pop();
st.push(3);
st.push(4);

std::cout<<st.top();//4
st.pop();

std::cout<<st.top();//3
st.pop();

return 0;
}