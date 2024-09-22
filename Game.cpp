#include "Game.hpp"
#include <iostream>

Game::Game(int n, int row, int column):n_player{n}
{
    m_board.setBoard(row, column);
    std::string temp_name;

    for(int i=1;i<=n_player;i++)
    {
        std::cout<<"Player "<<i<<": ";
        std::cin>>temp_name;
        addPlayer(i, temp_name);
        std::cout<<"\n";
    }
    

}

void Game::addPlayer(int i, std::string& name)
{
    Player p;
    p.ID = i;
    p.m_name = name;

    m_players.push_back(p);
}

void Game::selectCell(Player p)
{
    int p_row, p_column;
    do
    {
        std::cout << p.m_name << ", Please select a valid row and a column: ";
        std::cin >> p_row >> p_column;
    } while(!m_board.isCellAvailable(p_row, p_column));
    m_lastPlay.l_row = p_row;
    m_lastPlay.l_column = p_column;
    m_lastPlay.player = p;
    m_board.useCell(p_row, p_column, p);
}

void Game::unselectCell()
{

}

bool Game::hasWin(Play l_play)
{
    //if(l_play.l_row<m_board.m_row)
    return false;
}

void Game::run()
{
    while(!gameover)
    {
        // Turn of a player
        if(m_turn)
        {
            selectCell(m_players[0]);
            m_turn=false;
        }
        else 
        {
            selectCell(m_players[1]);
            m_turn=true;
        }
        m_board.printBoard();
        // check if wins
        hasWin(m_lastPlay);
        // check if there are available cells

        // change player
    }
}