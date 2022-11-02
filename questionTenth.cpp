/*
Q.10 Write a program to accept a list L1 of N integers. 
Accept integer D. Generate list L2 such that it contains only those integers
from list L1 which are divisible by D.
Calculate the size of list L2.
Print the list L1, N, D, list L2 and its size.
*/
#include<iostream>

using namespace std;

int main(){
    int num, list1[20], list2[20], integer_D;
    int j = 0;

    cout << "How many integrs to accept : " << endl;
    cin >> num;

    cout << "Enter the element of list : " << endl;
    for(int i = 0; i < num; i++){
        cin >> list1[i];
    }
    cout << "Plase enter value of integer D :" << endl;
    cin >> integer_D;

    for(int i = 0; i < num; i++){
        if(list1[i] % integer_D == 0){
            list2[j] = list1[i];
        }
        j++;
    }

    cout << "list L1 are : ";
    for(int i = 0; i < num; i++){
        cout << list1[i] << " ";
    }
    cout << endl;
    cout << "Integers of list L1 : " << num << endl;
    cout << endl;
    cout << "Divisor for list L1 are : " << integer_D << endl;
    cout << endl;
    cout << "list L2 are : ";
    for(int j = 0; j < num; j++){
        cout << list2[j] << " ";
    }
    cout << endl;
    cout << "Size of the list L2 are : " << j << endl;

    return 0;
}