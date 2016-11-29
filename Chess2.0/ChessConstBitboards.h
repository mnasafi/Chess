#ifndef ChessConstants_H
#define ChessConstants_H
    /*
    *All constants to be defined for the chessboard
    */
    #include <stdint.h>
    #include <iostream>
    const bool DEBUG=0;

    typedef uint64_t Bitboard;

    const std::string PIECE_NAMES[6] = {"Pawn","Rook","Knight","Bishop","Queen","King"};

    const Bitboard PAWNSTART        = 0b0000000011111111000000000000000000000000000000001111111100000000;
    const Bitboard ROOKSTART        = 0b1000000100000000000000000000000000000000000000000000000010000001;
    const Bitboard KNIGHTSTART      = 0b0100001000000000000000000000000000000000000000000000000001000010;
    const Bitboard BISHOPSTART      = 0b0010010000000000000000000000000000000000000000000000000000100100;
    const Bitboard QUEENSTART       = 0b0001000000000000000000000000000000000000000000000000000000010000;
    const Bitboard KINGSTART        = 0b0000100000000000000000000000000000000000000000000000000000001000;
    const Bitboard ALLWHITESTART    = 0b0000000000000000000000000000000000000000000000001111111111111111;
    const Bitboard ALLBLACKSTART    = 0b1111111111111111000000000000000000000000000000000000000000000000;

    //Masking and Clearing rows

    //Masking
    const Bitboard ROWMASK[] = {
    0b0000000000000000000000000000000000000000000000000000000011111111,
    0b0000000000000000000000000000000000000000000000001111111100000000,
    0b0000000000000000000000000000000000000000111111110000000000000000,
    0b0000000000000000000000000000000011111111000000000000000000000000,
    0b0000000000000000000000001111111100000000000000000000000000000000,
    0b0000000000000000111111110000000000000000000000000000000000000000,
    0b0000000011111111000000000000000000000000000000000000000000000000,
    0b1111111100000000000000000000000000000000000000000000000000000000
    };

    //Clear
    const Bitboard ROWCLEAR[] = {
    0b1111111111111111111111111111111111111111111111111111111100000000,
    0b1111111111111111111111111111111111111111111111110000000011111111,
    0b1111111111111111111111111111111111111111000000001111111111111111,
    0b1111111111111111111111111111111100000000111111111111111111111111,
    0b1111111111111111111111110000000011111111111111111111111111111111,
    0b1111111111111111000000001111111111111111111111111111111111111111,
    0b1111111100000000111111111111111111111111111111111111111111111111,
    0b0000000011111111111111111111111111111111111111111111111111111111
    };

    //Masking and Clearing collumns

    //Masking
    const Bitboard COLUMNMASK[] = {
    0b0000000100000001000000010000000100000001000000010000000100000001,
    0b0000001000000010000000100000001000000010000000100000001000000010,
    0b0000010000000100000001000000010000000100000001000000010000000100,
    0b0000100000001000000010000000100000001000000010000000100000001000,
    0b0001000000010000000100000001000000010000000100000001000000010000,
    0b0010000000100000001000000010000000100000001000000010000000100000,
    0b0100000001000000010000000100000001000000010000000100000001000000,
    0b1000000010000000100000001000000010000000100000001000000010000000,
    };

    //Clear
    const Bitboard COLUMNCLEAR[] = {
    0b1111111011111110111111101111111011111110111111101111111011111110,
    0b1111110111111101111111011111110111111101111111011111110111111101,
    0b1111101111111011111110111111101111111011111110111111101111111011,
    0b1111011111110111111101111111011111110111111101111111011111110111,
    0b1110111111101111111011111110111111101111111011111110111111101111,
    0b1101111111011111110111111101111111011111110111111101111111011111,
    0b1011111110111111101111111011111110111111101111111011111110111111,
    0b0111111101111111011111110111111101111111011111110111111101111111,
    };

    const Bitboard BLANK =  0b0000000000000000000000000000000000000000000000000000000000000000;
    const Bitboard FULL =   0b1111111111111111111111111111111111111111111111111111111111111111;

#endif // ChessConstants_H
