/*0
 * Design a class that holds the following personal data: 
 * name
 * address
 * age
 * phone number. 
 * Write appropriate accessor and mutator functions. 
 * Demonstrate the class by writing a program that creates 
 * three instances of it. One instance should hold your information, 
 * and the other two should hold your friends’ or family members’ information. 
 */

/* 
 * File:   Personal Information Class   .cpp
 * Author: Nicolas Zavala
 *
 * Created on March 30, 2018, 7:53 PM
 */

#include <iostream>
#include <string>
using namespace std;

class PersonalInfo {
private:
    string name;
    string address;
    int age;
    int phonenumber;

public:
    PersonalInfo(string, string, int, int);
    void setName(string newName);
    void setAddress(string newAddress);
    void setAge(int newAge);
    void setPhonenumber(int newPhonenumber);

    string getName();
    string getAddress();
    int getAge();
    int getPhonenumber();

};

PersonalInfo::PersonalInfo(string nameofperson, string resident, int years, int number) {
    name = nameofperson;
    address = resident;
    age = years;
    phonenumber = number;
}

void PersonalInfo::setName(string newName) {
    name = newName;
}

void PersonalInfo::setAddress(string newAddress) {
    address = newAddress;
}

void PersonalInfo::setAge(int newAge) {
    age = newAge;
}

void PersonalInfo::setPhonenumber(int newPhonenumber) {
    phonenumber = newPhonenumber;
}

string PersonalInfo::getName() {
    return name;
}

string PersonalInfo::getAddress() {
    return address;
}

int PersonalInfo::getAge() {
    return age;
}

int PersonalInfo::getPhonenumber() {
    return phonenumber;
}

int main() {
    string person_name;
    string person_address;
    int person_age;
    int person_phone;

    
    cout << "Enter name: ";
    cin >> person_name;
    cout << "Enter address: ";
    cin >> person_address;
    cout << "Enter age: ";
    cin >> person_age;
    cout << "Enter phone number: ";
    cin >> person_phone;
//Display the information
    PersonalInfo me( person_name, person_address, person_age, person_phone);
//    me.setName(person_name);
//    me.setAddress(person_address);
//    me.setAge(person_age);
//    me.setPhonenumber(person_phone);

    cout << "Enter name: ";
    cin >> person_name;
    cout << "Enter address: ";
    cin >> person_address;
    cout << "Enter age: ";
    cin >> person_age;
    cout << "Enter phone number: ";
    cin >> person_phone;

    PersonalInfo fam( person_name, person_address, person_age, person_phone);
//    fam.setName(person_name);
//    fam.setAddress(person_address);
//    fam.setAge(person_age);
//    fam.setPhonenumber(person_phone);

    cout << "Enter name: ";
    cin >> person_name;
    cout << "Enter address: ";
    cin >> person_address;
    cout << "Enter age: ";
    cin >> person_age;
    cout << "Enter phone number: ";
    cin >> person_phone;

    PersonalInfo frd( person_name, person_address, person_age, person_phone);
//    frd.setName(person_name);
//    frd.setAddress(person_address);
//    frd.setAge(person_age);
//    frd.setPhonenumber(person_phone);

//Output the data
    return 0;

}

