#include<iostream>
#include<vector>
using namespace std;
// int n=0;
// int N;
// int ind=0;
// int main(){
//     scanf("%d",&N);
//     while(N!=n){
//         ind++;
//         if(ind%3!=0&&ind%5!=0){
//             n++;
//         }
        
//     }
//     printf("%d",ind);
// }
int n,count15,countBase,num;
int base[8]={1,2,4,7,8,11,13,14};
int main(){
    scanf("%d",&n);
    count15=n/8;
    countBase=n%8;
    if(countBase==0){
        num=count15*15-1;
    }
    else{
        num=15*count15+base[countBase-1];
    }
    printf("%d",num);



}
