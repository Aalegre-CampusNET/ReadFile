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
    int Width = 0;
    int Height = 0;
    int Size = 0;
    std::vector<std::string> Map_Load;
    for (size_t i = 0; i < lines.size(); i++)
    {
        if (i == 0)
        {
            std::string WidthTemp;
            std::string HeightTemp;
            int commaCount = 0;
            for (size_t j = 0; j < lines[i].size(); j++)
            {
                if (lines[i][j] == ',')
                {
                    commaCount++;
                }
                else
                {
                    if (commaCount == 0)
                    {
                        WidthTemp += lines[i][j];
                    }
                    else
                    {
                        HeightTemp += lines[i][j];
                    }
                }
            }
            Width = std::stoi(WidthTemp);
            Height = std::stoi(HeightTemp);
            Size = Width * Height;
        }
        else
        {
            Map_Load.push_back(lines[i]);
        }
    }
    std::cout << "Map: " << Size << std::endl;
    std::cout << "  Width: " << Width << std::endl;
    std::cout << "  Height: " << Height << std::endl;
    for (size_t i = 0; i < Map_Load.size(); i++)
    {
        std::cout << Map_Load[i] << std::endl;
    }
}