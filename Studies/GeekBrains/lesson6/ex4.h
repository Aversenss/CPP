#include "game.hpp"

class House : public GenericPlayer
{
public:
    House(const string& name = "House") : GenericPlayer(name) { }

    virtual ~House() { }

    virtual bool IsHitting() const
    {
        return (GetTotal() <= 16);
    }

    void FlipFirstCard()
    {
        if (!(m_Cards.empty()))
            m_Cards[0]->Flip();
        else
    		cout << "РќРµС‚ РєР°СЂС‚С‹ РґР»СЏ РїРµСЂРµРІРѕСЂРѕС‚Р°!\n";
    }
};
