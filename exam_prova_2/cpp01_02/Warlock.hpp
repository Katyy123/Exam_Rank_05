#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
	private:
		Warlock();
		Warlock(Warlock const & other);
		Warlock & operator=(Warlock const & other);

		std::string name;
		std::string title;

		map<std::string, ASpell *> map;		

	public:
		~Warlock();
		Warlock(std::string const & name, std::string const & title);

		std::string const & getName() const;
		std::string const & getTitle() const;
		
		void setTitle(std::string const & title);
		
		void introduce() const;

		void learnSpell(ASpell * spell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget const & target);
};
		
