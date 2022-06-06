#ifndef pokerSuits_h
#define pokerSuits_h
#include <string>

using namespace std;

class PokerSuits
{
public:
	PokerSuits();
	string getPokerSuits(int var);
private:
	string pokerSuits[52]; //撲克牌有52張
};
#endif
