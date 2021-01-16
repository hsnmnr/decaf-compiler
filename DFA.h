#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class DFA
{
private:
    int trsnsistionTable[70][31] = {
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {1, 1, 1, 1, 32, 33, 40, 0, 0, 0, 48, 47, 42, 47, 48, 47, 52, 50, 0, 0, 0, 60, 61, 62, 63, 64, 65, 66, 0, 0, 0},           // 0
        {2, 2, 2, 2, 2, 2, 58, 2, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 1 IDENTIFIER
        {3, 3, 3, 3, 3, 3, 58, 3, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 2 IDENTIFIER
        {4, 4, 4, 4, 4, 4, 58, 4, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 3 IDENTIFIER
        {5, 5, 5, 5, 5, 5, 58, 5, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 4 IDENTIFIER
        {6, 6, 6, 6, 6, 6, 58, 6, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 5 IDENTIFIER
        {7, 7, 7, 7, 7, 7, 58, 7, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 6 IDENTIFIER
        {8, 8, 8, 8, 8, 8, 58, 8, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 7 IDENTIFIER
        {9, 9, 9, 9, 9, 9, 58, 9, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},        // 8 IDENTIFIER
        {10, 10, 10, 10, 10, 10, 58, 10, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 9 IDENTIFIER
        {11, 11, 11, 11, 11, 11, 58, 11, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 10 IDENTIFIER
        {12, 12, 12, 12, 12, 12, 58, 12, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 11 IDENTIFIER
        {13, 13, 13, 13, 13, 13, 58, 13, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 12 IDENTIFIER
        {14, 14, 14, 14, 14, 14, 58, 14, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 13 IDENTIFIER
        {15, 15, 15, 15, 15, 15, 58, 15, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 14 IDENTIFIER
        {16, 16, 16, 16, 16, 16, 58, 16, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 15 IDENTIFIER
        {17, 17, 17, 17, 17, 17, 58, 17, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 16 IDENTIFIER
        {18, 18, 18, 18, 18, 18, 58, 18, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 17 IDENTIFIER
        {19, 19, 19, 19, 19, 19, 58, 19, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 18 IDENTIFIER
        {20, 20, 20, 20, 20, 20, 58, 20, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 19 IDENTIFIER
        {21, 21, 21, 21, 21, 21, 58, 21, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 20 IDENTIFIER
        {22, 22, 22, 22, 22, 22, 58, 22, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 21 IDENTIFIER
        {23, 23, 23, 23, 23, 23, 58, 23, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 22 IDENTIFIER
        {24, 24, 24, 24, 24, 24, 58, 24, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 23 IDENTIFIER
        {25, 25, 25, 25, 25, 25, 58, 25, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 24 IDENTIFIER
        {26, 26, 26, 26, 26, 26, 58, 26, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 25 IDENTIFIER
        {27, 27, 27, 27, 27, 27, 58, 27, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 26 IDENTIFIER
        {28, 28, 28, 28, 28, 28, 58, 28, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 27 IDENTIFIER
        {29, 29, 29, 29, 29, 29, 58, 29, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 28 IDENTIFIER
        {30, 30, 30, 30, 30, 30, 58, 30, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 29 IDENTIFIER
        {31, 31, 31, 31, 31, 31, 58, 31, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 30 IDENTIFIER
        {57, 57, 57, 57, 57, 57, 58, 57, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 31 IDENTIFIER (no more accepting => if then size voilation)
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {59, 59, 59, 34, 33, 33, 58, 58, 58, 36, 56, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 32 INTEGER
        {59, 59, 59, 59, 33, 33, 58, 58, 58, 36, 56, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 33 INTEGER
        {59, 35, 35, 59, 35, 35, 58, 58, 58, 59, 56, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 34
        {59, 35, 35, 59, 35, 35, 58, 58, 58, 59, 56, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 35 INTEGER
        {59, 59, 37, 59, 0, 0, 58, 58, 58, 59, 56, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},   // 36 DOUBLE
        {59, 59, 59, 59, 39, 39, 58, 58, 58, 59, 56, 38, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 37
        {59, 59, 59, 59, 39, 39, 58, 58, 58, 59, 56, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 38
        {59, 59, 59, 59, 39, 39, 58, 58, 58, 59, 56, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 39 DOUBLE
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {40, 40, 40, 40, 40, 40, 41, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 0, 40, 40, 40, 40, 40, 40, 40, 40, 40, 0, 0, 0},  // 40
        {67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 41 STRING
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},                           // 42 OPERATOR
        {43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 56, 43, 43, 43, 43, 43, 43, 43, 43, 43, 0, 0, 0}, // 43 SINGLE LINE COMMENTS TILL \n
        {44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 45, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 0, 0, 0}, // 44
        {44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 46, 45, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 44, 0, 0, 0}, // 45
        {56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 46 DOUBLE LINE COMMENT
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {56, 56, 56, 56, 56, 56, 56, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 56, 56, 0, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},  // 47 OPERATOR
        {56, 56, 56, 56, 56, 56, 56, 69, 69, 69, 49, 69, 69, 69, 69, 69, 69, 69, 56, 56, 0, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},  // 48 OPERATOR
        {56, 56, 56, 56, 56, 56, 56, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 56, 56, 0, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},  // 49 OPERATOR
        {69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 51, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 0, 0, 0}, // 50
        {56, 56, 56, 56, 56, 56, 56, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 56, 56, 0, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},  // 51 OPERATOR
        {69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 53, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 0, 0, 0}, // 52
        {56, 56, 56, 56, 56, 56, 56, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 56, 56, 0, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0},  // 53 OPERATOR
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 54 DEAD STATES
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // 55 DEAD STATES
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},                             // 56 EXTRA STATES
        {57, 57, 57, 57, 57, 57, 58, 57, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 57
        {58, 58, 58, 58, 58, 58, 58, 58, 58, 58, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 58
        {59, 59, 59, 59, 59, 59, 59, 59, 59, 59, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 59
        {56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 56, 0, 0, 0}, // 60
        //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
        {56, 56, 56, 56, 56, 56, 56, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 56, 56, 56, 0, 56, 56, 56, 56, 56, 56, 0, 0, 0},            // 61
        {56, 56, 56, 56, 56, 56, 56, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 56, 56, 56, 0, 56, 56, 56, 56, 56, 56, 0, 0, 0},            // 62
        {56, 56, 56, 56, 56, 56, 56, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 56, 56, 56, 0, 56, 56, 56, 56, 56, 56, 0, 0, 0},            // 63
        {56, 56, 56, 56, 56, 56, 56, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 56, 56, 56, 0, 56, 56, 56, 56, 56, 56, 0, 0, 0},            // 64
        {56, 56, 56, 56, 56, 56, 56, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 56, 56, 56, 0, 56, 56, 56, 56, 56, 56, 0, 0, 0},            // 65
        {56, 56, 56, 56, 56, 56, 56, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 56, 56, 56, 0, 56, 56, 56, 56, 56, 56, 0, 0, 0},            // 66
        {67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 56, 56, 56, 67, 67, 67, 67, 67, 67, 67, 0, 0, 0}, // 67
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},                             // 68
        {56, 56, 56, 56, 56, 56, 56, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 69, 56, 56, 56, 69, 69, 69, 69, 69, 69, 69, 0, 0, 0}, // 69
    };
    string stateMapping[70] = {
        "", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER",
        "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER",
        "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER", "IDENTIFIER",
        "IDENTIFIER", "IDENTIFIER", "INTEGER", "INTEGER", "", "INTEGER", "DOUBLE", "", "", "DOUBLE",
        "", "STRING", "OPERATOR", "COMMENT", "", "", "COMMENT", "OPERATOR", "OPERATOR", "OPERATOR",
        "", "OPERATOR", "", "OPERATOR", "", "", "", "", "", "",
        "Punctuation", "L PRANTHESIS", "R PRANTHESIS", "L BRACES", "R BRACES", "L BRACKET", "R BRACKET", "", "", ""};

    string all[31] = {"ghijklmnopqrstuvwyzGHIJKLMNOPQRSTUVWYZ", "abcdfABCDF", "eE", "xX", "0", "123456789", "\"", "_", ":@#$^", ".", "=", "+-", "/", "*", "<>!", "%", "|", "&", "\n", " ", "\t", ";,", "(", ")", "{", "}", "[", "]"};
    string keywords[24] = {"void", "int", "double", "bool", "string", "class", "interface", "null", "this", "extends", "implements", "for", "while", "if", "else", "return", "break", "New", "NewArray", "Print", "ReadInteger", "ReadLine", "true", "false"};

    int currenrState;
    int previousState;
    string word = "";
    string errrors = "";
    bool isError;
    string tokens = "";
    string ids = "";
    int idcount;
    int lineNo;

    // letters		(no overlaping)
    string letters; // without hexa, xX
    string hexa;    // all hexa
    string eE;      // e and E
    string xX;      // x and X

    // Digit		(no overlaping)
    string zero;   // only zero
    string digits; // without 0

    // Characters (no overlaping)
    string quotation;       // " character
    string underscore;      // _ characyer
    string otherCharacters; // all remaining characters
    string dot;             // only .

    // Operators	(no overlaping)
    string equalOperator;
    string plusMinus; // + and -
    string divide;
    string multiply;
    string doubleOperators; // < > and !
    string singleOperators; // %
    string orOperator;      // |
    string andOperator;     // &

    // White spaces (no overlaping)
    string newline; // "\n"
    string space;   // " "
    string tab;     // "\t"

    // Punctuations	(no overlaping)
    string punctuations; // witout .

    string lParanthesis;
    string rParanthesis;
    string lBrace;
    string rBrace;
    string lBraket;
    string rBraket;

public:
    //constructore
    DFA()
    { //default constructor
        currenrState = 0;
        previousState = 0;
        word = "";
        errrors = "";
        isError = false;
        tokens = "";
        ids = "";
        idcount = 1;
        lineNo = -1;

        // defining values
        letters = "ghijklmnopqrstuvwyzGHIJKLMNOPQRSTUVWYZ";
        hexa = "abcdfABCDF";
        eE = "eE";
        xX = "xX";
        zero = "0";
        digits = "123456789";
        quotation = "\"";
        underscore = "_";
        otherCharacters = "@#$^";
        dot = ".";
        equalOperator = "=";
        plusMinus = "+-";
        divide = "/";
        multiply = "*";
        doubleOperators = "<>!";
        singleOperators = "%";
        orOperator = "|";
        andOperator = "&";
        newline = "\n";
        space = " ";
        tab = "\t";
        punctuations = ";,[](){}";
        lParanthesis = "(";
        rParanthesis = ")";
        lBrace = "{";
        rBrace = "}";
        lBraket = "]";
        rBraket = "]";
    }
    //destructor
    ~DFA() {}

    //setters
    void setCurrenrState(int x)
    {
        currenrState = x;
    }
    void getPreviousState(int x)
    {
        previousState = x;
    }
    void getWord(string x)
    {
        word = x;
    }
    void getErrrors(string x)
    {
        errrors = x;
    }
    void getTokens(string x)
    {
        tokens = x;
    }
    void getIds(string x)
    {
        ids = x;
    }
    void setLineNo(int x)
    {
        lineNo = x;
    }

    //getters
    int getCurrenrState()
    {
        return currenrState;
    }
    int getPreviousState()
    {
        return previousState;
    }
    string getWord()
    {
        return word;
    }
    string getErrrors()
    {
        return errrors;
    }
    string getTokens()
    {
        return tokens;
    }
    string getIds()
    {
        return ids;
    }
    int getLineNo()
    {
        return lineNo;
    }

    //function
    void performTransistion(char cr)
    {
        int charmap = mapChar(cr);
        if (charmap >= 0)
        {
            word.push_back(cr);
            int res = changeState(charmap);
            if (res == 1)
            {
                if (word != "" && word != " ")
                {
                    createOutputs(isError ? errrors : stateMapping[previousState], word);
                    isError = false;
                    word = "";
                }
            }
            else if (res == 2)
            {
                word.pop_back();

                createOutputs(isError ? errrors : stateMapping[previousState], word);
                isError = false;
                word = "";

                previousState = currenrState;
                currenrState = 0;
                performTransistion(cr);
            }
        }
    }

    void createOutputs(string type, string val)
    {
        if (mapKeyword(val))
        {
            tokens = tokens + "<KEYWORD, " + word + ">" + "\n";
        }
        else
        {
            if (type == "IDENTIFIER")
            {
                ids = ids + "ID" + to_string(idcount) + "\t" + "\t" + val + "\n";
                idcount = idcount + 1;
            }
            tokens = tokens + "<" + stateMapping[previousState] + ", " + word + ">" + "\n";
        }
    }

    int mapChar(char cr)
    {
        for (int i = 0; i < 31; i++)
        {
            //cout << all[i];
            if (match(getString(cr), all[i]))
            {
                return i;
            }
        }
        cout << "ERROR*********************";
        return -1;
    }

    bool mapKeyword(string token)
    {
        for (int i = 0; i < 24; i++)
        {
            if (token == keywords[i])
            {
                return true;
            }
        }
        return false;
    }

    int changeState(int val)
    {
        previousState = currenrState;
        currenrState = trsnsistionTable[previousState][val];
        if (currenrState == 57)
        {
            cout << "is error";
            errrors = "Line : " + to_string(lineNo) + " > ERROR: Identifier max length violated (max 31 characters are allowed)\n";
            isError = true;
        }
        if (currenrState == 58)
        {
            errrors = "Line : " + to_string(lineNo) + " > ERROR: Identifier not valid (starts with letter and can contain letter, digit and _)\n";
            isError = true;
        }
        if (currenrState == 59)
        {
            errrors = "Line : " + to_string(lineNo) + " > ERROR: Double/Integer not valid (please refer to decaf specifications)\n";
            isError = true;
        }
        if (currenrState == 68)
        {
            errrors = "Line : " + to_string(lineNo) + " > ERROR: Comment not valid\n";
            isError = true;
        }
        if (currenrState == 69)
        {
            errrors = "Line : " + to_string(lineNo) + " > ERROR: Operator is not valid\n";
            isError = true;
        }
        if (currenrState == 0 && previousState != 0)
        {
            return 1;
        }
        if (currenrState == 56)
        {
            return 2;
        }
        if (currenrState == 0 and previousState == 0)
        {
            word = "";
        }
        return 0;
    }

    string getString(char x)
    {
        string s(1, x);

        return s;
    }

    bool match(string val, string arr)
    {
        size_t found = arr.find(val);
        if (found != string::npos)
        {
            return true;
        }
        return false;
    }
};