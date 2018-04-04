/*
 * Design a class called Date. The class should store a date in three integers:
 * month 
 * day 
 * year
 * There should be member functions to print the date in the following forms:
 * 12/25/2014 
 * December 25, 2014
 * 25 December 2014 
 * Demonstrate the class by writing a complete program implementing it. 
 */

/* 
 * File:   Date.cpp
 * Author: Nicolas Zavala
 *
 * Created on March 30, 2018, 6:51 PM
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//class definition
class Date{
	private:
		int month;
		int day;
		int year;
                

	public:
		Date();
		Date(int month,int day,int year);  
		void print_f1(); //format 1
		void print_f2(); //format 2
		void print_f3();  //format 3  
                    
};//end class Date

int main(){

	//testing class Date

	Date myDate; //no arguments
	//if you want pass arguments
	//you should do something
	//like this Date myDate(3,1,2014);  
		

		myDate.print_f1(); //print date
		cout<<endl;	//new line
                myDate.print_f2(); //print date
		cout<<endl;	//new line
                myDate.print_f3(); //print date
		cout<<endl;	//new line
return 0; //indicates success
}//end of main

//class implementation
Date::Date(){
	month=12;
	day=25;
	year=2014;
}//end Date constructor -no arguments passed-
Date::Date(int month,int day,int year){
	//code validation here
}//end Date constructor
void Date::print_f1(){
	cout<<month<<'/'<<day<<'/'<<year;}
void Date::print_f2(){
std::string setnames[12] = {"January", "February", "March", "April", "May", "June",
                  "July", "August", "September", "October", "November", 
                  "December"};
cout<<setnames[month-1] <<" " <<day <<", "<<year << endl;}
void Date::print_f3(){
std::string setnames[12] = {"January", "February", "March", "April", "May", "June",
                  "July", "August", "September", "October", "November", 
                  "December"};
cout<<day<< " "<< setnames[month-1] <<" " <<year << endl;
}//end method print_f1 