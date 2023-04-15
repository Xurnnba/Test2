#include<iostream>
using namespace std;
int a;
int day=1;
int main(){
    scanf("%d",&a);
    while(a!=1){
        a=a/2;
        day++;
    }
    printf("%d",day);

    return 0;
}