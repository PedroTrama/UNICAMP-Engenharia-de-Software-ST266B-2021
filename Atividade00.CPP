#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int n,i=1,count=0;
    cin >> n;
    if(cin.fail() || n < 0){
        cout << "entrada invalida";
        exit(0);
    }
    for(i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }
    }
    if(count == 2){cout << n << " Eh primo";exit(0);}else cout << n << " Nao eh primo, ";
    count = 0;
    while(i!=0){
    n++;
    for(i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }
    }
    if(count == 2){
        cout << n << " Eh o proximo primo";i=0;
    }else{count=0;}
    }
}
