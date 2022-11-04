/*
Q.12 Write a program to accept number of circles N and radius and coordinates of center (x,y) for each circle.
Select appropriate data structure and explain why you chose it.
Arrange the circles in increasing order of their area and print all the data of each circle.
*/

#include<iostream>
#include<vector>

using namespace std;

void acceptData(vector<double> &v){
    int noOfCircle;
    double radius;

    cout << "Enter number of circle : " << endl;
    cin >> noOfCircle;

    for(int i = 0; i < noOfCircle; i++){
        cout << "Enter radius of " << i << "circle : " << endl;
        cin >> radius;
        v.push_back(radius);
    }
}

void calculateArea(const vector<double> &v){
     
}

int main(){

    vector<double> v;
    vector<double> areaOfCircle;

    return 0;
}