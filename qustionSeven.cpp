/* Q.7 Write a program to a accept a list of N integers.
Find the largest and the smallest number in the list and their respective positions in the list. */

#include<iostream>

using namespace std;

int main(){

    int num, list[20], largestNo, smallestNo;
    int indexLargest, indexSmallest;

    cout << "How many integer to accept : " << endl;
    cin >> num;

    cout << "Enter the element of the list : " << endl;
    for(int i = 0; i < num; i++){
        cin >> list[i];
    }
    // cout << "list are : ";
    // for(int i = 0; i < num; i++){
    //     cout << list[i] << " ";
    // }
    largestNo = list[0];
    for(int i = 0; i < num; i++){
        if(largestNo < list[i]){
            largestNo = list[i];
            indexLargest = i + 1;
        }
    }

    smallestNo = list[0];
    for(int i = 0; i < num; i++){
        if(smallestNo > list[i]){
            smallestNo = list[i];
            indexSmallest = i + 1;
        }
    }

    cout << "Largest integer of list : " << largestNo << endl;
    cout << "Position of Largest integer of list : " << indexLargest << endl;
    cout << "Smallest integer of list : " << smallestNo << endl;
    cout << "Position of Smallest integer of list : " << indexSmallest << endl;


    return 0;
}