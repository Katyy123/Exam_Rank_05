#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title) : name(name), title(title) {

	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {

	std::cout << name << ": My job here is done!" << std::endl;
	
}

std::string const & Warlock::getName() const {

	return name;
}

std::string const & Warlock::getTitle() const {

    return title;
}

void Warlock::setTitle(std::string const & title) {

	this->title = title;
}

void Warlock::introduce() const {

	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	
	book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const & name) {
	
	book.forgetSpell(name);
}

void Warlock::launchSpell(std::string const & name, ATarget const & target){
	
	ATarget * test = 0;

	if (test == &target)
		return;

	ASpell * spell = book.createSpell(name);

	if (spell)
		spell->launch(target);
}


