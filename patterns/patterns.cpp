#include <iostream>
using namespace std;

void pattern1(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
void pattern2(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<"*";
            }
            cout<<"\n";
        }

    }
void pattern3(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            cout<<endl;
        }

    }
void pattern4(int n) {
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<i;
            }
            cout<<endl;
        }

    }
void pattern5(int n) {
        for(int i=n ;i>=1; i--){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
void pattern6(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
        cout<<j;
         }
    cout<<"\n";
   }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }

}
void pattern8(int n){
    for(int i=4;i>=0;i--){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"\n";
    }

}
//pattern9==pattern7+8
void pattern10(int n){
   for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    for(int i=n-1 ;i>=1; i--){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if ((i+j)%2==0)
            {
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
void pattern12(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1; j<=space;j++){
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        space-=2;
        cout<<endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" "<<num;
            num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
    cout<<endl;
    }
}
void pattern15(int n){
   for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch;
        }
    cout<<endl;
    }
}
int main() {
    int n = 5;
    
    pattern15(n);
    

    return 0;
}