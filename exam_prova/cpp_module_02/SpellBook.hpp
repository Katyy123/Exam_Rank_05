#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        SpellBook(SpellBook const &other);
        SpellBook &operator=(SpellBook const &other);

        std::map<std::string, ASpell *> map_spell;
		
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const & name);
        ASpell* createSpell(std::string const & name);
};