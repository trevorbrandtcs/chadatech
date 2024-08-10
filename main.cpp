#include <iostream>
#include <iomanip>
#include "Clock.h"

using namespace std;

//This function will display the menu options to the user.

void displayMenu() {
  cout << "*************************" << endl;
  cout << "* 1: Add One Hour       *" << endl;
  cout << "* 2: Add One Minute     *" << endl;
  cout << "* 3: Add One Second     *" << endl;
  cout << "* 4: Exit Program       *" << endl;
  cout << "*************************" << endl;
}

//This is the main function where the program starts execution.

int main() {
  int hour, minute, second;
  cout << "Enter the current time in 24-hour format (HH MM SS): ";
  cin >> hour >> minute >> second;

  //Creating a Clock object in 24-hour format.

  Clock clock1(hour, minute, second, true);  // 24-hour format

  //Creating a Clock object in 12-hour format.

  Clock clock2(hour, minute, second, false); // 12-hour format
  int choice;

  while (true) {

      cout << "*****************************" << endl;
      cout << "* Clock 1 (24-hour format): *" << endl;
      clock1.displayTime();
      cout << "*****************************" << endl;

      cout << "*****************************" << endl;
      cout << "* Clock 2 (12-hour format): *" << endl;
      clock2.displayTime();
      cout << "*****************************" << endl;

      displayMenu();
      cin >> choice;

      switch (choice) {
          case 1:
              clock1.addHour();
              clock2.addHour();
              break;
          case 2:
              clock1.addMinute();
              clock2.addMinute();
              break;
          case 3:
              clock1.addSecond();
              clock2.addSecond();
              break;
          case 4:
              return 0;
          default:
              cout << "Invalid choice. Please try again.\n";
      }
  }
  return 0;
}
