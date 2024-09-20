#include "board.hpp"
#include "Player.hpp"
#include "vector"
#include <iostream>
#include <string>


class Game
{
    bool m_turn;
    bool gameover{false};
    int n_player;
    std::vector<Player> m_players;
    Board m_board;

    void addPlayer(int i, std::string& name);

    public:

                Game(int n, int row, int column);
        void    selectCell(Player p);
        void    unselectCell();
        bool    hasWin(Player p);
        void    run();
        
};