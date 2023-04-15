#include<iostream>
#include<set>
using namespace std;
int n,b;
int main(){
    scanf("%d",&n);
    set<int>a;
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        a.insert(b);
    }
    cout<<*a.lower_bound(0);

}