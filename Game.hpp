#include "board.hpp"
#include "vector"
#include <iostream>
#include <string>

struct Play
{
    int l_row;
    int l_column;
    Player player;
};

class Game
{
    Play m_lastPlay;

    bool m_turn = true;
    bool gameover{false};
    int n_player;
    std::vector<Player> m_players;
    Board m_board;

    void addPlayer(int i, std::string& name);

    public:

                Game(int n, int row, int column);
        void    selectCell(Player p);
        void    unselectCell();
        bool    hasWin(Play l_play);
        void    run();
        
};