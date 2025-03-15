#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int evenN = n;
    
    while(!evenN == 0)
    {
        if (evenN % 2 == 0)
        {
        answer += evenN;
        }
        evenN--;
    }
    
    return answer;
}