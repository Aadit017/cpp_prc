/*
1. BOARD
    2d array 3x3
    seperate functions for intiliazing values of the baord vs displaying them
    display function will run after every action move
2. MOVEMENT
    toggle variable to make sure of the current move/player
    update the board with it
3. lOGIC
    deciding factor to figure out if the game is over or not
    also will decide who won / lost
4. PLAY AGAIN
    option will be provided at the end

VOID GAME - Responsible for the structure and the flow of the entire game
*/
#include <iostream>
#include <vector>
using namespace std;

void game();
void board_initialize(vector<vector<char>> &grid);
void board_display();
void movement(int &toggle);
int logic();

vector<vector<char>> grid(3, vector<char>(3));
void game()
{
    board_initialize(grid);
    int toggle = 1; // 1 means first player , 2 means the second player
    cout << "Match Starting\nPlayer One - X\nPlayer Two - O" << endl;
    int match_over = 0; // 0 means the match is still on rn
    while (match_over == 0)
    {
        movement(toggle);
        board_display();
        match_over = logic();
    }
    if (match_over > 0)
    {
        cout << "PLAYER " << (match_over == 1 ? 1 : 2) << " HAS WON" << endl;
    }
    else if (match_over < 0)
    {
        cout << "MATCH DRAWN";
    }
}
void board_initialize(vector<vector<char>> &grid)
{
    for (int i = 0; i < 3; i += 1)
    {
        for (int j = 0; j < 3; j += 1)
        {
            grid[i][j] = ' ';
        }
    }
}
void board_display()
{
    system("cls");
    for (int i = 0; i < 3; i += 1)
    {
        for (int j = 0; j < 3; j += 1)
        {
            cout << "| " << grid[i][j] << " | ";
        }
        cout << endl;
    }
}
void movement(int &toggle)
{
    int input_value = -1;
    while (input_value < 1 || input_value > 9)
    {
        cout << "Enter choice [1-9] Player " << (toggle == 1 ? 1 : 2) << endl;
        cin >> input_value;
    }
    input_value -= 1;
    if (grid[input_value / 3][input_value % 3] == ' ')
    {
        grid[input_value / 3][input_value % 3] = (toggle == 1 ? 'X' : 'O');
        toggle = (toggle == 1 ? 2 : 1);
    }
    else
    {
        cout << "That position is already occupied. Please choose an empty position." << endl;
        movement(toggle);
    }
}

int logic()
{
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != ' ')
        {
            return (grid[i][0] == 'X' ? 1 : 2);
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j] && grid[0][j] != ' ')
        {
            return (grid[0][j] == 'X' ? 1 : 2);
        }
    }

    if ((grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[0][0] != ' ') ||
        (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[0][2] != ' '))
    {
        return (grid[1][1] == 'X' ? 1 : 2);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == ' ')
            {
                return 0;
            }
        }
    }

    return -1;
}
int main()
{
    game();
}