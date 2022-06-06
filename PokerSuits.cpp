#include"PokerSuits.h"
#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>

using namespace std;

PokerSuits::PokerSuits()
{
    for (int i = 0; i < 52; i++)            //|開始分類
    {                                       //|
        if (i < 13)                         //|
            pokerSuits[i] = "Clubs";        //|梅花
        else if (i >= 13 && i < 26)         //|
            pokerSuits[i] = "Diamonds";     //|方塊
        else if (i >= 26 && i < 39)         //|
            pokerSuits[i] = "Hearts";       //|紅心
        else if (i >= 39)                   //|
            pokerSuits[i] = "Spades";       //|黑桃
    }                                       //|分類結束
}
string PokerSuits::getPokerSuits(int var)
{
    return pokerSuits[var];
}
