/* Q.5 Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit. */

#include<iostream>

using namespace std;

int main(){

    int integer_N, remain_N, count_N;
    int number = 0;
    int remain_M, count_M;
    int number_M = 0;

    cout << "Please enter 5 digit Number : " ;
    cin >> integer_N;

    if(integer_N > 0 && integer_N < 100000){
        
        while(integer_N != 0){
            remain_N = integer_N % 10;
            count_N = remain_N + 1;
            if(count_N == 10){
                count_N = 0;
            }
            integer_N = integer_N / 10;
            number = (number * 10) + count_N;
        }
        while(number != 0){
            remain_M = number % 10;
            number = number / 10;
            number_M = (number_M * 10) + remain_M;

        }
        cout << "number after adding 1 to each digit : " << number_M << endl;

    }
    else{
        cout << "Error Message : Please Enter 5 Digit Number Only....!! " << endl;

    }

    return 0;
}