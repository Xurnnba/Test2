#include <iostream>
#include <unordered_set>
using namespace std;
int n;
string input;
int main()
{
    int number = 0;
    scanf("%d", &n);
    cin >> input;
    for (int k = 1; k <= n; k++)
    {
        bool isk=true;
        for (int i = 0; i <= n - k; i++)
        {
            string vari = input.substr(i, k);
            cout<<"vari is "<<vari<<endl;
            for (int j = i + 1; j <= n - k; j++)
            {
                string vari2 = input.substr(j, k);
                cout<<"vari2 is "<<vari2<<endl;
                if (vari == vari2)
                {
                    isk = false;
                    break;
                }
            }
        }
        if (isk)
        {
            cout << k << endl;
            break;
        }
    }
}
    // input.substr(1,input.size());
    // for(int i=0;i<n;i++){
    //     string tempDic;
    //     tempDic+=input[i];
    //     for(int j=i+1;j<n;j++){
    //     if(dic[tempDic]==true){
    //         dicDic[tempDic]=false;
    //         continue;
    //     }
    //     tempDic+=input[j];
    //     dic[tempDic]=true;
    //     }
    // subString(sub, n, input);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j < n - i; j++)
//         {
//             if (sub.find(input.substr(input[i], j)) != sub.end())
//             {
//                 number = j;
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j < n - i; j++)
//         {
//             if (sub.find(input.substr(input[i], j)) != sub.end())
//             {
//                 if (j < number)
//                 {
//                     number = j;
//                 }
//             }
//         }
//     }

//     printf("%d", number);
// }

//     // char box2 [n];
//     // box2[n-1]=input[n-1];
//     // input[n-1]=0;
//     // for(int i=0;i<input.size();i++){
       
//     // }


// //ABFCDAG BF
// //1     7

// //D--A C
// //A--B D
// //C--B D
// //B--A C
// // }

// //using tree
// // #include <iostream>
// // using namespace std;

// // const int N = 105;
// // int n;
// // string s;
// // int tree[N*4][26];

// // void build(int node, int start, int end) {
// //     if (start == end) {
// //         tree[node][s[start]-'A']++;
// //     } else {
// //         int mid = (start + end) / 2;
// //         build(2*node, start, mid);
// //         build(2*node+1, mid+1, end);
// //         for (int i = 0; i < 26; i++) {
// //             tree[node][i] = tree[2*node][i] + tree[2*node+1][i];
// //         }
// //     }
// // }

// // int query(int node, int start, int end, int l, int r) {
// //     if (l > end || r < start) {
// //         return 0;
// //     } else if (l <= start && r >= end) {
// //         int cnt = 0;
// //         for (int i = 0; i < 26; i++) {
// //             if (tree[node][i] > 0) {
// //                 cnt++;
// //             }
// //         }
// //         return cnt;
// //     } else {
// //         int mid = (start + end) / 2;
// //         int cnt1 = query(2*node, start, mid, l, r);
// //         int cnt2 = query(2*node+1, mid+1, end, l, r);
// //         return cnt1 + cnt2;
// //     }
// // }

// // int main() {
// //     cin >> n >> s;
// //     build(1, 0, n-1);
// //     for (int k = 1; k <= n; k++) {
// //         bool flag = true;
// //         for (int i = 0; i+k-1 < n; i++) {
// //             int cnt = query(1, 0, n-1, i, i+k-1);
// //             if (cnt > 1) {
// //                 flag = false;
// //                 break;
// //             }
// //         }
// //         if (flag) {
// //             cout << k << endl;
// //             break;
// //         }
// //     }
// //     return 0;
// // }

