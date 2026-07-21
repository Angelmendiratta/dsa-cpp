#include<iostream>
using namespace std;

int main(){
    int num;
    int i = 2;

    cout<<"Enter your number: ";
    cin>>num;

    if(num <= 1){
        cout << num << " is not prime number";
    }
    else{
        for(i=2; i<=num-1; i++){
            if(num%i == 0){
                cout << num << " is not prime number";
                break;
            }
        }

        if(i == num){
            cout << num << " is prime number";
        }
    }

    return 0;
}