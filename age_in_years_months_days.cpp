#include<iostream>
using namespace std;
int main(){
    const int totalDaysInYear = 365;
    const int totalDaysInMonth = 30;
    int userAgeInDays, numberOfYears, numberOfMonths, remain_Days, remain_DaysFromYears;

    cout<<"Enter your age (in days): ";
    cin>>userAgeInDays;
    if(userAgeInDays>0){
        numberOfYears = userAgeInDays/totalDaysInYear;
        remain_DaysFromYears = userAgeInDays%totalDaysInYear;
        numberOfMonths = remain_DaysFromYears/totalDaysInMonth;
        remain_Days = remain_DaysFromYears%totalDaysInMonth;
        cout<<"You are "<<numberOfYears<<" years, "<<numberOfMonths<<" months, and "<<remain_Days<<" days old.";
    }else{
        cout<<"Invalid Input!!!";
    }

    return 0;
}