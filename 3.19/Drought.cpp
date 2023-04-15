#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int main()
{
    cin >> n;      // 输入总行数
    int number;    // 每行牛的数量
    int result[n]; // 结果数组
    int bags;
    for (int i = 0; i < n; i++)
    {
        vector<long long> cows(100);
        bags = 0;
        number = 0;
        cin >> number; // 输入此行的牛数
        for (int j = 0; j < number; j++)
        {
            cin >> cows[j];
        }
        long long mini = cows[0]; // 记录此行最小值
        for (int j = 0; j < number; j++)
        {
            mini = min(cows[j], mini); // 最小值
        }

        int next = 1; // 记录下一头牛的位置，保证最后一位不会再进行比较
        if (number > 2)
        {
            int j = 0;
            while (j < number) // for (int j = 0; j < number; j++)
            {
                    if (cows[j] < 0 || cows[next] < 0)
                    {
                        bags = -1;
                        break;
                    }
                    if(next==number){
                        next=0;
                    }
                    if (j == number - 1 && (cows[j] != mini || cows[next] != mini))
                    {
                        j = 0;
                        next=1;
                        continue;
                    }
                    if (cows[j] != mini)
                    {
                    bags += 2 * (cows[j] - mini);
                    cows[next] -= cows[j] - mini;
                    cows[j] -= cows[j] - mini;
                    mini = min(mini, cows[next]);
                    // if(cows[j]!=mini){
                    //     result[i]=-1;
                    //     break;
                    // }
                    }
                    j++;
                    next++;
            }
        }
        else
        {
            result[i] = -1;
            continue;
        }
        result[i] = bags;
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }
}
