#include <iostream>
using namespace std;

// This solution calculates the Adjoint for a 3x3 matrix (N=3)
#define N 3 

// Function to print a matrix (for clear output)
void printMatrix(int A[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to find the Adjoint of A[N][N]
void getAdjoint(int A[N][N], int adj[N][N]) {
    // For a 3x3 matrix, the adjoint is the transpose of the cofactor matrix.

    // Cofactor for element A[i][j] is found by:
    // Cofactor = (-1)^(i+j) * Determinant of the sub-matrix 
    
    // We can manually calculate the 9 cofactors for a 3x3 matrix (the only way without complex recursion)
    
    // R1: Cofactor of A[0][0] = (A[1][1]*A[2][2]) - (A[1][2]*A[2][1])
    adj[0][0] = (A[1][1] * A[2][2]) - (A[1][2] * A[2][1]);
    // R1: Cofactor of A[0][1] = -(A[1][0]*A[2][2]) + (A[1][2]*A[2][0])
    adj[0][1] = -((A[1][0] * A[2][2]) - (A[1][2] * A[2][0]));
    // R1: Cofactor of A[0][2] = (A[1][0]*A[2][1]) - (A[1][1]*A[2][0])
    adj[0][2] = (A[1][0] * A[2][1]) - (A[1][1] * A[2][0]);

    // The adjoint is the TRANSPOSE of the Cofactor Matrix (A^T). 
    // We need to swap A[i][j] with A[j][i].
    // Since we are not using helper functions, we calculate the cofactor of A[i][j] and store it at adj[j][i].
    
    // We will recalculate and store them directly in the correct (transposed) position.

    // Adjoint (Transpose of Cofactor Matrix)
    // Co-factor of A[0][0] goes to adj[0][0]
    adj[0][0] = (A[1][1] * A[2][2]) - (A[1][2] * A[2][1]);
    // Co-factor of A[0][1] goes to adj[1][0]
    adj[1][0] = -((A[1][0] * A[2][2]) - (A[1][2] * A[2][0]));
    // Co-factor of A[0][2] goes to adj[2][0]
    adj[2][0] = (A[1][0] * A[2][1]) - (A[1][1] * A[2][0]);

    // Co-factor of A[1][0] goes to adj[0][1]
    adj[0][1] = -((A[0][1] * A[2][2]) - (A[0][2] * A[2][1]));
    // Co-factor of A[1][1] goes to adj[1][1]
    adj[1][1] = (A[0][0] * A[2][2]) - (A[0][2] * A[2][0]);
    // Co-factor of A[1][2] goes to adj[2][1]
    adj[2][1] = -((A[0][0] * A[2][1]) - (A[0][1] * A[2][0]));
    
    // Co-factor of A[2][0] goes to adj[0][2]
    adj[0][2] = (A[0][1] * A[1][2]) - (A[0][2] * A[1][1]);
    // Co-factor of A[2][1] goes to adj[1][2]
    adj[1][2] = -((A[0][0] * A[1][2]) - (A[0][2] * A[1][0]));
    // Co-factor of A[2][2] goes to adj[2][2]
    adj[2][2] = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
}

int main() {
        int A[N][N], adj[N][N];
}