/* Q.1 Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits. */

#include<iostream>

using namespace std;

int main(){

    int integer_N;
    int sum = 0;
    int multi = 1;
    int remain;

    cout << "Please enter 5 digit Number : " ;
    cin >> integer_N;

    if(integer_N > 0 && integer_N < 100000){
        while(integer_N > 0){    
            remain = integer_N % 10;    
            sum = sum + remain; 
            multi = multi * remain;   
            integer_N = integer_N / 10;
            
        }
        cout << "Sum of all digits are : " << sum << endl;
        cout << "Multiplication of all digits are : " << multi << endl;

    }
    else{
        cout << "Error Message : Please Enter 5 Digit Number Only....!! " << endl;

    }

    return 0;
}