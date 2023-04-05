#pragma once

#include <iostream>

class Warlock
{
	private:
		Warlock();
		Warlock(Warlock const & other);
		Warlock & operator=(Warlock const & other);

		std::string name;
		std::string title;		

	public:
		~Warlock();
		Warlock(std::string const & name, std::string const & title);

		std::string const & getName() const;
		std::string const & getTitle() const;
		
		void setTitle(std::string const & title);
		
		void introduce() const;
};
		
