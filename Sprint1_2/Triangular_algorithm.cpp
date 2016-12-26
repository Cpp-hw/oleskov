#include <iostream>
#include <time.h>

using namespace std;

void Triangular_algorithm(int height);

void Draw_triangle(int ** triangle, int height);

int main()
{
    int height;
    cout<<"Input the height of a triangle: ";
    cin >> height;
    
    Triangular_algorithm(height);
    
    return 0;
}

void Triangular_algorithm(int height)
{
    int ** triangle = new int* [height];
    
    srand((int)time(NULL));
    
    for (int i = 0; i < height; i++)
    {
        triangle[i] = new int [height];
        
        for (int j = 0; j <= i; j++)
        {
            triangle[i][j] = rand() % 9 + 1;
        }
    }
   
    Draw_triangle(triangle, height);
    
    int elements_sum = 0;
    for (int i = height-2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (triangle[i+1][j] < triangle[i+1][j+1])
            {
                triangle[i][j] += triangle[i+1][j];
            }
            else
            {
                triangle[i][j] += triangle[i+1][j+1];
            }
        }
    }
    elements_sum = triangle[0][0];
    cout << "The smallest sum of the numbers from up to down is " << elements_sum << endl;
    
    
    for (int i = 0; i < height; i++)
    {
        delete[] triangle[i];
    }
}

void Draw_triangle(int ** triangle, int height)
{
    for (int i = 0; i < height; i++)
    {
        for(int x = 1; x <= height - i; ++x)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}
