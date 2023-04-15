#include<iostream>
using namespace std;
int number;
int output[4]={0,0,0,0};
int main(){
    scanf("%d",&number);
    bool even=number%2==0;
    bool size=number>4&&number<=12;
    if(even&&size){
        output[0]=1;
    }
    if(size||even||(even&&size)){
        output[1]=1;
    }
    if(even||size){
        output[2]=1;
    }
    if(!even&&!size){
        output[3]=1;
    }
    for(int i=0;i<4;i++){
        printf("%d ",output[i]);
    }
    


}