#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        answer += numbers[i];
    }
    
    answer -= 45;
    
    answer *= -1;

    return answer;
}