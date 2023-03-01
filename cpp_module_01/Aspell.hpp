#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ASpell {

	private:

		std::string name;
		std::string effects;

		ASpell();
		ASpell(ASpell const & other);
		ASpell & operator=(ASpell const & other);

	public:
		
		ASpell(std::string const & name, std::string const & title);
		~ASpell();
		
		std::string const & getName() const;
		std::string const & getEffects() const;
		
		void setTitle(std::string const & title);

};

#endif