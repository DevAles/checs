#include "pieces.h"

const unsigned char BORDER_ROWS = 8;
const unsigned char BORDER_COLUMNS = 8;

class Border {
  private:
    Piece *squares[BORDER_ROWS][BORDER_COLUMNS];

  public:
    Border() {
        for (int row = 0; row < BORDER_ROWS; row++) {
            for (int column = 0; column < BORDER_COLUMNS; column++) {
                this->squares[row][column] = new Piece(EMPTY, NONE);
            }
        }
    }
};
