// #include<iostream>
// using namespace std;
// int n;
// int per[50001];
// int main(){
//     scanf("%d",&n);
//     for(int i=0;i<n;++i){
//         scanf("%d",&per[i]);
//     }
//     long long fris=0;//2*(n-1);
//     for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//         int maxValue=0;
//         for(int k=i+1;k<j;k++){
//             maxValue=max(per[k],maxValue);
//         }
//         if(min(per[i],per[j])>maxValue){
//             //printf("%d,%d ",i,j);
//             fris+=j-i+1;
//         }
//        }
//     }

//     printf("%lld",fris);
    
// }

#include <iostream>
using namespace std;
int n;
int per[50001];
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &per[i]);
    }
    long long fris = 0; // 2*(n-1);

    for (int i = 0; i < n - 1; i++) {
        int maxValue = 0;
        for (int j = i + 1; j < n; j++) {
            if (min(per[i], per[j]) > maxValue) {
                fris += j - i + 1;
            }
            maxValue = max(per[j], maxValue);
        }
    }

    printf("%lld", fris);
}


// //=============================



// // #include <iostream>
// // #include<vector>
// // using namespace std;
 
// // int main() {
// // 	ios::sync_with_stdio(false);
// // 	cin.tie(nullptr);
// // 	int N; cin >> N;
// // 	vector<int> h(N); for (int& i: h) cin >> i;
// // 	int64_t ans = 0;
// // 	for (int i = 0; i < N; ++i) {
// // 		int mx = -1;
// // 		for (int j = i+1; j < N; ++j) {
// // 			if (mx < min(h[i],h[j])) ans += j-i+1; // (i,j) should be counted
// // 			mx = max(mx,h[j]);
// // 		}
// // 	}
// // 	cout << ans << "\n";
// // }
