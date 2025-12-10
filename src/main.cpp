#include <fstream>
#include <iostream>
int main() {
    std::ofstream file;

    file.open("output.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open file" << std::endl;
        return 1;
    }
    std::string line;

    while (true)
    {
        std::getline(std::cin >> std::ws, line);
        if (line.contains("exit"))
            break;
        file << line << '\n';
        break;
    }

    file.close();


    return 0;
}
