#include <string>
using namespace std;

bool solution(int x) {
    int original = x;
    int result = 0;

    while (x > 0) {
        result += x % 10;
        x /= 10;
    }

    return original % result == 0;
}
