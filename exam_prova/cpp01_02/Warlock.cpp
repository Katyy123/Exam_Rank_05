#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title) : name(name), title(title) {

    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {

    std::cout << this->name << ": My job here is done!" << std::endl;

    std::map<std::string, ASpell *>::iterator it_begin;
    std::map<std::string, ASpell *>::iterator it_end = this->map.end();

    for (it_begin = this->map.begin(); it_begin != it_end; ++it_begin)
        delete it_begin->second;
    this->map.clear();
}

std::string const & Warlock::getName() const {

    return this->name;
}

std::string const & Warlock::getTitle() const {

    return this->title;
}

void Warlock::setTitle(std::string const & title) {

    this->title = title;
}

void Warlock::introduce() const {

    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *aspell) {

    if (aspell)
        this->map.insert(std::pair<std::string, ASpell *>(aspell->getName(), aspell->clone()));
}

void Warlock::forgetSpell(std::string spell_name) {

    std::map<std::string, ASpell *>::iterator it = this->map.find(spell_name);

    if (it != this->map.end()) {
        delete it->second;
        this->map.erase(spell_name);
    }
}

void Warlock::launchSpell(std::string spell_name, ATarget const & target) {

    ASpell * spell = this->map[spell_name];

    if (spell)
        spell->launch(target);
}