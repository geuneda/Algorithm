#include <stack>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    stack<int> stackNum;
    
    while (n>0)
    {
        stackNum.push(n%3);
        n /= 3;
    }

    int multiple = 1;

    while (!stackNum.empty())
    {
        answer += stackNum.top() * multiple;
        stackNum.pop();
        multiple *= 3;
    }
    
    return answer;
}