#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    
    int w = 0;
    int h = 0;
    
    for(int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][1] > sizes[i][0])
        {
            int temp = sizes[i][1];
            sizes[i][1] = sizes[i][0];
            sizes[i][0] = temp;
        }

        w = std::max(w, sizes[i][0]);

        h = std::max(h, sizes[i][1]);
    }
    
    return w * h;
}