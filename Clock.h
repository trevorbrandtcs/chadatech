#ifndef CLOCK_H
#define CLOCK_H

//This is the Clock class. It represents a clock that can display time in both 24-hour and 12-hour formats.

class Clock{

private:
  int hours;   // This represents the hours in the clock.
  int minutes; // This represents the minutes in the clock.
  int seconds; // This represents the seconds in the clock.
  bool is24Hour; // This represents the format of the clock. If true, the clock is in 24-hour format. If false, it's in 12-hour format.

public: 
  //This is the constructor for the Clock class.

  Clock (int h, int m, int s, bool is24Hour = true);

  //This method will add one hour to the current time.

  void addHour();

  //This method will add one minute to the current time.

  void addMinute();

  //This method will add one second to the current time.

  void addSecond();

  //This method will display the current time.

  void displayTime() const;

  //This method will set the time to the provided hours, minutes, and seconds.

  void setTime(int h, int m, int s);
};

#endif
