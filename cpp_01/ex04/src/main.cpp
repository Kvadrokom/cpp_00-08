#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

int	main(int arc, char **argv)
{
	std::ifstream	fread;
	std::string		s1;
	std::string		s2;
	std::ofstream	fout;
	std::string		line = "";
	std::string		string;
	std::size_t 	found;

	if (arc == 4)
	{
		fread.open(argv[1], std::ios::in);
		fout.open("FILENAME.replace");
		if (!fread || !fout)
		{
			std::cout << "Something gone wrong\n";
			return (1);
		}
		s1 = argv[2];
		s2 = argv[3];
		if (s1 == "" || s2 == "")
		{
			std::cout << "Empty strings\n";
			return (0);
		}
		while (getline(fread, string))
		{
			if (!fread.eof())
				line += string + "\n";
		}
		line += string;
		if (line == "")
		{
			std::cout << "Empty file\n";
			return (1);
		}
		found = line.find(s1);
		while (found !=std::string::npos)
		{
			line = line.erase (found, s1.length());
			line = line.insert(found, s2);
			found = line.find(s1, found + 1);
		}
		fout << line;
		fout.close();
		fread.close();
		return (0);
	}
	std::cout << "Wrong number argmunets\n";
	return (1);
}
