#include<iostream>
using namespace std;
int n;
int c[50001];
int a[50001];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &c[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
   
    for(int i=0;i<n-1;i++){
        if(a[i]+a[i+1]<=c[i+1]){
            a[i+1]=a[i]+a[i+1];
            a[i]=0;
        }
        else{
            a[i]=a[i]-c[i+1]+a[i+1];
            a[i+1]=c[i+1];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   
    return 0;
}