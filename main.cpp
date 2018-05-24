#include <iostream>

using namespace std;
void menu();
void calcMenu();
void unitMenu();
void bankMenu();
void bankAddAccount();
void bankWithdraw();
void bankDeposit();
void bankQuerry();
void returnMenu2();
int returnVal = 0;


int main() {
    string name;
    cout << "Welcome, What Is Your Name?: ";
    cin >> name;
    cout << "Welcome " << name << "." << '\n';
    menu();
  return 0;
}

void menu(){
    int program;
    cout << "Program List"  << '\n';
    cout << "1. Calculator"  << '\n';
    cout << "2. Unit Converter"  << '\n';
    cout << "3. Virtual Bank"  << '\n';
    cout << "Select A Program: " << '\n';
    cin >> program;
    switch (program) {
    case 1 : calcMenu();
    break;
    case 2 : unitMenu();
    break;
    case 3 : bankMenu();
    break;
    default : cout << "You Did an Oppsie. The Program Will Now Terminate.";
  }
}

void returnMenu() {
    cout << "Returning to Main Menu." << '\n';
    menu();
}

void returnMenu2(){
    char val;
    cout << "Do you want to do another Operation? Press Y to return, Press N to return to Main Menu: ";
    cin >> val;
    if (val == 'y' || 'Y'){
        menu();
    } else{
        main();
    }
}

void bankAddAccount(){
    cout << "This Works LOL." << '\n';
    returnMenu2();
}

void bankWithdraw(){
    cout << "This Works LOL." << '\n';
}

void bankDeposit(){
    cout << "This Works LOL." << '\n';
}

void bankQuerry(){
    cout << "This Works LOL." << '\n';
}

void bankMenu(){
    int bankSelect;
    cout << "Welcome to Gee's Bank INC CO" << '\n';
    cout << "Please Select operation: " << '\n';
    cin >> bankSelect;
    switch (bankSelect){
        case 1 : bankAddAccount();
            break;
        case 2 : bankWithdraw();
        break;
        case 3 : bankDeposit();
        break;
        case 4 : bankQuerry();
        break;
        case 5 : returnMenu();
        break;
        default: cout << "Error Operation not found. Returning to Main Menu." << 'n';
        menu();
    }
}

void calcMenu(){
    cout << "Calc 1.0" << '\n';
}

void unitMenu(){
    cout << "Work In Progress";
}




