/* Q.4 Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit. */

#include<iostream>

using namespace std;

int main(){

    int integer_N;
    int sum, lastDigit, firstDigit;

    cout << "Please enter 5 digit Number : " ;
    cin >> integer_N;
    firstDigit = integer_N;

    if(firstDigit > 0 && firstDigit < 100000){
        lastDigit = firstDigit % 10;

        while(firstDigit >= 10){
            firstDigit = firstDigit / 10;
        }
        cout << firstDigit << endl;
        sum = firstDigit + lastDigit;
        cout << "sum of first and fifth digit of user defined 5 digit number are : " << sum << endl;

    }
    else{
        cout << "Error Message : Please Enter 5 Digit Number Only....!! " << endl;

    }

    return 0;
}