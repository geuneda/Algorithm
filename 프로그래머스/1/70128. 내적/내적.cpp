#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    // 각 원소의 같은 인덱스끼리 곱하고
    // 곱한값을 개별로 모두 더해주고 반환
    
    for(int i = 0; i < a.size(); i++)
    {
        answer += (a[i] * b[i]);
    }
    
    return answer;
}