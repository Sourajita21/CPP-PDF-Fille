// C++ program to print Lower triangular and Upper triangular matrix of an array
#include<iostream>

using namespace std;

// Function to form lower triangular matrix
void lower(int mat[3][3], int r, int c)
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i < j)
			{
				cout << "0" << " ";
			}
			else
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

// Function to form upper triangular matrix
void upper(int mat[3][3], int r, int c)
{
	int i, j;
	
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i > j)
			{
				cout << "0" << " ";
			}
			else
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
	int matrix[3][3] = {{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}};
	int row = 3, col = 3;
	
	cout << "Lower triangular matrix: \n";
	lower(matrix, row, col);
	
	cout << "Upper triangular matrix: \n";
	upper(matrix, row, col);
		
	return 0;
}
