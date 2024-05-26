#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream rfile("in.txt");

    if (!rfile.is_open()) {
        std::cout << "File can not be opened.";
        return -1;
    }
    std::string ofile;
    while (rfile >> ofile) {
        std::cout << ofile << std::endl;
    }
    rfile.close();
    return 0;
}