#include <iostream>
#include <unordered_set>
using namespace std;

void play(unordered_set<string> s) {
    if (!s.empty()) {
        string word = *s.begin();
        cout << "spell the word: " << word << " " << endl;

        string in;
        cin >> in;

        if (in != word) {
            cout << "you lose" << endl;
            return;
        }

        s.erase(word);
        play(s);
    }
    else {
        cout << "you win" << endl;
    }
}


int main() {

    unordered_set<string> thr = {"kid", "max", "wig", "fog", "cat"};
    unordered_set<string> fou = {"kite", "joke", "xray", "pork", "wind"};
    unordered_set<string> fiv = {"happy", "trips", "quiet", "break", "clock"};
    unordered_set<string> six = {"monkey", "mutant", "indian", "wrecks", "lacked"};


    cout << "welcome to typing_game" << endl;
    cout << "choose a word length (3-6)" << endl << endl;

    int word_len;
    cin >> word_len;

    switch (word_len) {
        case 3 : 
            play(thr);
            break;
        case 4 : 
            play(fou);
            break;
        case 5 : 
            play(fiv);
            break;
        case 6 : 
            play(six);
            break;
        default :
            cout << "invalid word length" << endl;
            break;
    }

    


    return 0;
}