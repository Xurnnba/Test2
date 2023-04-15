#include <iostream>
#include <set>
#include <map>
using namespace std;
string alphabet;
string john;
int ij [50001];
int number=1;
int main(){
    cin>>alphabet;
    cin>>john;
    for(int i=0;i<john.size();i++){
        for(int j=0;j<alphabet.size();j++){
            if(john[i]==alphabet[j]){
                ij[i]=j;
            }
        }
    }
    
    for(int i=1;i<john.size();i++){
            if(ij[i-1]>=ij[i]){
                number++;
            }
    }
    printf("%d",number);

//m o o d
//1 2 3 4
//13 15 15 4


}  







