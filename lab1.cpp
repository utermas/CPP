#include <iostream>
using namespace std;


string input = "АбВГД146509-___-bnsuir0bЕжзиЯ";



string lower_alph = "абвгдежзийклмнопрстуфхцчшщъыьэюя";
string upper_alph = "АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
string output;

int mover = 10;




int main()
{
    system("chcp 1251");
    
    cout << input << endl;

    for (int counter = 0; counter < size(input); counter++) {
        char letter = input[counter];

        if (false) continue;
        else {

            char moved_letter;

            cout << letter << " " << lower_alph.find_first_of(letter) << " " << (lower_alph.find_first_of(letter) > size(lower_alph)) << endl;
            cout << letter << " " << upper_alph.find_first_of(letter) << " " << (upper_alph.find_first_of(letter) > size(upper_alph)) << endl << endl;

            if (lower_alph.find_first_of(letter) > size(lower_alph)) {
                if (upper_alph.find_first_of(letter) > size(upper_alph)) {
                    output += letter;
                    continue;
                }

                else {

                    int let_ind = upper_alph.find_first_of(letter);

                    if (let_ind + mover > size(upper_alph) - 1) moved_letter = upper_alph[let_ind + mover - size(upper_alph)];

                    else {

                        moved_letter = upper_alph[let_ind + mover];

                    }
                }
            }

            else {
                int let_ind = lower_alph.find_first_of(letter);

                if (let_ind + mover > size(lower_alph) - 1) moved_letter = lower_alph[let_ind + mover - size(lower_alph)];

                else moved_letter = lower_alph[let_ind + mover];

            }
            output += moved_letter;

        }
    }
    cout << endl << input << endl << output << endl;
}