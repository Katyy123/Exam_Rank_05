#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title) : name(name), title(title) {
    
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
    
    std::cout << this->name << ": My job here is done!\n";
}

std::string const & Warlock::getName() const {
    
    return name;
}

std::string const &Warlock::getTitle() const {
    
    return title;
}

void Warlock::setTitle(std::string const &title) {
    
    this->title = title;
}

void Warlock::introduce() const {
    
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
    
    book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string name) {
    
    book.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget const &target) {
    
    ATarget const *test = 0;

    if (test == &target)
        return;
    
    ASpell *spell = book.createSpell(name);
    if (spell)
        spell->launch(target);
}
