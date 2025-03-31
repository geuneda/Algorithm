#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    int length = phone_number.length();
    int maskLength = length - 4;
    
    string firstNum(maskLength, '*');
    string lastNum = phone_number.substr(maskLength);
    
    return firstNum + lastNum;
}