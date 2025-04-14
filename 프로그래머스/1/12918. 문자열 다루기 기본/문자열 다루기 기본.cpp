#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.length() != 4 && s.length() != 6)
    {
        return false;
    }
    
    // 각 배열이 0보다 작거나 9보다 크면 false 반환하면 될것같음
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            answer = false;
        }
    }
    return answer;
}