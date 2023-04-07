#pragma once

#include <iostream>

class ASpell;

class ATarget
{
    protected:
        std::string type;

    public:
        ATarget();
        ATarget(ATarget const & other);
        ATarget & operator=(ATarget const & other);
        ATarget(std::string const & type);
        virtual ~ATarget();

        std::string const & getType() const;

		void getHitBySpell(ASpell const & spell) const;

        virtual ATarget * clone() const = 0;
};

#include "ASpell.hpp"
