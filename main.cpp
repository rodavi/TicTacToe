/*
    This is a game of TicTacToe
    The games is played by 2 user, one at a time.
    The player will select from an available cell 
    The first to have 3 in a the same column, row or diagonal wins the game
*/

# include "Game.hpp"

int main()
{
    Game g(2, 3, 3);
    g.run();
}