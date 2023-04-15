#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    int realCondition[n];
    int idealCondition[n];
    int gap[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &idealCondition[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &realCondition[i]);
    }
    for (int i = 0; i < n; i++) {
        gap[i] = idealCondition[i] - realCondition[i];
    }
    int result = 0;
    int firstNoneZero=0;
    while (true) {
        for (int i = firstNoneZero; i < n; i++) {
            // 1.找到连续的正数区间
            // 2.找到区间中的最小值
            // 3.区间中每个数字都剪掉最小值
            if (gap[i] > 0) {//找正区间
                int start = i;//正区间起始index
                int end = i;//赋给end初值
                int mini = gap[i];
                while (end < n && gap[end] > 0) {//找end
                    mini = min(gap[end], mini);//找最小值
                    end++;
                }
                for (int j = start; j < end; j++) {//在区间内减去最小值
                    gap[j] -= mini;
                }
                result += mini;//记录减去的数
                break;
            }
            if (gap[i] < 0) {//找负区间
                int start = i;
                int end = i;
                int maxi = gap[i];
                while (end < n && gap[end] < 0) {
                    maxi = max(gap[end], maxi);
                    end++;
                }
                for (int j = start; j < end; j++) {
                    gap[j] -= maxi;
                }
                result -= maxi;
                break;
            }
        }
        bool allZero = true;//判断数组是否全为零
        for (int i = firstNoneZero; i < n; i++) {
            if (gap[i] != 0) {
                firstNoneZero=i;
                allZero = false;
                break;
            }
        }
        if (allZero) {
            break;//结束
        }
    }
    cout << result << endl;
}