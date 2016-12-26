#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <set>
    
    using namespace std;
    
    const int size = 9;
    
    bool ValidRow(int board[][size]);
    bool ValidCol(int board[][size]);
    bool ValidLeftUpRightDownDiagonal(int board[][size]);
    bool ValidRightUpLeftDownDiagonal(int board[][size]);
    bool ValidCell(int board[][size]);
    void Print(int board[][size]);
    
    int main()
    {
        int Board[size][size];
        srand((int)time(NULL));
        for (int row = 0; row < size; row++)
        {
            for(int col = 0; col < size; col++)
            {
                Board[row][col] = rand() % 9 + 1;
            }
        }
        
        cout << "The Sudoku board:" << endl;
        Print(Board);
        
        bool is_valid = false;
        if(ValidRow(Board) == true && ValidCol(Board) == true && ValidLeftUpRightDownDiagonal(Board) == true && ValidRightUpLeftDownDiagonal(Board) == true && ValidCell(Board) == true)
            is_valid = true;
        cout << "Is this sudoku board valid? - " << boolalpha << is_valid << endl;
        
        return 0;
    }
    
    bool ValidRow(int board[][size])
    {
        set <int> temp;
        for(int row = 0; row < size; row++)
        {
            for(int col = 0; col < size; col++)
            {
                temp.insert(board[row][col]);
                if(col == 8 && temp.size() != 9)
                    return false;
            }
            temp.clear();
        }
        
        return true;
    }
    
    bool ValidCol(int board[][size])
    {
        set <int> temp;
        for(int col = 0; col < size; col++)
        {
            for(int row = 0; row < size; row++)
            {
                temp.insert(board[row][col]);
                if(row == 8 && temp.size() != 9)
                    return false;
            }
            temp.clear();
        }
        
        return true;
    }
    
    bool ValidLeftUpRightDownDiagonal(int board[][size])
    {
        set <int> temp;
        
        for(int i = 0; i < size; i++)
            temp.insert(board[i][i]);
        if(temp.size() != 9)
            return false;
        else
            return true;
    }
    
    bool ValidRightUpLeftDownDiagonal(int board[][size])
    {
        set <int> temp;
        
        for(int i = size - 1; i >=0; i--)
            temp.insert(board[i][i]);
        if(temp.size() != 9)
            return false;
        else
            return true;
    }
    
    bool ValidCell(int board[][size])
    {
        int cell_row, cell_col;
        int iteration = 0;
        set <int> temp;
        for(int row = 0; row < size; row++)
        {
            for(int col = 0; col < size; col++)
            {
                if(row < 3)
                    cell_row = 0;
                else if(row < 6)
                    cell_row = 3;
                else
                    cell_row = 6;
                
                if(col < 3)
                    cell_col = 0;
                else if(col < 6)
                    cell_col = 3;
                else
                    cell_col = 6;
                
                for(int i = cell_row; i < row; i++)
                {
                    for(int j = cell_col; j < col; j++)
                    {
                        temp.insert(board[row][col]);
                        iteration++;
                        if(iteration == 9)
                        {
                            if (temp.size() != 9)
                            {
                                iteration = 0;
                                return false;
                            }
                            else
                                temp.clear();
                        }
                    }
                }
            }
        }
        
        return true;    
    }
    
    void Print(int board[][size])
    {
        cout << " ------+-----+------" << endl;
        
        for (int row = 0; row < size; row++)
        {
            for(int col = 0; col < size; col++)
            {
                if (col == 0 || col % 3 == 0)
                    cout << " | ";
                
                cout << board[row][col];
                if (col == size - 1)
                    cout << " | ";
            }
            cout << endl;
            
            if((row + 1) % 3 == 0)
                cout << " ------+-----+------" << endl;
        }    
    }
