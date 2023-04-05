#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator const &other);
        TargetGenerator &operator=(TargetGenerator const &other);

        std::map<std::string, ATarget *> map_target;
		
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget* target);
        void forgetTargetType(std::string const & name);
        ATarget* createTarget(std::string const & name);
};