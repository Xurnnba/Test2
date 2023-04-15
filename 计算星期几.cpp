#include<iostream>
using namespace std;
int a,b;
long long power=1;
int main(){
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++){
        power*=a;
        power%=7;
    }
    switch(power){
        case 1:printf("Monday");
        
        break;
        case 2:printf("Tuesday");
        break;
        case 3:printf("Wednesday");
        break;
        case 4:printf("Thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        case 0:printf("Sunday");
        break;
    }




}

