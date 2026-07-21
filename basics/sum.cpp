//---Sum of n numbers

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n = 5;
    
    for(int i=1; i<=n; i++){
        sum+=i;
        
    }
    cout<<sum;

    return 0;
}