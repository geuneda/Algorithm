#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    // 문자열을 뜯어서
    // 하나씩 n만큼 밀어줘야함
    
    for (char& c : s)
    {
        if (c == ' ')
        {
            answer += ' ';
            continue;
        }
        char base = isupper(c) ? 'A' : 'a';
        char result = (c - base + n) % 26 + base;
        
        answer += result;
    }
    
    return answer;
}