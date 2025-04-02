#include <string>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    int length = 0;
    
    // 2로 나눈 정수만큼 수박을 넣고
    // 만약 나머지가 0이 아니라면 ? 맨 뒤에 '수' 추가
    
    length = n / 2;
    
    // length만큼 '수박' 추가
    for(int i = 0; i < length; i++){
        answer.insert(0, "수박");
    }
    
    // '수' 추가
    if(n % 2 != 0){
        answer.insert(answer.length(), "수");
    }
    
    
    return answer;
}