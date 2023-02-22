#include <iostream>
#include <string>

using namespace std;

int main() {
   string name;
   float math, literature, avg;
   cout <<"Enter student's name: ";
   getline(cin, name);
   cout <<"Enter math score: ";
   cin >> math;
   cout << "Enter literature score: ";
   cin>> literature;
   
  // tinh diem trung binh
  avg = (math + literature)/2;
  
  cout <<"Student's name : "<< name << endl;
  cout << "Math score: " << math <<endl;
  cout << "Literature scote: " << literature << endl;
  cout << "Average score: "<< avg << endl;
  
  return 0;
}
