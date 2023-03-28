#include "ATarget.hpp"

ATarget::ATarget(std::string const & type) : type(type) {

}

ATarget::~ATarget() {

}

std::string const & ATarget::getType() const {

	return this->type;
}

void getHitBySpell(ASpell const & aspell) {

	std::cout << this->type << " has been " << aspell.getEffects() << 
}