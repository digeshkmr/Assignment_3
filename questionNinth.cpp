/*
Q.9 Write a program to accept a list L1 of N integers. Accept integer M.
Multiply each integer in the list by M and generate a new list L2.
Print the lists L1 and L2.
*/

#include<iostream>

using namespace std;

int main(){

    int num,list[20];

    cout << "How many integer to accept : " << endl;
    cin >> num;

    cout << "Enter the element of the list : " << endl;
    for(int i = 0; i < num; i++){
        cin >> list[i];
    }

    return 0;
}