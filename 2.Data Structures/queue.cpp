#include<iostream>
#include<queue>

using namespace std;

int main()
{
    std::queue<int> q;
    q.push(2);
    q.push(3);
    std::cout << q.front()<<"\n"; // 2
    q.pop();
    std::cout << q.front()<<"\n"; // 3
    q.pop();
    q.push(4);
    q.push(5);
    q.push(6);
    std::cout << q.front()<<"\n"; // 4
    q.pop();
    std::cout << q.front()<<"\n"; // 5
    q.pop();
    std::cout << q.front()<<"\n"; // 6
    q.pop();
}