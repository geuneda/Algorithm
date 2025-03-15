#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    // 1에서 89는 예각 = 1
    // 90은 직각 = 2
    // 91에서 179는 둔각 = 3
    // 180은 평각 = 4
    // 45로 나누면 2와 4는 해결됨.
    
    if (angle % 45 == 0) {
        return angle / 45; // 90도는 2, 180도는 4 반환
    } else if (angle < 90) {
        return 1; // 예각
    } else {
        return 3; // 둔각
    }
}