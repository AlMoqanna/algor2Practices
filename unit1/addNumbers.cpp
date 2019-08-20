#include<iostream>

using namespace std;

int main(){
  double n1;
  double n2;
  cout << "Please enter a number: " << endl;
  cin >> n1;
  cout << "Please enter another number: " << endl;
  cin >> n2;
  double result = n1 + n2;
  cout << "The sum of " << n1 << " and " << n2 << " is " << result << endl;

  return 0;
}
