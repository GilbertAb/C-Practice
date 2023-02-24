// Knight's tour
#include <iostream>
#include <array>

// Size of the board (8x8)
const unsigned int BOARD_SIZE = 8;
// Amount of possible moves that the knight can make
const unsigned int AMOUNT_KNIGHT_MOVES = 8;

void printBoard (const std::array<std::array<int, BOARD_SIZE>, BOARD_SIZE>& board);

int main () {
    // Chess Board
    std::array<std::array<int, BOARD_SIZE>, BOARD_SIZE> board = {};
    // Knight moves
    std::array<int, AMOUNT_KNIGHT_MOVES> horizontalMoves = {2, 1, -1, -2, -2, -1, 1, 2};
    std::array<int, AMOUNT_KNIGHT_MOVES> verticalMoves= {-1, -2, -2, -1, 1, 2, 2, 1};

    // Movements counter
    unsigned int movementsCounter = 1;
    // Wether the knight can move or not
    bool canMove = true;
    // Randomize initial position of the knight
    int currentRow = rand() % BOARD_SIZE;
    int currentColumn = rand() % BOARD_SIZE;
    // Initial position of the knight
    board[currentRow][currentColumn] = movementsCounter;

    while(canMove && movementsCounter <= BOARD_SIZE * BOARD_SIZE) {
        // Check if can move
        for(int moveNumber = 0; moveNumber < AMOUNT_KNIGHT_MOVES; moveNumber++) {
            // Row to move
            int newRow = currentRow + verticalMoves[moveNumber];
            // Column to move
            int newColumn = currentColumn + horizontalMoves[moveNumber];
            // If movement is inside the board
            if (newColumn < BOARD_SIZE && newColumn >= 0 
                && newRow < BOARD_SIZE && newRow >= 0) {
                // If board box hasn't been visited
                if (board[newRow][newColumn] == 0) {
                    canMove = true;
                    // Mark movement and increment the counter
                    board[newRow][newColumn] = ++movementsCounter;
                    // Update current row and current column
                    currentRow = newRow;
                    currentColumn = newColumn;
                } else {
                    // Can´t make move
                    canMove = false;
                }
            }
        }
    }
    std::cout << "Movements: " << movementsCounter << std::endl;
    printBoard(board);

    return 0;
}

void printBoard (const std::array<std::array<int, BOARD_SIZE>, BOARD_SIZE>& board){
    for (int i = 0; i < BOARD_SIZE ; i++) {
        for (int j = 0; j < BOARD_SIZE ; j++) {
            std::cout << board[i][j] << "|";
        }
        std::cout << std::endl;
    }
}