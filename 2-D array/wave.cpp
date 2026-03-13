#include <iostream>
#include <vector>

void printMatrix(const std::vector<std::vector<int>>& matrix, int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++)
                {
                std::cout << matrix[i][j] << " ";
            }
          }
        else
            {
            for (int i = rows - 1; i >= 0; i--) {
                std::cout << matrix[i][j] << " ";
            }

        }

    std::cout << std::endl;

    }
        std::cout << std::endl;
}

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> a(rows, std::vector<int>(cols));

    std::cout << "Enter matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> a[i][j];
        }
    }

    printMatrix(a, rows, cols);
    return 0;
}
