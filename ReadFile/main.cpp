#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::string filePath;
    std::cout << "Write file path:" << std::endl;
    std::cin >> filePath;
    std::ifstream file(filePath);
    std::string line;
    std::vector<std::string> lines;
    while (std::getline(file, line))
    {
        lines.push_back(line);
    }
    file.close();
    for (size_t i = 0; i < lines.size(); i++)
    {
        std::cout << lines[i] << std::endl;
    }
}