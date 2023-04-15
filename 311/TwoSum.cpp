#include<iostream>
using namespace std;
int numbers[]={1,2,3,4,5};
int n=5;
int target=8;
bool isTarget=false;
int main(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(numbers[i]+numbers[j]==target){
                isTarget=true;
                break;
            }
        }

    }

    if(isTarget){
        printf("yes");
    }
    else{
        printf("no");
    }
}
