#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    int signInt = 0;
    
    for(int i = 0; i < absolutes.size(); i++)
    {
        (signs[i] == true) ? signInt = 1 : signInt = -1;
        answer += signInt * absolutes[i];
    }
    
    return answer;
}