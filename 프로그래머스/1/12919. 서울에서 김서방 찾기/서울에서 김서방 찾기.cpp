#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int size = seoul.size();

    for (int i = 0; i < size; i++)
    {
        if (seoul[i] == "Kim")
        {
            return "김서방은 " + std::to_string(i) + "에 있다";   
        }
    }
}