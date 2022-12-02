#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    bool right = 1;

    double** matrix = new double* [N];
    for (int i = 0; i < N; ++i)
        matrix[i] = new double[N];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; ++i)//столбец
    {
        for (int j = 0; j < i; ++j) //cтрок
        { 
            for (int k = i + 1; k < N; ++k) //ниже диагонали
            {
                if (matrix[j][i]<matrix[k][i])
                {
                    right = 0;
                    cout << right << endl;
                    return 0;
                }
            }
        }
    }
    

    cout << right;
    return 0;
}

