#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    string dir[n];
    for (int i = 0; i < n; i++)
    {
        string path;
        cin >> path;
        int out = 0;
        int in = 0;
        for (int j = 0; j < path.size() - 1; j++)
        {
            if (path[j] == 'N' && path[j + 1] == 'W')
            {
                out++;
            }
            if (path[j] == 'N' && path[j + 1] == 'E')
            {
                in++;
            }
            if (path[j] == 'S' && path[j + 1] == 'W')
            {
                in++;
            }
            if (path[j] == 'S' && path[j + 1] == 'E')
            {
                out++;
            }

            if (path[j] == 'W' && path[j + 1] == 'N')
            {
                out++;
            }
            if (path[j] == 'E' && path[j + 1] == 'N')
            {
                in++;
            }
            if (path[j] == 'W' && path[j + 1] == 'S')
            {
                in++;
            }
            if (path[j] == 'E' && path[j + 1] == 'S')
            {
                out++;
            }
        }
        if (out - in > 0)
        {
            cout << "CCW" << endl;
        }
        else
        {
            cout << "CW" << endl;
        }
    }
}