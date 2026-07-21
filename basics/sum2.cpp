//---Sum of odd numbers from 1 to n

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int n = 10;
    for(int i=1; i<=10; i++){
        if(i%2==0){
            continue;
        }
    sum+=i;
    }
    cout<<sum;
    return 0;
}