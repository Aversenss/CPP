#include "game.hpp"

class Player : public GenericPlayer
{
public:
    Player(const string& name = "") : GenericPlayer(name) { }

    virtual ~Player() { }

    virtual bool IsHitting() const
    {
        cout << m_Name << ", do you want a hit? (Y/N): ";
        char response;
        cin >> response;
        return (response == 'y' || response == 'Y');
    }

    void Win() const
    {
        cout << m_Name <<  " wins.\n";
    }

    void Lose() const
    {
        cout << m_Name <<  " loses.\n";
    }

    void Push() const
    {
        cout << m_Name <<  " pushes.\n";
    }
};
