#include<iostream>
using namespace std;

int main(){
    int N ,i=0 , j=0;
    cout << "Enter an integer: ";
    cin >> N;
    
    while(N!=0){
        if(N%2 == 0){
                    i=i+1;
                        }else{
                    j=j+1;
                }
        cout << "Enter an integer: ";
        cin >> N;
        }
        
    cout << "#Even numbers = " << i << "\n";
    cout << "#Odd numbers = " << j << "\n";
    return 0;
}