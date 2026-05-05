#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N;
    cout << "Enter the size (N) of the NxN matrix: ";
    cin >> N;

    while (N > 10)
    {
        cout << "Enter a value less than or equal to 10: ";
        cin >> N;
    }

    int **matrix = (int **)calloc(N, sizeof(int *));
    for (int i = 0; i < N; i++)
    {
        *(matrix + i) = (int *)calloc(N, sizeof(int));
    }

    int **transpose = (int **)calloc(N, sizeof(int *));
    for (int i = 0; i < N; i++)
    {
        *(transpose + i) = (int *)calloc(N, sizeof(int));
    }

    cout << "Enter the values of the NxN matrix:\n ";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> *(*(matrix + i) + j);
        }
    }

    cout << "Matrix is:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "\t";
        for (int j = 0; j < N; j++)
        {
            cout << *(*(matrix + i) + j) << "  ";
        }
        cout << endl;
    }

    cout << "Transpose of Matrix is:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "\t";
        for (int j = 0; j < N; j++)
        {
            *(*(transpose + j) + i) = *(*(matrix + i) + j);
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << "\t";
        for (int j = 0; j < N; j++)
        {
            cout << *(*(transpose + i) + j) << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++)
    {
        free(*(matrix + i));
        free(*(transpose + i));
    }
    free(matrix);
    free(transpose);

    return 0;
}
