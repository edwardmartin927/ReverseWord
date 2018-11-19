//
// Created by Edward Martin on 2018/11/19.
//

#ifndef REVERSEWORD_REVERSEWORD_H
#define REVERSEWORD_REVERSEWORD_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

class ReverseWords {
public:
    string getSentence(const char* fileName);
    string reverseString();
private:
    string sentence;
};

string ReverseWords::reverseString() {
    istringstream input;
    input.str(sentence);
    string reverseWords;
    for(string reverseWord; getline(input, reverseWord, ' ');){
        int s1(0), s2(reverseWord.length()-1);
        while(s1 < s2){
            char temp = reverseWord[s1];
            reverseWord[s1++] = reverseWord[s2];
            reverseWord[s2--] = temp;
        }
        reverseWords += reverseWord;
        reverseWords.push_back(' ');
    }
    reverseWords.pop_back();
    return reverseWords;
}

string ReverseWords::getSentence(const char* fileName){
    ifstream inFile(fileName, ios::in);
    if(!inFile) {
        string errs = "no such a file";
        return errs;
    }
    getline(inFile, sentence);
    return sentence;
}


#endif //REVERSEWORD_REVERSEWORD_H
