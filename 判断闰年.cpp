#include<iostream>
using namespace std;
int main(){
//     int a;
//     scanf("%d",&a);
//    if(a%4==0){
//     if(a%100!=0){
//         printf("%d",1);
//     }
//     else if(a%400==0){
//             printf("%d",1);
//         }
//     else{
//         printf("%d",0);
//     }
//    }
//    else{
//     printf("%d",0);
//    }
   
   int a;
   scanf("%d",&a);
    if(a%400==0){
        printf("%d",1);
    }
     else if(a%100==0){
        printf("%d",0);
    }
    else if(a%4==0){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
}