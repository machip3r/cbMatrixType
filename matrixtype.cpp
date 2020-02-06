// Preprocessor directives
#include <iostream>
#include <iomanip>

// Global Declarations
using namespace std;
int matrix[256][256];

// Prototypes
int aihaReadMatrix(int mat[][256], int m) {
	int i = 0, j = 0;

	//Inizialiting loop. Get the elements from the user.
	for(i = 0; i < m; i++) {
		for(j = 0; j < m; j++ ) {
			cout << "Input the [" << i+1 << "][" << j+1 << "] element: ";
			cin >> mat[i][j];
		}
	}

    return 0;
}

int aihaPrintMatrix(int mat[][256], int m) {
	int i = 0, j = 0;

	cout << "The matrix: " << endl << endl;

	//This are the nested loops that prints the matrix on screen with format (all elements are inside of [] so it looks more like a real matrix).
	for (i = 0; i < m; i++) {
		cout << "\t[";

		for (j = 0; j < m; j++) {
			if(j != (m - 1))
				cout << mat[i][j] << setw(12);
			else cout << mat[i][j];
		}

		cout << "]\n" << endl;
	}

    return 0;
}

int bmReflectiveMatrix(int matrix[][256], int m){
    int counter = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i == j)
                if(matrix[i][j] == 1) {
                    counter++;
                }
        }
    }

    if(counter == m) cout << "\n\nThe matrix is REFLECTIVE" << endl;
    else cout << "\n\nThe matrix is NOT REFLECTIVE" << endl;

    return 0;
}

int symmetricMatrix(int matrix[][256], int m){


    return 0;
}

int nonSymmetricMatrix(int matrix[][256], int m){


    return 0;
}

int transitiveMatrix(int matrix[][256], int m){


    return 0;
}

int main() {
    // Declarations
	int m = 0;

    // Welcome
    cout << "\nProgram to determine what type of array is entered. \n\n\tDiscrete Mathematics.\n\n";

    // Get matrix from user
	cout << "What's the matrix dimension? " << endl;
	cout << "m: ";
	cin >> m;
    aihaReadMatrix(matrix, m);
    // Print Matrix
    aihaPrintMatrix(matrix, m);

    // Matrix Types
    bmReflectiveMatrix(matrix, m);
    /*symmetricMatrix(matrix);
    nonSymmetricMatrix(matrix);
    transitiveMatrix(matrix);*/

    return 0;
}