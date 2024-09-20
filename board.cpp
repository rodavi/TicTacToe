#include "board.hpp"

void Board::createBoard()
{
    for(unsigned int i=0; i<m_row*m_column; ++i)
    {
        m_board.push_back(0);
        m_availableCells.push_back(true);
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

void Board::useCell(unsigned int c_row, unsigned int c_column, Player player)
{
    m_board[c_row*m_column+c_column] = player.ID;
    m_availableCells[c_row*m_column+c_column] = false;
}

void Board::freeCell(unsigned int c_row, unsigned int c_column)
{
    m_board[c_row*m_column+c_column] = 0;
    m_availableCells[c_row*m_column+c_column] = true;
}

std::vector<bool> Board::availableCells()
{
    return m_availableCells;
}

bool Board::isCellAvailable(int c_row, int c_column)
{
    return m_availableCells[c_row*m_column+c_column];
}

void Board::printBoard()
{
    for(int i=0;i<m_column;++i)
    {
        for(int j=0;j<m_row;++j)
        {
            std::cout<<"O"<<"\t";
        }
        std::cout<<"\n";
    }
    
}