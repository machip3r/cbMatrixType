// Preprocessor directives
#include <iostream>
#include <iomanip>

// Global Declarations
using namespace std;
int matrix[256][256];

// Prototypes
	// Matrix Setup
int aihaPrintMatrix(int mat[][256], int m);
int aihaReadMatrix(int mat[][256], int m);

	// Matrix Types
int bmReflectiveMatrix( int matrix[][256], int m );
int symmetricMatrix(int matrix[][256], int m);
int nonSymmetricMatrix(int matrix[][256], int m);
int transitiveMatrix(int matrix[][256], int m);

// Function code.
	// Matrix Setup
int aihaPrintMatrix(int mat[][256], int m) {

	int i = 0, j = 0;

	cout << "The matrix (It only accepts 1 or 0 as an input): " << endl << endl;

	// This are the nested loops that prints the matrix on screen with format
    	// (all elements are inside of [] so it looks more like a real matrix)
	for (i = 0; i < m; i++) {

		cout << setw(21) << "[";

		for (j = 0; j < m; j++) {
			if(j != (m-1) )
				cout << mat[i][j] << setw(12);
			else cout << mat[i][j];
		}
		cout << "]" << endl;
	}

	return 0;
}
    // Matrix Print
int aihaReadMatrix(int mat[][256], int m) {

	int i = 0, j = 0;

	// Inizialiting loop. Get the elements from the user. The matrix only accepts
    	// 1 or 0 as an element
	for(i = 0; i < m; i++) {
		for(j = 0; j < m; j++ ) {
			// The input repeats itself as the input is different from 0 or 1
			do {
				// The matrix prints itself everytime there's a new input, so the
                		// user can see how it looks
				cout << "\n\n\n\n\n\n";
				aihaPrintMatrix(mat, m);
				cout << endl << "Input the [" << i+1 << "][" << j+1 << "] element: ";
				cin >> mat[i][j];

				// If the element in (i, j) is neither 1 nor 0, set the element in by
                		// default (mat[i][j] = 0)
				if(mat[i][j] < 0 || mat[i][j] > 1) {
					mat[i][j] = 0;
					// J decreases by one, so when the user presses the enter key, it
                    			// doesn't skip to the next spot in the matrix
					// So he can write the same element
					j--;
				}
			} while(mat[i][j] < 0 || mat[i][j] > 1);
		}
	}

	cout << "\n\n\n\n\n\n";

	return 0;
}

    // Matrix Reflective Type
int bmReflectiveMatrix( int matrix[][256], int m ) {

    int counter = 0;

	for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i == j)
                if(matrix[i][j] == 1) {
                    counter++;
                }
        }
    }

    if(counter == m) cout << "\n\nThe matrix is REFLECTIVE." << endl;
    else cout << "\n\nThe matrix is NOT REFLECTIVE." << endl;

    return 0;
}

    // Matrix Symmetric Type
int symmetricMatrix(int matrix[][256], int m){


    return 0;
}

    // Matrix Non Symmetric Type
int nonSymmetricMatrix(int matrix[][256], int m){


    return 0;
}

    // Matrix Transitive Type
int transitiveMatrix(int matrix[][256], int m){


    return 0;
}

    // Main Function
int main( void ) {

    // Declarations
	int m = 0;

    // Welcome.
    cout << "Program to determine what type of array is entered. \n\tDiscrete Mathematics.\n\n";

    // Get matrix from user
	cout << "What's the matrix dimension? " << endl;
	cout << "m: ";
	cin >> m;
    aihaReadMatrix(matrix, m);
    // Print Matrix
    aihaPrintMatrix(matrix, m);

    // Matrix Types
    bmReflectiveMatrix(matrix, m);
    /*
    symmetricMatrix(matrix);
    nonSymmetricMatrix(matrix);
    transitiveMatrix(matrix);
    */

    return 0;
}
