#include <iostream>
using namespace std;
int n;
string breed;
int order[105];
int main()
{
    cin >> n;
    cin >> breed;
    int GCount, HCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> order[i];
        if (breed[i] == 'H')
        {
            HCount++;
        }
        if (breed[i] == 'G')
        {
            GCount++;
        }
    }

    int leader, sit, posSit = 0;
    bool isLeader[105];
    int GLeader, HLeader = 0;
    for (int i = 0; i < breed.size(); i++)
    {
        int sameCount = 0;
        for (int j = i; j < order[i]; j++)
        {
            if (breed[i] == breed[j])
            {
                sameCount++;
            }
        }
        if (breed[i] == 'G' && sameCount == GCount)
        {
            GLeader++;
            isLeader[i] = true;
        }
        if (breed[i] == 'H' && sameCount == HCount)
        {
            HLeader++;
            isLeader[i] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (isLeader[i] == false)
        {
            for (int j = i; j < order[i]; j++)
            {
                if (breed[i] == 'G' && breed[j] == 'H' && isLeader[j])
                {
                    GLeader++;
                }
                if (breed[i] == 'H' && breed[j] == 'G' && isLeader[j])
                {
                    HLeader++;
                }
            }
        }
    }
    cout << GLeader * HLeader << endl;
}
