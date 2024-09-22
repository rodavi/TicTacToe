#include <vector>
#include "Player.hpp"
#include <iostream>
/*
    The board is represented by a 1D vector 
*/
class Board
{
    int m_row, m_column;
    std::vector<std::vector<int>> m_board;
    std::vector<std::vector<bool>> m_availableCells;

    void createBoard();

    public:
        Board(){}
        Board(int row, int column):m_row{row}, m_column{column}
        {
            createBoard();
        }

        void setBoard(int row, int column);
        void resetBoard();
        void useCell(int c_row, int c_column, Player player);
        //void freeCell(unsigned int c_row, unsigned int c_column);
        std::vector<std::vector<bool>>&  availableCells();
        bool isCellAvailable(int row, int column);
        void printBoard();
};