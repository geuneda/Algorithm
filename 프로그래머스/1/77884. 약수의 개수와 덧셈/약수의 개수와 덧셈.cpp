#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    // 1. left 부터 right 까지의 수를
    int count = 0;
    // 2. 약수의 갯수를 구해서
    // 3. 약수의 갯수가 짝수면 더하고 홀수면 뺀 값을 반환
    for(int i = left; i <= right; i++){
        count = 0;
        
        for(int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        
        (count % 2) == 0 ? answer += i : answer -= i;
        
    }
    return answer;
}