#include<iostream>
using namespace std;
int number=100;
bool isPrime=true;
int main(){
    for(int i=2;i<number;i++){
        if(number%(i)==0){
            isPrime=false;
            break;
        }
        

    }
    if(isPrime){
        printf("yes");
    }
    else{

        printf("no");
    }
}