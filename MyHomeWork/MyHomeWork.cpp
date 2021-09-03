#include <iostream>
#include <string>
using namespace std;
enum Card_suits { // перечисление мастей карты
    SPADES, // ПИКИ 
    CLUBS,  // КРЕСТИ 
    HEARTS, // ЧЕРВИ 
    DIAMONDS // БУБЫ
};
enum Card_denomination // перечисление достоинств карты
{
    ACE = 1, // ТУЗ 
    TWO = 2, // ДВА
    THREE = 3, // ТРИ 
    FOUR = 4, // ЧЕТЫРЕ 
    FIVE = 5, // ПЯТЬ
    SIX = 6, // ШЕСТЬ
    SEVEN = 7, // СЕМЬ 
    EIGHT = 8, // ВОСЕМЬ
    NINE = 9,  // ДЕВЯТЬ
    TEN = 10, // ДЕСЯТЬ
    JACK = 10, // ВАЛЕТ
    QUEEN = 10, // КОРОЛЕВА
    KING = 10, // КОРОЛЬ
};

class Card
{
public:
    Card(Card_suits _suits, Card_denomination _denomination)
        :card_suits(_suits), card_denomination(_denomination)
    {

    }
    void getValue() {
        cout << card_denomination << '\n';
    }

    void flip() {
        if (position) {
            position = 0;
            cout << "карта рубашкой наверх" << endl;
        }
        else {
            position = 1;
            cout << "карта рубашкой вниз" << endl;
        }
    }

protected:
    Card_suits card_suits;
    Card_denomination card_denomination;
    bool position = 0; /* 0 карта рубашкой наверх
                          1 карта рубашкой вниз */

};
int main() {
    setlocale(LC_ALL, "RU");

    Card card(SPADES, FIVE);
    card.getValue();