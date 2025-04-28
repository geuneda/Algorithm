#include <string>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    
    for(char c : s)
    {
        if(c == ' ')
        {
            answer += c;
            index = 0;
        }
        else
        {    
            if(index % 2 == 0)
            {
                answer += toupper(c);
                index++;
            }
            else
            {
                answer += tolower(c);
                index++;
            }
        }
    }
    
    return answer;
}