/* Q.3 Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N.
Please note N can have maximum 5 digits. Print the numbers N and M. Compare N with M and print the result.
*/

#include<iostream>

using namespace std;

int main(){

    int integer_N;
    int remain;
    int integer_M = 0;

    cout << "Please enter 5 digit Number : " ;
    cin >> integer_N;

    int copyInteger_N = integer_N;

    if(integer_N > 0 && integer_N < 100000){
        while(integer_N > 0){    
            remain = integer_N % 10;
            integer_M = integer_M * 10 + remain;
            integer_N = integer_N / 10;
            
        }
        cout << "Reverse the digits of user defined 5 digit number are : " << integer_M << endl;

    }
    else{
        cout << "Error Message : Please Enter 5 Digit Number Only....!! " << endl;

    }
    cout << "5 digits Number are : " << copyInteger_N << "\nReverse the digits : " << integer_M << endl;

    if(copyInteger_N > integer_M){
        cout << "copyInteger_N is greater than integer_M." << endl;
    }
    else if(copyInteger_N == integer_M){
        cout << "copyInteger_N and integer_M are equal." << endl;
    }
    else{
        cout << "integer_M is greater than copyInteger_N." << endl;
    }

    return 0;
}