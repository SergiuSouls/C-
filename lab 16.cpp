#include <iostream>  
#include <ctime>     
using namespace std;


struct Date {
    int year;   
    int month;  
    int day;  
};

bool isLeap(int year) {

    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int monthLength(int year, int month) {
    switch (month) {
        case 1:  
        case 3:  
        case 5:  
        case 7: 
        case 8:  
        case 10: 
        case 12: 
            return 31;  
        case 4:  
        case 6: 
        case 9:  
        case 11: 
            return 30;  
        case 2:  
            return isLeap(year) ? 29 : 28;
        default:
            return 0; 
    }
}

Date today(void) {
    Date currentDate;        
    time_t t = time(NULL);  
    tm localTime = *localtime(&t);
    
    currentDate.year = localTime.tm_year + 1900;
    currentDate.month = localTime.tm_mon + 1;


    currentDate.day = localTime.tm_mday;
    
    return currentDate; 
}


int daysFromStart(const Date &d) {
    int days = 0;
    for (int y = 1; y < d.year; y++) {
        days += isLeap(y) ? 366 : 365;
    }
    for (int m = 1; m < d.month; m++) {
        days += monthLength(d.year, m);
    }

    days += d.day;
    return days;
}


int daysBetweenDates(const Date &d1, const Date &d2) {

    int days1 = daysFromStart(d1);
    int days2 = daysFromStart(d2);
    return (days2 >= days1) ? (days2 - days1) : (days1 - days2);
}

int main(void) {

    Date myBirthday = {1945, 1, 15};
    

    Date currentDate = today();
    

    int daysPassed = daysBetweenDates(myBirthday, currentDate);

    cout << "My birthday: " 
         << myBirthday.year << "/" << myBirthday.month << "/" << myBirthday.day << endl;
    cout << "Current date: " 
         << currentDate.year << "/" << currentDate.month << "/" << currentDate.day << endl;
    cout << "Numbers of days from birthday to now: " 
         << daysPassed << endl;
    
    return 0;  
}