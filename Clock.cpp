#include "Clock.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*
This is the constructor for the Clock class.
Parameter h - Integer representing the hours.
Parameter m - Integer representing the minutes.
Parameter s - Integer representing the seconds.
Parameter is24 - Boolean representing the format of the clock.
*/
Clock::Clock(int h, int m, int s, bool is24) : hours(h), minutes(m), seconds(s), is24Hour(is24) {}

/*
This method will add one hour to the current time.
No parameters are required.
No return value.
*/
void Clock::addHour() {
  hours = (hours + 1) % 24;
}

/*
This method will add one minute to the current time.
No parameters are required.
No return value.
*/
void Clock::addMinute() {
  minutes = (minutes + 1) % 60;
  if (minutes == 0) addHour();
}

/*
This method will add one second to the current time.
No parameters are required.
No return value.
*/
void Clock::addSecond() {
  seconds = (seconds + 1) % 60;
  if (seconds == 0) addMinute();
}

/*
This method will display the current time.
No parameters are required.
No return value.
*/
void Clock::displayTime() const {
  int displayHours = hours;
  if (!is24Hour) {
    displayHours = hours % 12;
    displayHours = (displayHours == 0) ? 12 : displayHours;
  }
  string period = hours < 12 ? "AM" : "PM";

  cout << "*         ";
  cout << setw(2) << setfill('0') << displayHours << ":"
       << setw(2) << setfill('0') << minutes << ":"
       << setw(2) << setfill('0') << seconds;
  if (!is24Hour) {
      cout << " " << period;
  }
  cout << (is24Hour ? "          *" : "       *") << endl;
}

/*
This method will set the time to the provided hours, minutes, and seconds.
Parameter h - Integer representing the hours.
Parameter m - Integer representing the minutes.
Parameter s - Integer representing the seconds.
No return value.
*/
void Clock::setTime(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
}
