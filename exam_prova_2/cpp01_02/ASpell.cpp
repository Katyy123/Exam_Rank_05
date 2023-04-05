#include "ASpell.hpp"

ASpell::ASpell() {

}

ASpell::ASpell(std::string const & name, std::string const & effects) : name(name), effects(effects) {


}

ASpell::ASpell(ASpell const & other) {

	*this = other;
}

ASpell & ASpell::operator=(ASpell const & other) {

	this->name = other.name;
	this->title = other.title;
	return (*this);
}

ASpell::~ASpell() {


}

std::string const & ASpell::getName() const {

        return name;
}

std::string const & ASpell::getEffects() const {

        return effects;
}

void ASpell::launch(ATarget const & target) {

	target.getHitBySpell(*this);
}
