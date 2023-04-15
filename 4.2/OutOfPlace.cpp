#include <iostream>
using namespace std;
int n;
int cows[100];
int res = 0;
bool judge = true;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>cows[i];
    }
    for(int i=0;i<n;i++){
        if(cows[i]==cows[i+1]){

        }
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (cows[j] > cows[j + 1])
            {
                if(temp!=cows[j]){
                    res++;
                }
                temp = cows[j];
                cows[j] = cows[j + 1];
                cows[j + 1] = temp;
            }
        }
    }

    cout << res;
}