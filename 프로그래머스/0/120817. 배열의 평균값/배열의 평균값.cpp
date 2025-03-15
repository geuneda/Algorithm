#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
	int nLength = numbers.size();

	for (size_t i = 0; i < nLength; i++)
	{
		answer += numbers[i];
	}

	answer = answer / nLength;

    return answer;
}