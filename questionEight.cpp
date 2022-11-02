/*
Que.8 Write a program to accept a list of N integers. Accept integer K.
Find the Kth smallest number in the list and its position.
*/

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int acceptList(int n, vector<int> & v)
{
    int k = 0;
    cout << "Enter " << n << " integers: " << endl;
    for (int i = 0; i < n; i++){
        int num=0;
        cout << "Enter " << i + 1 << " element: ";
        cin >> num;
        v.push_back(num);
    }
    cout << "Enter k : ";
    cin >> k;

    return k;
}

int kthSmallestElement(int k, vector<int> & v ){
    sort(v.begin(),v.end());
    return v[k];
}

int main()
{
    int n = 0;
    vector<int> v;
    cout << "enter number of elements: ";
    cin >> n;
    int k = acceptList(n, v);
    cout << k <<"th samallest element is: "<<kthSmallestElement(k, v)<<endl;

    return 0;
}