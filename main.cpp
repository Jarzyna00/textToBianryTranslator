#include <iostream>

using namespace std;

int textToASCII(char letter) {
    return int(letter);
}

string ASCIItoBinary(int letter) {
    string convertedLetter = "";

    while(letter > 0) {
        convertedLetter += to_string(letter % 2);
        letter /= 2;
        }

    for(int i = 0; i < convertedLetter.size() / 2; ++i) {
        swap(convertedLetter[i], convertedLetter[convertedLetter.size() - i - 1]);
    }

    return  convertedLetter;
}

string translateText(string text) {
    string translatedText = "";

    for(int i = 0; i < text.size(); ++i) {
        translatedText += ASCIItoBinary(textToASCII(text[i]));
        translatedText += " ";
    }

    return  translatedText;
}

int main() {
    string text = "halo policja";

    cout << translateText(text);

    return 0;
}
