#include<iostream>
using namespace std;
float s;
int n=1;
float gap=0.98;
int main(){
    scanf("%f",&s);
    //s<=2*(1-0.98^n)/(1-0.98)
    //-(s*0.02/2-1)>=0.98^n
    //-(0.043-1)=0.957 0.98
    while(-(s*0.02/2-1)<=gap){
        gap*=0.98;
        n++;
    }
    printf("%d",n);
    return 0;
}