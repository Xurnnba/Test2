// #include<iostream>
// using namespace std;
// int number;
// string gh;
// int total=0;
// int main(){
//     cin>>number;
//     cin>>gh;
//     for(int i=0;i<number;i++){
//         int countg=0;
//         int counth=0;
//         if(gh[i]=='G'){
//                     countg++;
//                 }
//         if(gh[i]=='H'){
//                     counth++;
//                 }
//         for(int j=i+1;j<number;j++){
//             if(gh[j]=='G'){
//                     countg++;
//                 }
//                 if(gh[j]=='H'){
//                     counth++;
//                 }
//             if(countg==1||counth==1){
//                 total++;
//             }
//         }
//     }
//     cout<<total;





// }
#include <iostream>
using namespace std;
int number;
string gh;
int total = 0;
int main() {
    cin >> number;
    cin >> gh;
    for (int i = 0; i < number; i++) {
        int countg = 0;
        int counth = 0;
        for (int j = i; j < number; j++) {
            if (gh[j] == 'G') {
                countg++;
            }
            if (gh[j] == 'H') {
                counth++;
            }
            if (j - i + 1 >= 3) {
                if (countg == 1 || counth == 1) {
                    total++;
                    cout << "total is" << total << endl;
                }
            }
        }
    }
    cout << total;
}