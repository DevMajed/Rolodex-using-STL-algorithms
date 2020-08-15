

#include "Rolodex.h"
#include "Card.h"
#include <cctype>
#include <algorithm>
using namespace std;

// sorts card set
bool lastSort(Card first, Card second) {
    string first2 = first.getLast(), second2 = second.getLast();
    int i = 0;
    while ((i < first2.length()) && (i < second2.length())) {
        if (tolower(first2[i]) < tolower(second2[i]))
            return true;
        else if (tolower(first2[i]) > tolower(second2[i]))
            return false;
        ++i;
    }
    if (first2.length() < second2.length())
        return true;
    else
        return false;
}





// Takes a card object by ref, put it on an STL container member in alphabetical form,
// then it make this card is the curremt card because it is the last to be added, by making the itattor points to it.

void Rolodex::add(Card& card)
{
    it = Rol.begin();
    Rol.insert(Rol.begin(), card);
    Rol.sort(lastSort);
    while (it != Rol.end()) {
        if (!card.getLast().compare(it->getLast()))
            return;
        else
            it++;
    }
}





// Delete the current card from the roldox stl container, return int, then make the next card is the current.
// if we delete the last card it weaps around to the first one.
Card Rolodex::remove()
{
    Card temp;

    if (it != Rol.end() && nextIterFunc(it) == Rol.end()) {
        Rol.erase(it);
        it = Rol.begin();
        Card temp = *it;
    }
    else {
        list<Card>::iterator next = it;
        next++;
        Rol.erase(it);
        Card temp = *next;
        it = next;
    }

    return temp;
}


// return a copy of the current card
Card Rolodex::getCurrentCard()

{
    return *it;
}



// updates the current card position to the next Card in the Rolodex's STL container then return the card.
// if it is the last it wraps around.
Card Rolodex::flip()

{

    if (it != Rol.end() && nextIterFunc(it) == Rol.end()) {
        it = Rol.begin();
    }
    else {
        it++;
    }
    return *it;
}





// search and find the card that we want and then it make it the current one and then return true.
  // card not found? stays the current position and return false.
bool Rolodex::search(string where)

{
    int i;
    list< Card >::iterator tempit = it;
    it = Rol.begin();
    while (it != Rol.end())
    {
        if (!it->getLast().compare(where))
            return true;
        else
            it++;
    }
    for (it = Rol.begin(); it != Rol.end(); it++)
        for (i = 0; tolower(it->getLast()[0]) > tolower(where[0]); i++)
            if (tolower(it->getLast()[i]) < tolower(where[i]))
                break;
            else if (it->getLast()[i] == where[i]);
            else if (it->getLast()[i] > where[i] && !it->getLast()[0])
                return true;

    cout << "Name not found: " << where << endl << endl;
    return false;

}






// output stream is the parameter here, so this function to ittiration trhoguh all cards in the STL container
// from first to last and for each card it open it and give it the output stream.
// this function has no outputs, it just move by the member function show()/

void Rolodex::show(ostream& os)
{
    list< Card >::iterator temp = it;

    for (it = Rol.begin(); it != Rol.end(); it++)
        it->show(os);

    it = temp;
}

// safely advance to end() of list, which is past last item
std::list<Card>::iterator Rolodex::nextIterFunc(std::list<Card>::iterator iter)
{
    return ++iter;
}
