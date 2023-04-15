#include <iostream>
#include <algorithm>
using namespace std;
// void Comparison(int even, int odd){
//     int number;
//     if(even>odd&&even!=odd+1){
//         even-=2;
//         odd++;
//         Comparison(even,odd);
//     }
//     if(odd>even){
//         odd-=2;
//         even+=1;
//         Comparison(even,odd);
//     }
// }
int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    int odd_count;
    int even_count;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    

    if (odd_count == even_count || odd_count > even_count) {
        cout << odd_count << endl;
    } else {
        cout << odd_count + 1 << endl;
    }

    return 0;
}

    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>input[i];
    // }
    // for(int i=0;i<n;i++){
    //     if(input[i]%2==0){
    //         even++;
    //     }
    //     else{
    //         odd++;
    //     }
    // }
    // if((odd-even)%2==0||(odd-even)%2==0){
    //     cout<<odd+even-2<<endl;
    // }
    // else if(even==odd||even-odd==1){
    //     cout<<even+odd<<endl;
    // }
    // else{


    // }




    // else if(odd>even){
    //     int number;
    //     number=odd-even;
    //     number%=2;
    //     number=odd-even-number;
    //     number/=2;
    //     cout<<even+odd-number<<endl;
    // }
    // else{
    //     int number;
    //     number=even-odd;
    //     number%=2;
    //     number=even-odd-number;
    //     number/=2;
    //     cout<<even+odd-number<<endl;
    // }






// 7
// 1偶 6奇



//4偶 3奇
//n偶 n-1奇
//2n-1组
