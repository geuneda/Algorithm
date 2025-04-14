using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = money;
    
    // 놀이구의 이용료 = price
    // 이용 횟수 = count
    // 가진 돈 = money
    
    // 이용료는 이용할 때 마다 n배만큼 증가
    
    for(int i = 1; i <= count; i++)
    {
        answer -= (price * i);
        // 요구결과 = 모자란금액
        // 충분하다면 = 0
    }

    if(answer < 0)
    {
        return answer*-1;
    }
    else{
        return 0;
    }
    
}