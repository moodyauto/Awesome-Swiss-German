#include "calendar.h"

// PRE: a year greater or equal than 1900
// POST: returns whether that year was a leap year
bool is_leap_year(unsigned int year) {
  if(year >= 1900){
    if(((year % 4 == 0) && !(year % 100 == 0)) || year % 400 == 0){
      return true;
    }
    else return false;
  }
}

// PRE: a year greater or equal than 1900
// POST: returns the number of days in that year
unsigned int count_days_in_year(unsigned int year) {
  if(year >= 1900){
    if(is_leap_year(year) == true) return 366;
    else return 365;
  }
}

// PRE: a month between 1 and 12 and a year greater or equal than 1900
// POST: returns the number of days in the month of that year
unsigned int count_days_in_month (unsigned int month, unsigned int year) {
  if((year >= 1900) && (1 <= month) && (month <= 12)){
    if(month == 2){
      if(is_leap_year(year) == true) return 29;
      else return 28;
    }
    if(month <= 7 && month != 2){
      if(month % 2 == 0) return 30;
      else return 31;
    }
    else{
      if(month % 2 == 0) return 31;
      else return 30;
    }
  }
}

// POST: returns whether the given values represent a valid date
bool is_valid_date(unsigned int day, unsigned int month, unsigned int year) {
  if(year >= 1900){
    if(is_leap_year(year)){
// PRE: the given values represent a valid date
// POST: returns the number of days between January 1, 1900 and this date
unsigned int count_days(unsigned int day, unsigned int month, unsigned int year) {
  //To be implemented
  return 0;
}

// PRE: the given values represent a (potentially invalid) date
// POST: prints the weekday if the date is valid or "invalid date" otherwise.
//      Everything must be printed in lowercase.
void print_weekday(unsigned int day, unsigned int month, unsigned int year){
  //To be implemented
}// ctf{77323259}
