/*
 * Design a PayRoll class that has data members for an employee’s 
 * hourly pay rate, number of hours worked, and total pay for the week. 
 * Write a program with an array of seven  PayRoll  objects. 
 * The program should ask the user for the number of hours each employee 
 * has worked and will then display the amount of gross pay each has earned.   
 */

/* 
 * File:   Payroll.cpp
 * Author: Nicolas Zavala
 *
 * Created on April 2, 2018, 12:04 PM
 */

#include <iostream>
#include <iomanip>

class Payroll
{
private:
    int hoursWorked;
    double payRate;
public:
    Payroll();
    Payroll(int, double);
    void setHours(int);
    void setPayRate(double);
    int getHours() const;
    double getPayRate() const;
    double getGross()const;
};
Payroll::Payroll()
{
    hoursWorked = 0;
    payRate = 0.0;
}
Payroll::Payroll(int h, double r)
{
    payRate = r;
    hoursWorked = h;
}
void Payroll::setHours(int h)
{
    hoursWorked = h;
}
void Payroll::setPayRate(double p)
{
    payRate = p;
}
int Payroll::getHours() const
{
    return hoursWorked;
}
double Payroll::getPayRate() const
{
    return payRate;
}
double Payroll::getGross() const
{
    double gross = static_cast<double>(hoursWorked) * payRate;
    return gross;
}

using namespace std;
int main()
{

    const int NUM_EMPLOYEES = 7;
    Payroll employee[NUM_EMPLOYEES];
    int pay;
    int hours;
    int i;
    double grossPay;

    for (i = 0; i < NUM_EMPLOYEES; i++)
    {

        cout << "Enter the # " << (i) << " employee's rate of pay per hour: ";
        cin >> pay;
        cout << "Enter the # " << (i) << " employee's hours worked for the week: ";
        cin >> hours;

        employee[i].setPayRate(pay);
        employee[i].setHours(hours);        
    }
    cout << "\n\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        grossPay = employee[i].getGross();
        cout << "The gross pay for employee # " << (i) << " is: " << grossPay << endl;      
    }
    return 0;
}


