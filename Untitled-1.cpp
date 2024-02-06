#include <iostream>

using namespace std;

int main()
{
    // Declare symbolic constants
   const unsigned short DIAMONDS = 1,
                        CLUBS = 2,
                        HEARTS = 3,
                        SPADES = 4;
    
    // Declare variables
    unsigned short cardFace, cardSuit;
    string suitName, faceName;
    
    // Seeding the random generator
    srand(time(NULL));
    
    // Input / Randomly generate the face and suit of a card 
    cardFace = rand() % 13 + 1;
    cardSuit = rand() % 4 + 1;
    
    // Calculate face of the card 
    switch (cardFace) {
        case 1: faceName = "Ace";
            break;
        case 2: faceName = "Two";
            break;
        case 3: faceName = "Three";
            break;
        case 4: faceName = "Four";
            break;
        case 5: faceName = "Five";
            break;
        case 6: faceName = "Six";
            break;
        case 7: faceName = "Seven";
            break;
        case 8: faceName = "Eight";
            break;
        case 9: faceName = "Nine";
            break;
        case 10: faceName = "Ten";
            break;
        case 11: faceName = "Jack";
            break;
        case 12: faceName = "Queen";
            break;
        case 13: faceName = "King";
            break;
    }
    
    
    // Calculate the suit of the card 
    switch (cardSuit) {
        case DIAMONDS: suitName = "Diamonds";
            break;
        case CLUBS: suitName = "Clubs";
            break;
        case HEARTS: suitName = "Hearts";
            break;
        case SPADES: suitName = "Spades";
            break;
        default: suitName = "Invalid";
    }
    
    // Output the face and suit of a card
    cout<< faceName << " of " << suitName;

    return 0;
}


