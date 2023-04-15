#include <iostream>
using namespace std;
int n;
string cows[10000];
string ij = " ";
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        cows[i]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << cows[i]<<endl;
    }
    double horizontalOneCOunt = 0;
    double verticalOneCount = 0;
    double oneAreaRatio = 0;
    int result = 0;
    while (true)
    {
        ij = " ";
        oneAreaRatio = 0;
        horizontalOneCOunt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (cows[i][j] == 1)
                {
                    horizontalOneCOunt++;
                }
                if (oneAreaRatio < (horizontalOneCOunt / (j*i)))
                {
                    oneAreaRatio = horizontalOneCOunt / (j*i);
                    ij[0] = i;
                    ij[1] = j;
                }
            }
        } // 找每个横排的1和面积比，找最大

        horizontalOneCOunt = 0;
        verticalOneCount = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (cows[j][i] == 1)
                {
                    verticalOneCount++;
                }
                if (oneAreaRatio < (verticalOneCount / (j*i)))
                {
                    oneAreaRatio = verticalOneCount / (j*i);
                    ij[0] = i;
                    ij[1] = j;
                }
            }
        }
        verticalOneCount = 0;
        for (int i = 0; i < n; i++)
        {
            verticalOneCount=0;
            horizontalOneCOunt=0;
            for (int j = 0; j <= i; j++)
            {
                if (cows[i][j] == 1)
                {
                    horizontalOneCOunt++;
                }
                if (cows[j][i] == 1 && i != j)
                {
                    verticalOneCount++;
                }
                if (oneAreaRatio < (horizontalOneCOunt + verticalOneCount) / (i * j))
                {
                    oneAreaRatio = (horizontalOneCOunt + verticalOneCount) / (i * j);
                    ij[0] = i;
                    ij[1] = j;
                }
            } // 遍历数组找1 0个数
        }

        //1 0转换
        int x = (int)ij[0];
        int y = (int)ij[1];
        result += x * y;
        for (int i = 0; i < ij[0]; i++)
        {
            for (int j = 0; j < ij[1]; j++)
            {
                if (cows[i][j] == '1')
                {
                    cows[i][j] = '0';
                    continue;
                }
                if (cows[i][j] == '0' && i!=j)
                {
                    cows[i][j] = '1';
                    continue;
                }
            }
        }
        //判断是否全零
        bool isAllZero = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (cows[i][j] == '1')
                {
                    isAllZero = false;
                }
            }
        }
        if (isAllZero)
        {
            break;
        }
    }
    cout << result << endl;
    return 0;
   }

// 0 1 1
// 1 1 0
// 0 0 1
//---------------------
// 1 0 0
// 0 0 1
// 0 0 1

// 0 0 0
// 0 0 1
// 0 0 1

// 1 1 1
// 1 1 0
// 1 1 0

// 0 0 0
// 1 1 0
// 1 1 0

// 1 1 0
// 0 0 0
// 0 0 0

// 0 0 0
// 0 0 0
// 0 0 0
