#include<iostream>
#include<vector>
using namespace std;
int n,k;
int sumA,sumB;
vector<int> a,b;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<n+1;i++)i%k==0?a.push_back(i):b.push_back(i);
    for(int i=0;i<a.size();i++){
        sumA+=a[i];
    }

    for(int i=0;i<b.size();i++){
        sumB+=b[i];
    }

    printf("%.1f %.1f",sumA/(a.size()*1.0),sumB/(b.size()*1.0));

}