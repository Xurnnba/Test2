#include <iostream>
using namespace std;
int a;
double fee;
int main(){
    scanf("%d",&a);
    if(a>=0&&a<=150){
        fee=0.4463*a;
    printf("%.1lf",fee);
    }
    else if(a<=400){
        fee=150*0.4463+0.4663*(a-150);
        printf("%.1lf",fee);
    }
    else{
        fee=150*0.4463+250*0.4663+0.5663*(a-400);
        printf("%.1lf",fee);
    }
}