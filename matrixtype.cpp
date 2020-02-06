// Preprocessor directives
#include <iostream>
#include <iomanip>

// Global Declarations
using namespace std;
int matrix[256][256];

// Prototypes
void aihaReadMatrix(int mat[][256], int m, int n) {
	int i = 0, j = 0;

	//Inizialiting loop. Get the elements from the user.
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++ ) {
			cout << "Input the [" << i+1 << "][" << j+1 << "] element: ";
			cin >> mat[i][j];
		}
	}
}
void aihaPrintMatrix(int mat[][256], int m, int n) {
	int i = 0, j = 0;

	cout << "The matrix: " << endl << endl;

	//This are the nested loops that prints the matrix on screen with format (all elements are inside of [] so it looks more like a real matrix).
	for (i = 0; i < m; i++) {
		cout << setw(21) << "[";

		for (j = 0; j < n; j++) {
			if(j != n-1)
				cout << mat[i][j] << setw(12);
			else cout << mat[i][j];
		}
		cout << "]" << endl;
	}
}
void reflectiveMatrix(float matrix[]);
void symmetricMatrix(float matrix[]);
void nonSymmetricMatrix(float matrix[]);
void transitiveMatrix(float matrix[]);

int main() {
    // Declarations
	int m = 0, n = 0;

    // Welcome
    cout << "\nProgram to determine what type of array is entered. \n\tDiscrete Mathematics.";

    // Get matrix from user
	cout << "What's the matrix dimension? " << endl;
	cout << "m: ";
	cin >> m;
	cout << "n: ";
	cin >> n;
    aihaReadMatrix(matrix, m, n);
    // Print Matrix
    aihaPrintMatrix(matrix, m, n);

    // Matrix Types
    reflectiveMatrix(matrix);
    symmetricMatrix(matrix);
    nonSymmetricMatrix(matrix);
    transitiveMatrix(matrix);

    return 0;
}