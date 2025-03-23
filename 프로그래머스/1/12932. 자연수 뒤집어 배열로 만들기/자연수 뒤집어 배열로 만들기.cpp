#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int x;
    // 10으로 나누고 나머지를 배열에넣고 몫을 다음번 계산에 쓰면 됨
    while(n != 0)
    {
        x = n % 10;
        answer.push_back(x);
        n = n / 10;
    }
    return answer;
}