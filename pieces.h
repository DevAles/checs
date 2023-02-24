#include <iostream>

enum PieceType {
    EMPTY = 0,
    PAWN = 1,
    ROOK = 2,
    KNIGHT = 3,
    BISHOP = 4,
    QUEEN = 5,
    KING = 6
};

enum PieceColor { NONE = 0, WHITE = 1, BLACK = 2 };

class Piece {
  private:
    PieceType type;
    PieceColor color;

  public:
    Piece(PieceType type, PieceColor color) {
        this->type = type;
        this->color = color;
    }

    PieceType get_type() { return this->type; }

    PieceColor get_color() { return this->color; }
};
