#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) {
    
    std::cout << this->name << ": This looks like another boring day.\n";
}

// Warlock::Warlock(std::string const &name, std::string const &title) {
    
// 	this->name = name;
//     this->title = title;
//     std::cout << this->name << ": This looks like another boring day.\n";
// }

Warlock::~Warlock() {
    
	std::cout << this->name << ": My job here is done!\n";
    std::map<std::string, ASpell *>::iterator it_begin;// = this->map.begin();
    std::map<std::string, ASpell *>::iterator it_end = this->map.end();
	for (it_begin = this->map.begin(); it_begin != it_end; ++it_begin)
		delete it_begin->second;
    // while (it_begin != it_end)
    // {
    //     delete it_begin->second;
    //     ++it_begin;
    // }
    this->map.clear();
}

std::string const &Warlock::getName() const {
	
	return (this->name);
}
std::string const &Warlock::getTitle() const {
	
	return (this->title);
}

void Warlock::setTitle(std::string const &title) {
	
	this->title = title;
}

void Warlock::introduce() const {
	
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell* spell_ptr) {
	
	if (spell_ptr)
		map.insert(std::pair<std::string, ASpell *>(spell_ptr->getName(), spell_ptr->clone()));
}

void Warlock::forgetSpell(std::string spell_name) {
	
	std::map<std::string, ASpell *>::iterator it = map.find(spell_name);
	// if (it != arr.end())
	// 	delete it->second;
	// arr.erase(spell_name);
	if (it != map.end()) {
		delete it->second;
		map.erase(spell_name);
	}
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target_ref) {
	
	ASpell* spell = map[spell_name];
	if (spell)
		spell->launch(target_ref);
}