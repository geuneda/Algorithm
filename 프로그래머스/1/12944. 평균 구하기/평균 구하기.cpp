#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sizeOfArr = 0;

    sizeOfArr = arr.size();

    for (int i = 0; i < sizeOfArr; i++)
    {
        answer += arr[i];
    }

    answer /= sizeOfArr;

    return answer;
}