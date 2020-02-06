// Preprocessor directives
#include <iostream>

// Global Declarations
using namespace std;

// Prototypes
float getMatrix();
void reflectiveMatrix(float matrix[]);
void symmetricMatrix(float matrix[]);
void nonSymmetricMatrix(float matrix[]);
void transitiveMatrix(float matrix[]);

int main() {
    // Declarations
    float matrix[3][3];

    // Welcome
    cout << "\nPrograma para determinar qué tipo de matriz es la que se introduce. \n\tMatemáticas Discretas.";

    // Get matrix from user
    getMatrix();

    reflectiveMatrix(matrix);
    symmetricMatrix(matrix);
    nonSymmetricMatrix(matrix);
    transitiveMatrix(matrix);

    return 0;
}