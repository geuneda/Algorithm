#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int minNum = min(a, b);
    int maxNum = max(a, b);
    
    for (int i = minNum; i <= maxNum; i++)
    {
        answer += i;
    }
    
    return answer;
}
