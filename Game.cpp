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

}

void Game::unselectCell()
{

}

bool Game::hasWin(Player p)
{

}

void Game::run()
{
    while(!gameover)
    {
        // Turn of a player

        // check if wins

        // check if there are available cells

        // change player
    }
}