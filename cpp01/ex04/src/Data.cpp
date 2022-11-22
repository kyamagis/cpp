
#include "../includes/Data.hpp"

Data::Data()
{

}

Data::Data(std::string	_infile_name, std::string _from_str, std::string _to_str)
{
	this->infile_name = _infile_name;
	this->ifs.open(infile_name);
	if (!ifs)
	{	
		std::cout << "Failed to open infile" << "\n";
		return ;
	}
	this->outfile_name = infile_name + (std::string)".replace";
	this->ofs.open(outfile_name);
	if (!ofs)
	{	
		std::cout << "Failed to open outfile" << "\n";
		return ;
	}
	this->from_str = _from_str;
	this->to_str = _to_str;
}

Data::~Data()
{
	this->ifs.close();
	this->ofs.close();
}

bool	Data::detect_open_fail()
{
	return this->ifs && this->ofs;
}

void	Data::replace()
{
	std::string		buff;
	size_t			start;
	int				i = 0;

	while (std::getline(this->ifs, buff))
	{
		while ((start = buff.find(this->from_str)) != std::string::npos)
		{
			buff.erase(start, this->from_str.length());
			buff.insert(start, this->to_str);
		}
		if (i == 0)
			i++;
		else
			this->ofs << "\n";
		i++;
		if (std::cin.eof())
			return ;
		this->ofs << buff;
	}
	return ;
}
