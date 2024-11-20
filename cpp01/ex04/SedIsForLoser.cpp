#include "SedIsForLoser.hpp"

std::string splitString(std::string str, std::string s1, std::string s2)
{
	std::string::size_type start = 0;
	std::string::size_type end = 0;
	std::string	tmp;

	while ((end = str.find(s1, start)) != std::string::npos) 
	{
		tmp += str.substr(start, end - start); // met tout ce qu'il y a avant l'occurence dans tmp
		start = end + s1.length(); // incremente start de la taille de la chaine stocker  + s1
		tmp += s2; //change le mot souhaiter par le nouveau 
		if (str.find(s1, start) == std::string::npos) //si il n'y a plus d'occurence dans la chaine alors on met tous le reste de la string dans tmp
		{
			tmp += str.substr(start, end - start);
			return (tmp);
		}
	}
	//si aucune occurence n'est detecter dans la chaine alors on renvoie str
	return (str);
}
