#include <string>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int sLength = 0;
    
    sLength = s.length();
    // 짝수라면 가운데 두글자
    if((sLength % 2) == 0){
        answer = s.substr(sLength/2-1, 2);
    }// 홀수라면 가운데 글자
    else{
        answer = s.substr(sLength/2, 1);
    }
    
    
    return answer;
}