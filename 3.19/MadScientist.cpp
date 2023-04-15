#include <iostream>
using namespace std;
int n;
string expected;
string actual;
int test[50001];
int number = 0;
int main() {
    bool presame=true;
    scanf("%d", &n);
    cin>>expected;
    cin>>actual;
    //--------------
    for (int i = 0; i < n; i++) {
        if (expected[i] != actual[i]&&presame) {
            number++;
            presame=false;
        }
        if(expected[i]==actual[i]){
                presame=true;
            }
    }

    cout<<number<<endl;
}