#include <iostream>

using namespace std;
void menu();

int main() {
  menu();
  return 0;
}

void menu (){
  string name;
  string program;
  cout << "Welcome, What Is Your Name?: ";
  cin >> name;
  cout << "Welcome " << name << "." << '\n';
  cout << "Program List"  << '\n';
  cout << "1. Calculator"  << '\n';
  cout << "2. Unit Converter"  << '\n';
  cout << "Select A Program: " << '\n';
  cin >> program;
  system("pause");
}
