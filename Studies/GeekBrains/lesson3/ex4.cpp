#include <iostream>

using namespace std;

class Card {
    protected:
        enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
	    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
        bool side;
    public:
        bool flip() { side = !side; return side;}
        int getValue() { if(side) return 10; else return 0;  };
};

int main() {
    Card card;
    
    cout << "Value = " << card.getValue() << endl;
    
    card.flip();

    cout << "Value = " << card.getValue() << endl;
    
    return 0;
}
