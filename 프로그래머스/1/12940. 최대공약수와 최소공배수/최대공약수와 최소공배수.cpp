#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int a = 0;
    
    if (n > m)
    {
        a = n;
    }
    else{
        a = m;
    }
    
    // 두 수의 최대공약수와
    while (true)
    {
        if (n % a == 0 && m % a == 0)
        {
            answer.push_back(a);
            break;
        }
        a--;
    }
    
    // 최소 공배수를 반환해야함
    int b = 1;
    
    while (true)
    {
        if (b % n == 0 && b % m == 0)
        {
            answer.push_back(b);
            break;
        }
        b++;
    }

    return answer;
}