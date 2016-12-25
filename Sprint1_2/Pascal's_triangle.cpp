#include <iostream>

using namespace std;

void pascals_triangle(int height);

int main()
{
    int height = 0;
    cout << "Input the height of a triangle: ";
    cin >> height;
    
    pascals_triangle(height);
    
    return 0;
}


void pascals_triangle(int height)
{
    int numbers[height];
    for (int i = 0; i < height; i++)
    {
        numbers[i] = 0;
    }
    
    numbers[0] = 1;
    for (int row = 1; row <= height; row++)
    {
        for(int j = 1; j < height-row+1; j++)
            cout << " ";
        for (int col = row; col >= 1; col--)
        {
            cout << numbers[col-1] << " ";
            numbers[col] = numbers[col-1] + numbers[col];
        }
        cout << endl;
    }
}
