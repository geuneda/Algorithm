#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    bool check = false;
    
    // arr을 divisor로 나누고 나머지가 0이라면 answer에 넣어서 반환
    // 하나도 나누지 못했다면 -1을 반환
    
    for(int i = 0; i < size(arr) ; i++)
    {
        if(arr[i] % divisor == 0){
            answer.push_back(arr[i]);
            check = true;
        }
    }

    sort(answer.begin(), answer.end());
    
    if(check) return answer;
    
    answer.push_back(-1);
    
    return answer;
}