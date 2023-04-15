#include <iostream>
#include <vector>
using namespace std;
int n;
int result=1;
int main(){
    scanf("%d",&n);
    int a [50001];
    int b [50001];
    int counting [50001];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=n-1;i>=0;i--){
        int number=0;
        for(int j=n-1;j>=0;j--){
            if(a[i]<=b[j]){
                number++;
                cout<<"number is "<<number<<endl;
            }
            else{
                continue;
            }
        }
        counting[i]=number;

        cout<<"counting[i] is "<<counting[i]<<endl;
    }
    for(int i=0;i<n;i++){
        result*=counting[n-1-i]-i;
        cout<<"result is "<<result<<endl;
    }
    printf("%d",result);
}


    


// 1 2 3 4
// 2 3 4 4

//4: 4 4
//3: 3 4 4
//2: 2 3 4 4
//1: 2 3 4 4