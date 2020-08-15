
/*

This class represent only one card, it has data members of type std::stringfor
First name, Last name, Ocuumaption, adress, and phone number.
it hast getters and setters that only take or send outputs, it doesn't no the rolodex algorithem

*/


#include "Card.h"
using namespace std;



// Const that has all paramters
Card::Card(string First, string Last, string Occupation, string Address, string Phone)

{
    mFirst = First;
    mLast = Last;
    mOccupation = Occupation;
    mAddress = Address;
    mPhone = Phone;
}


// Setter and Getter function for last name
void Card::setLast(const string Last)
{
    mLast = Last;
}
string Card::getLast()
{
    return mLast;
}



// Setter and Getter function for first name
void Card::setFirst(const string First)
{
    mFirst = First;
}
string Card::getFirst()
{
    return mFirst;
}


// Setter and Getter function for Occupation
void Card::setOccupation(const string Occupation)
{
    mOccupation = Occupation;
}
string Card::getOccupation()
{
    return mOccupation;
}


// Setter and Getter function for Address
void Card::setAddress(const string Address)
{
    mAddress = Address;

}



string Card::getAddress()
{
    return mAddress;

}

// Setter and Getter function for Phone
void Card::setPhone(const string Phone)
{
    mPhone = Phone;
}

string Card::getPhone()
{
    return mPhone;

}


// getting data out of a stringstream
// function that knows how to display the card on the supplied ostream parameter.

void Card::show(ostream& os)
{
    os << "\n Last: " << getLast()
        << "First: " << getFirst()
        << "\nOccupation: " << getOccupation()
        << "\nAddress: " << getAddress()
        << "\nPhone: " << getPhone()
        << endl;


}
