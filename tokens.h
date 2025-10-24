// CMSC 430 Compiler Theory and Design
// Project 1 Skeleton
// UMGC CITE
// Fall 2025

// This file contains the enumerated type definition for tokens

enum Tokens {
    ADDOP = 256, MULOP, REMOP, EXPOP, NEGOP, ANDOP, RELOP, ARROW, BEGIN_, CASE, CHARACTER, END,
    ENDSWITCH, FUNCTION, INTEGER, IS, LIST, OF, OTHERS, RETURNS, SWITCH, WHEN,
    IDENTIFIER, INT_LITERAL, CHAR_LITERAL, REAL_LITERAL,

    // Add reserve words
    ELSE, ELSIF, ENDFOLD, ENDIF, FOLD, IF, LEFT, REAL, RIGHT, THEN
};


