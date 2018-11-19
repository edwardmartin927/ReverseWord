#include <iostream>
#include <string>
#include "ReverseWord.h"

using namespace std;

int main() {
    auto *r = new ReverseWords();
    string sentence =  r->getSentence("..\\myfile.txt");
    cout << r->reverseString() << endl;
    //cout << sentence << endl;
    return 0;
}