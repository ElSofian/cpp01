#include "replace.hpp"

void replaceAll(std::string& content, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: empty string" << std::endl;
		return 1;
	}
	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return 1;
	}
	std::string line;
	std::string content;
	while (std::getline(ifs, line))
	{
		content += line + "\n";
	}
	ifs.close();
	replaceAll(content, s1, s2);
    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs.is_open()) {
        std::cout << "Error: file not found" << std::endl;
        return 1;
    }
    ofs << content;
    ofs.close();
    return 0;
}