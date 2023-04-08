#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:
		std::map<std::string, ASpell *> map_spell;

		SpellBook(SpellBook const & other);
		SpellBook & operator=(SpellBook const & other);

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const & name);
		ASpell* createSpell(std::string const & name);
};
