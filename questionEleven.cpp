/*
Q.11 Write a program to accept cardinality of set A as N, and cardinality of set B as M.
Then accept elements of set A and set B.
Generate set C which is union of set A and set B,
set D which is intersection set of set A and Set B.
Print set A, B, C, D, Cardinality of set C, Cardinality of set D.
*/

#include<iostream>
#include<set>

using namespace std;

void getSetData(set<int>& A) {
  int n = 0;
  cout << "enter cardinality set :";
  cin >> n;
  cout << "enter " << n << " elements" << endl;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    A.insert(num);
  }
}

void display(const set<int>& S) {
  cout << "[";
  for (auto iter : S) {
    cout << iter << ",";
  } 
  cout << "]" << endl;
}

void  unionOfSet(const set<int>& A, const set<int>& B, set<int>& C) {
  for (auto iter : A) {
    C.insert(iter);
  }
  for (auto iter : B) {
    C.insert(iter);
  }
}

void intersectionOfSet(const set<int>& A, const set<int>& B, set<int>& D) {
  for (auto iter : A) {
    if (B.find(iter) != B.end()) {
      D.insert(iter);
    }
  }
}

int main() {
  set<int> A;
  set<int> B;
  set<int> C;
  set<int> D;

  cout << "set A" << endl;
  getSetData(A);
  cout << "set B" << endl;
  getSetData(B);

  cout << "Set A: ";
  display(A);
  cout << "Set B: ";
  display(B);

  cout << "union of set A & B: ";
  unionOfSet(A, B, C);
  display(C);

  cout << "intersection of set A & B: ";
  intersectionOfSet(A, B, D);
  display(D);

  return 0;
}