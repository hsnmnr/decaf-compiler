#include <iostream>
#include <fstream>
#include <string>

#include "dfa.h"

using namespace std;

// Main Function Code
int main(int argc, const char **argv)
{
    DFA lexer;
    string tokens;
    string ids;

    fstream fin;
    fin.open(argv[1], ios::in);
    //fin.open("file.txt", ios::in);

    if (fin.is_open())
    { //checking whether the file is open
        string word = "";
        char chr;
        while (!fin.eof())
        {
            fin.get(chr); // read a character
            lexer.performTransistion(chr);
        }
        fin.close(); //close the file object.
    }

    //cout << endl << endl << "*******************           MAIN -- MMMAAAIIINNN -- MAIN           *******************" << endl;
    //cout << lexer.getTokens() << endl << endl;
    //cout << lexer.getIds() << endl;

    ofstream out;
    out.open("words.txt");
    out << lexer.getTokens();
    out.close();

    out.open("table.txt");
    out << lexer.getIds();
    out.close();

    return 0;
}
