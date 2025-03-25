#include <string>
#include <vector>
#include<cmath>

using namespace std;

long long solution(long long n)
{
    long long root = static_cast<long long>(sqrt(n));
    
    if(root * root == n) // 양의 정수여야만 정확한 값이 나옴
    {
        return (root+1)*(root+1);
    }
    else{return -1;}
}