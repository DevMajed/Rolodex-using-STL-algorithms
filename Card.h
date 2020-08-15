

/*

This class represent only one card, it has data members of type std::stringfor
First name, Last name, Ocuumaption, adress, and phone number.
it hast getters and setters that only take or send outputs, it doesn't no the rolodex algorithem

*/



#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <sstream>
#include <string>


using namespace std;

class Card {
public:

    // Default constructor
    Card() {
        mFirst = '\0';
        mLast = '\0';
        mAddress = '\0';
        mOccupation = '\0';
        mPhone = '\0';
    }

    // Const that has all paramters
    Card(string First, string Last, string Occupation, string Address, string Phone);

    // Setter and Getter function for last name
    void setLast(const string Last);
    string getLast();

    // Setter and Getter function for first name
    void setFirst(const string First);
    string getFirst();

    // Setter and Getter function for Occupation
    void setOccupation(const string Occupation);
    string getOccupation();

    // Setter and Getter function for Address
    void setAddress(const string Address);
    string getAddress();

    // Setter and Getter function for Phone
    void setPhone(const string Phone);
    string getPhone();

    // function that knows how to display the card on the supplied ostream parameter.
    void show(ostream& os);

    // member variabls
private:

    string mFirst;
    string mLast;
    string mOccupation;
    string mAddress;
    string mPhone;
};

#endif
