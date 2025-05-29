#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    
    // strings를 정렬해야함
    // 정렬할 때 해당 문자열의 n번째 문자의 크기를 오름차순으로 정렬하면 됨.
    
    sort(answer.begin(), answer.end(), [&](const string& a, const string& b)
        {
            char aC = a[n];
            char bC = b[n];
            
            if (aC < bC) return true;
            if (aC > bC) return false;
            
            if (aC == bC)
            {            
                return a < b;
            }
        }
        );
    
    return answer;
}