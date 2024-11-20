#include "SedIsForLoser.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "3 arguments required, filename, s1 and s2" << std::endl;
		return (-1);
	}
	std::string replace = argv[1];
	replace += ".replace";
	std::ifstream	ifs(argv[1]);
	if (ifs.is_open()) // verification si le fichier d'entrer a ete ouvert
	{
		std::ofstream	ofs(replace.c_str(), std::ofstream::app);
		if (ofs.is_open())// verification si le fichier de sortie a ete ouvert
		{
			for (std::string line; std::getline(ifs, line);) 
			{
				line = splitString(line, argv[2], argv[3]); // renvoie une string avec s1 remplacer par s2 si il y a une occurence
				ofs << line << std::endl;
			}
		}
		else
		{
			ifs.close();
			return (-1);
		}
		ifs.close();
		ofs.close();
		return (-1);
	}
	else
		std::cout << "[" << argv[1] << "]" << " file does not exist or can't open" << std::endl;
	return (0);
}