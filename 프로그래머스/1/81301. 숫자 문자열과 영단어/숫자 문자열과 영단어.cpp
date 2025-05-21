#include <string>
#include <unordered_map>

using namespace std;

int solution(string s)
{
    int answer = 0;
    
    std::unordered_map<std::string, std::string> numMap = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}
    };

    for (auto num : numMap)
    {
        size_t pos = s.find(num.first);
        while (pos != std::string::npos)
        {
            s.replace(pos, num.first.length(), num.second);
            pos = s.find(num.first);
        } 
    }

    answer = std::stoi(s);
    
    return answer;
}