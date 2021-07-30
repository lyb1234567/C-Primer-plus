#include<iostream>
#include<string>
using namespace std;
double **create_matrix(int, int);
void disp_matrix(double**,int ,int);
int  increase();
int main()
{
	double **matrix1=create_matrix(2,3);
	disp_matrix(matrix1, 2, 3);
	double** matrix2 = create_matrix(2, 3);
	disp_matrix(matrix2, 2, 3);
	return 0;
}
double **create_matrix(int m, int n)
{
	double** matrix = new double *[m];
	for (int i = 0; i < m; i++)
	{
		matrix[i] = new double [n];
	}
	for (int i = 0; i < m; i++)
	{
		cout << "Row " << i + 1 << ": ";
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	return matrix;
}
void disp_matrix(double **matrix,int m,int n)
{
	int j = increase();
	cout << "Matrix " <<j<<endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
int increase()
{
	static int i = 0;
	i++;
	return i;
}
