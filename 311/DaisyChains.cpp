// #include <iostream>
// #include <numeric>
// #include <vector>
// using namespace std;
// int n;
// int res = 0;
// int main() {
//     scanf("%d", &n);
//     vector<int> daisy(n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &daisy[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             double average = 0.0;
//             for (int l = i; l < j + 1; l++) {
//                 average += daisy[l];
//             }
//             average = average / (j - i + 1);
//             // cout<<average<<endl;
//             for (int k = i; k < j + 1; k++) {
//                 if (average == daisy[k]) {
//                     res++;
//                     printf("%d %d /n ",daisy[i],daisy[j]);
//                     break;
//                 }
//             }
//         }
//     }

//     printf("%d", res);
// }

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int n;
int res = 0;
int main() {
    scanf("%d", &n);
    vector<int> daisy(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &daisy[i]);
    }

    for (int i = 0; i < n; i++) {
        double total = 0;
        bool dep[50001];
        for (int j = i; j < n; j++) {
            dep[daisy[j]] = true;
            total += daisy[j];
            double average = total / (j - i + 1);
            if (average - (int)average != 0) {
                continue;
            } else {
                if (dep[(int)average] == true) {
                    res++;
                }
            }
        }
    }

    printf("%d", res);
}