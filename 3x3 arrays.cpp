#include <iostream> 

int main() {
    int matrix[3][3];

    std::cout << "Enter the elements of the 3x3 matrix:" << std::endl;

    // Loop for each element
    // Outer loop (i)
    for (int i = 0; i < 3; ++i) {
        // Inner loop (j)
        for (int j = 0; j < 3; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
    std::cout << "\nThe Matrix:" << std::endl;
    // Loop to display the matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    std::cout << "\nDiagonal 1:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << matrix[i][i] << "\t"; 
    }
    std::cout << std::endl;

    std::cout << "\nDiagonal 2:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << matrix[i][2 - i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "\nDiagonal 1R:" << std::endl;
    for (int i = 2; i >= 0; --i) {
        std::cout << matrix[i][i] << "\t"; 
    }
    std::cout << std::endl;

    std::cout << "\nDiagonal 2R" << std::endl;
    for (int i = 2; i >= 0; --i) {
        std::cout << matrix[i][2 - i] << "\t";
    }
    std::cout << std::endl;

    char choice;
    int index;

    std::cout << "\nDo you want to display a (R)ow, (C)olumn, or (S)pecific Coordinate? (R/C/S): ";
    std::cin >> choice;

    if (choice == 'R' || choice == 'r') {
        std::cout << "Enter the row number (0-2): ";
        std::cin >> index;
        if (index >= 0 && index < 3) {
            std::cout << "Elements of Row " << index << ":" << std::endl;
            for (int j = 0; j < 3; ++j) {
                std::cout << matrix[index][j] << "\t";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Invalid row number. Please enter a number between 0 and 2." << std::endl;
        }
    } else if (choice == 'C' || choice == 'c') {
        std::cout << "Enter the column number (0-2): ";
        std::cin >> index;
        if (index >= 0 && index < 3) {
            std::cout << "Elements of Column " << index << ":" << std::endl;
            for (int i = 0; i < 3; ++i) {
                std::cout << matrix[i][index] << "\t";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Invalid column number. Please enter a number between 0 and 2." << std::endl;
        }
    } else if (choice == 'S' || choice == 's') {
        int row_index, col_index;
        std::cout << "Enter the row number (0-2) for the coordinate: ";
        std::cin >> row_index;
        std::cout << "Enter the column number (0-2) for the coordinate: ";
        std::cin >> col_index;

        if (row_index >= 0 && row_index < 3 && col_index >= 0 && col_index < 3) {
            std::cout << "Element at coordinate [" << row_index << "][" << col_index << "]: "
                      << matrix[row_index][col_index] << std::endl;
        } else {
            std::cout << "Invalid coordinate. Row and column numbers must be between 0 and 2." << std::endl;
        }
    } else {
        std::cout << "Invalid choice. Please enter 'R' for Row, 'C' for Column, or 'S' for Specific Coordinate." << std::endl;
    }

    return 0; 
}
