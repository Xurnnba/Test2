#include<iostream>
using namespace std;
// int n=1;
// int k=0;
// float s;
int main(){
    // scanf("%d",&k);
    // for(s=0;s<k;s+=1/n){
    //     n++;
    // }
    // printf("%d",n);
    int k,n=0;
    scanf("%d",&k);
    for(double Sn=0;Sn<=k;++n,Sn+=1.0/n);
    printf("%d",n);
}