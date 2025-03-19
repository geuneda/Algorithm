#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {

    if (n == 0) return 0;

    int answer = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;

            if (i != n / i)
            {
                answer += n / i;
            }
        }
    }

    return answer;
}