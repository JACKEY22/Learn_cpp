#include <iostream>
using namespace std;

int Get_row_col()
{
    int num;
    cin >> num;
    return num;
}


int main()
{
    cout << "Enter Row and Col: ";
    int row = Get_row_col();
    int col = Get_row_col();

    char **ptr_matrix = new char *[row];
    for (int i = 0; i < row; i++)
        ptr_matrix[i] = new char[col];
    cout << "Matrix Size : " << row * col << endl;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; ++j)
        {
            if (i == 0 || i == row - 1)
            {
                ptr_matrix[i][j] = '~';
            }
            else if (j == 0 || j == col - 1)
            {
                ptr_matrix[i][j] = '~';
            }
            else if (j % 2 == 0 && j != 0 && j != col)
            {
                ptr_matrix[i][j] = '!';
            }
            else
            {
                ptr_matrix[i][j] = ' ';
            }
        }

    for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j)
        {
            cout << ptr_matrix[i][j] << ' ';
        }
        cout << endl;
    }
    delete[] ptr_matrix;
    return 0;
}