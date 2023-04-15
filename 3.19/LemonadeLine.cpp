#include <iostream>
using namespace std;
int n;
int count1;
int lem [50001];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&lem[i]);
    }
    sort(lem,lem+n,greater<int>());
    for(int i=1;i<n;i++){
        if(lem[i]>=i){
            count1++;
        }
        else{
            break;
        }
    }
    printf("%d",count1);









}