using System;

public class Solution {
    public int solution(string t, string p) {
        int answer = 0;
        
        long pValue = long.Parse(p);
        
        for (int i = 0; i <= t.Length - p.Length; i++)
        {
            string subString = t.Substring(i, p.Length);
            
            long subValue = long.Parse(subString);
            
            if (subValue <= pValue) {
                answer++;
            }
        }
        
        return answer;
    }
}