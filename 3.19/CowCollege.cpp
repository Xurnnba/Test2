#include <iostream>
using namespace std;
int n;
int c=0;
int count1=0;
int tot=0;
int tuition[50001];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tuition[i]);
    }
    sort(tuition,tuition+n);
        for(int i=0;i<n;i++){
            if(tot<tuition[i]*(n-i)){
                tot=tuition[i]*(n-i);
                c=i;
            }
        }
        cout<<tot<<" "<<tuition[c]<<endl; 
    }
            
    // for(int i=0;i<n;i++){
    //     count1=n;
    //     for(int j=0;j<n;j++){
    //         if(c>tuition[j]){
    //             count1--;
    //         }
    //     }
    //     if(tot<tuition[i]*count1){
    //         c=tuition[i];
    //         tot=c*(i+1);
    //     }

    // }
    // printf("%d %d",tot,c);







