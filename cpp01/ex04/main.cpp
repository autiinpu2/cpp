#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "Error: The search string (s1) cannot be empty." << std::endl;
		return 1;
	}
	std::string replaceFilename = filename + ".replace";
	std::ifstream readFile(filename.c_str());
	if (!readFile.is_open()) {
		std::cerr << "Error: Could not open input file " << filename << std::endl;
		return 1;
	}
	std::ofstream writeFile(replaceFilename.c_str());
	if (!writeFile.is_open()) {
		std::cerr << "Error: Could not create output file " << replaceFilename << std::endl;
		return 1;
	}
	std::string str;
	while (std::getline(readFile, str)) {
		size_t pos = 0; 
		while ((pos = str.find(s1, pos)) != std::string::npos) {
			str.erase(pos, s1.length());
			str.insert(pos, s2);
			pos += s2.length();
		}
		
		writeFile << str << std::endl;
	}
	readFile.close();
	writeFile.close();
	return 0;
}
