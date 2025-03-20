#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // n을 나눠서 1이 남는 수 중 가장 작은 자연수를 반환해야함.
    
    // n을 나눠서 1이 남는 수를 구하는 방법은 ?
    
    // n % i = 1 을 만족해야함
    
    for (int i = n; i > 0; i--)
    {
        if (n % i == 1)
        {
            answer = i;
        }
    }
    return answer;
}