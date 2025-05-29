#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
 
    // array를 이용해서 2차원 배열 commands의 i, j, k의 값을 기반으로
    // -> i번째부터 J번째까지 정렬하고 k번째 값을 저장
    // 모두 순회 후 반환

    for (int i = 0; i < commands.size(); i++)
    {
        vector<int> temp(array.begin() + commands[i][0] - 1, array.begin() + commands[i][1]);

        sort(temp.begin(), temp.end());

        answer.push_back(temp[commands[i][2] - 1]);
    }
    
    
    return answer;
}