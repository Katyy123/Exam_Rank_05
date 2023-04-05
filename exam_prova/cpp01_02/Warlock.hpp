#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {

    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(Warlock const & other);
        Warlock & operator=(Warlock const & other);

        std::map<std::string, ASpell *> map;

    public:
        Warlock(std::string const & name, std::string const & title);
        ~Warlock();

        std::string const & getName() const;
        std::string const & getTitle() const;

        void setTitle(std::string const & title);

        void introduce() const;

        void learnSpell(ASpell *aspell);
        void forgetSpell(std::string spell_name);
        void launchSpell(std::string spell_name, ATarget const & target);
};