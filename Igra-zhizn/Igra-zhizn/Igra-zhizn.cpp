#include <iostream>
#include <iomanip>
#include <fstream>
#include <unistd.h>



int** createTwoDimArray(int rows, int cols) {
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

int** createCopy(int rows, int cols) {
    int** copy = new int* [rows];
    for (int i = 0; i < rows; i++) {
        copy[i] = new int[cols];
    }
    return copy;
}

void fillCopy(int** arr, int** copy, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            copy[i][j] = arr[i][j];
        }
    }
}

bool checkCopy(int** arr, int** copy, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (copy[i][j] != arr[i][j])
                return false;
        }
    }
    return true;
}

int liveCells(int** arr, int rows, int cols) {
    int countAlive = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 1)
                countAlive++;
        }
    }
    return countAlive;
}

void printTwoDimArray(int** arr, int rows, int cols) {
    static int generation = 0;
    int lives = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 1) {
                std::cout << "*" << " ";
                lives++;
            }
            else
                std::cout << "-" << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Generation: " << generation << " " << "Alive cells: " << lives << std::endl;
    generation++;
}



int checkNeighbors(int** arr, int firstCoord, int secondCoord, int rows, int cols) {
    int aliveNeighbors = 0;
    for (int i = firstCoord - 1; i <= firstCoord + 1; i++) {
        for (int j = secondCoord - 1; j <= secondCoord + 1; j++) {
            if ((i < 0) || (i > rows - 1) || (j < 0) || (j > cols - 1))
                continue;
            if ((i == firstCoord) && (j == secondCoord))
                continue;
            if (arr[i][j] == 1) {
                aliveNeighbors++;
            }
        }
    }
    if ((aliveNeighbors == 3) && (arr[firstCoord][secondCoord] == 0))
        return 1;
    if (((aliveNeighbors > 3) || (aliveNeighbors < 2)) && (arr[firstCoord][secondCoord] == 1))
        return 0;
    else
        return arr[firstCoord][secondCoord];
}

void deleteTwoDimArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}




int main() {
    int rows = 0;
    int cols = 0;


    std::ifstream intxt("in.txt");

    if (!intxt.is_open()) {
        std::cout << "Input file can not be opened.";
        return -1;
    }

    intxt >> rows;
    intxt >> cols;

    int** arr = createTwoDimArray(rows, cols);

    while (!intxt.eof()) {
        int row = 0, col = 0;
        intxt >> row;
        intxt >> col;
        arr[row][col] = 1;
    }
    intxt.close();

    do {
        printTwoDimArray(arr, rows, cols);
        int** copy = createCopy(rows, cols);
        fillCopy(arr, copy, rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = checkNeighbors(copy, i, j, rows, cols);
            }
        }
        sleep(1);
        if (liveCells(arr, rows, cols) == 0) {
            std::cout << "Game over, all cells are died" << std::endl;
            deleteTwoDimArray(copy, rows, cols);
            break;
        }
        if (checkCopy(arr, copy, rows, cols)) {
            std::cout << "Game over, The world has stagnated" << std::endl;
            deleteTwoDimArray(copy, rows, cols);
            break;
        }
        deleteTwoDimArray(copy, rows, cols);
    } while (true);

    deleteTwoDimArray(arr, rows, cols);
    return 0;
}