#include "board.hpp"
#include <algorithm>

void Board::createBoard()
{

    for(int i=0;i<m_row;++i)
    {
        std::vector<int> t_row;
        std::vector<bool> t_row_b;
        for(int ii=0;ii<m_column;++ii)
        {
            t_row.push_back(0);
            t_row_b.push_back(true);
        }
        m_board.push_back(t_row);
        m_availableCells.push_back(t_row_b);
    }
}

void Board::setBoard(int row, int column)
{
    m_row = row;
    m_column = column;
    createBoard();
}

void Board::resetBoard()
{
    createBoard();
}

void Board::useCell(int c_row, int c_column, Player player)
{
    m_board[c_row][c_column] = player.ID;
    m_availableCells[c_row][c_column] = false;
}
/*
void Board::freeCell(unsigned int c_row, unsigned int c_column)
{
    m_board[c_row*m_column+c_column] = 0;
    m_availableCells[c_row*m_column+c_column] = true;
}*/

std::vector<std::vector<bool>>& Board::availableCells()
{
    return m_availableCells;
}

bool Board::isCellAvailable(int c_row, int c_column)
{
    return m_availableCells[c_row][c_column];
}

void Board::printBoard()
{
    for(int i=0;i<m_column;++i)
    {
        for(int j=0;j<m_row;++j)
        {
            std::cout<<m_board[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    
}