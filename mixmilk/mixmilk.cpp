#include<iostream>
using namespace std;
int c[3];
int m[3];
int pour=0;
int main(){
    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
    for(int i=0;i<3;i++){
       cin>>c[i]>>m[i];
    }

    while(pour<100){
        if(pour>=100){
                break;
            }
        for(int i=0;i<2;i++){
            if(pour>=100){
                break;
            }
        if(c[i+1]>=m[i]+m[i+1]){
            m[i+1]=m[i]+m[i+1];
            m[i]=0;
            pour++;
        }
        else{
            m[i]=m[i]-c[i+1]+m[i+1];
            m[i+1]=c[i+1];
            pour++;
        }
     }
     if(pour>=100){
                break;
            }
     if(c[0]>=m[2]+m[0]){
            m[0]=m[2]+m[0];
            m[2]=0;
            pour++;
        }
        else{
            m[2]=m[2]-c[0]+m[0];
            m[0]=c[0];
            pour++;
        }
    }
    

    for(int i=0;i<3;i++){
        cout<<m[i]<<endl;
    }
    return 0;
}


