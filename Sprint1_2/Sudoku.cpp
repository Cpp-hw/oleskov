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
        for (int row = 0; row < size; row++)
        {
            for(int col = 0; col < size; col++)
            {
                Board[row][col] = 0;
            }
        }
        srand((int)time(NULL));
        for (int i = 10; i >+ 0; i--)
        {
            Board[rand() % 9][rand() % 9] = rand() % 9;
        }
        
        Print(Board);
        
        bool is_valid = false;
        if(ValidRow(Board) == true && ValidCol(Board) == true && ValidLeftUpRightDownDiagonal(Board) == true && ValidRightUpLeftDownDiagonal(Board) == true && ValidCell(Board) == true)
            is_valid = true;
        cout << "Is this sudoku board valid? - " << boolalpha << is_valid << endl;
        
        return 0;
    }
    
    bool ValidRow(int board[][size])
    {
        multiset <int> temp;
        for(int row = 0; row < size; row++)
        {
            for(int col = 0; col < size; col++)
                temp.insert(board[row][col]);
            
            int temp_value = 0;
            for(multiset<int>::reverse_iterator it = temp.rbegin(), itEnd = temp.rend(); it != itEnd; ++it)
            {
                if (*it != 0)
                {
                    if (*it != temp_value)
                        temp_value = *it;
                    else
                        return false;
                }
            }
            temp.clear();
        }
        
        return true;
    }
    
    bool ValidCol(int board[][size])
    {
        multiset <int> temp;
        for(int col = 0; col < size; col++)
        {
            for(int row = 0; row < size; row++)
                temp.insert(board[row][col]);
        
            int temp_value = 0;
            for(multiset<int>::reverse_iterator it = temp.rbegin(), itEnd = temp.rend(); it != itEnd; ++it)
            {
                if (*it != 0)
                {
                    if (*it != temp_value)
                        temp_value = *it;
                    else
                        return false;
                }
            }
        temp.clear();
        }
    
    return true;
    }
    
    bool ValidLeftUpRightDownDiagonal(int board[][size])
    {
        multiset <int> temp;
        for(int i = 0; i < size; i++)
            temp.insert(board[i][i]);
            
        int temp_value = 0;
        for(multiset<int>::reverse_iterator it = temp.rbegin(), itEnd = temp.rend(); it != itEnd; ++it)
        {
            if (*it != 0)
            {
                if (*it != temp_value)
                    temp_value = *it;
                else
                    return false;
            }
        }
        
        return true;
    }
    
    bool ValidRightUpLeftDownDiagonal(int board[][size])
    {
        multiset <int> temp;
        for(int i = size - 1; i >=0; i--)
            temp.insert(board[i][i]);
        
        int temp_value = 0;
        for(multiset<int>::reverse_iterator it = temp.rbegin(), itEnd = temp.rend(); it != itEnd; ++it)
        {
            if (*it != 0)
            {
                if (*it != temp_value)
                    temp_value = *it;
                else
                    return false;
            }
        }
        
        return true;
    }
    
    bool ValidCell(int board[][size])
    {
        int cell_row, cell_col;
        int iteration = 0;
        multiset <int> temp;
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
                
                for(int i = cell_row; i < cell_row + 3; i++)
                {
                    for(int j = cell_col; j < cell_col + 3; j++)
                    {
                        temp.insert(board[i][j]);
                        iteration++;
                        if(iteration == 9)
                        {
                            int temp_value = 0;
                            for(multiset<int>::reverse_iterator it = temp.rbegin(), itEnd = temp.rend(); it != itEnd; ++it)
                            {
                                if (*it != 0)
                                {
                                    if (*it != temp_value)
                                        temp_value = *it;
                                    else
                                        return false;
                                }
                            }
                            temp.clear();
                            iteration = 0;
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
                
                if (board[row][col] == 0)
                    cout << " ";
                else
                    cout << board[row][col];
                if (col == size - 1)
                    cout << " | ";
            }
            cout << endl;
            
            if((row + 1) % 3 == 0)
                cout << " ------+-----+------" << endl;
        }    
    }
