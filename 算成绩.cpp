#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    double score;
    scanf("%lf%lf%lf",&a,&b,&c);
    score=a*0.2+b*0.3+c*0.5;
    printf("%.lf",score);
}