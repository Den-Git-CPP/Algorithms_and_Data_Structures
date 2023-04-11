#include<iostream>
#include<stack>
#include<string>

bool isOpen(char ch)
{
    return ch == '{' || ch == '(' || ch == '[';
}

bool isPair(char open, char close)
{
    return open == '{' && close == '}' || 
        open == '(' && close == ')' ||
        open == '[' && close == ']';
}

bool isBalanced(std::string s)
{
    std::stack<char> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isOpen(s[i]))
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && isPair(st.top(), s[i]))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}


int main()
{
// std::stack<int> st;
// st.push(2);
// st.push(7);
// std::cout<<st.top(); //7
// st.top();
// st.pop();
// st.push(3);
// st.push(4);

// std::cout<<st.top();//4
// st.pop();

// std::cout<<st.top();//3
// st.pop();


// (){}[]
   std::string s1 = "()({[]}())"; // true
    std::string s2 = "{}"; // true
    std::string s3 = "}{"; // false
    std::string s4 = ""; // true
    std::string s5 = "(()"; // false
    std::string s6 = "())"; // false
    std::string s7 = "[(])"; // false
    std::cout << isBalanced(s1) <<"\n"; // 1
    std::cout << isBalanced(s2) <<"\n"; // 1
    std::cout << isBalanced(s3) <<"\n"; // 0
    std::cout << isBalanced(s4) <<"\n"; // 1
    std::cout << isBalanced(s5) <<"\n"; // 0
    std::cout << isBalanced(s6) <<"\n"; // 0
    std::cout << isBalanced(s7) <<"\n"; // 0

return 0;
}