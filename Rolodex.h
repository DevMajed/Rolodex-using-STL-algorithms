
/*

 This class will save and manage of the multipe cards,
 it has data member container STL list or vector or myltiset ..
 it has object t assositvd stl itttitor to find the current card ..
 it has member functions that will manage stl cards or return values..
this class will read info from each card but it does not has code that print it.
 cards are takein frim main() then enter to this class to be worked with then sent back.

 */


#ifndef ROLODEX_H
#define ROLODEX_H

#include "Card.h" 
#include <string>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

class Rolodex
{
public:


    // Takes a card object by ref, put it on an STL container member in alphabetical form,
    // then it make this card is the curremt card because it is the last to be added, by making the itattor points to it.
    void add(Card& card);

    // Delete the current card from the roldox stl container, return int, then make the next card is the current.
    // if we delete the last card it weaps around to the first one.
    Card remove();

    // return a copy of the current card
    Card getCurrentCard();

    // updates the current card position to the next Card in the Rolodex's STL container then return the card.
    // if it is the last it wraps around.
    Card flip();

    // search and find the card that we want and then it make it the current one and then return true.
    // card not found? stays the current position and return false.
    bool search(string where);


    // output stream is the parameter here, so this function to ittiration trhoguh all cards in the STL container
    // from first to last and for each card it open it and give it the output stream.
    // this function has no outputs, it just move by the member function show()/

    void show(ostream& os);
    std::list<Card>::iterator nextIterFunc(std::list<Card>::iterator);

private:
    list< Card > Rol;
    list< Card >::iterator it;
};

#endif

