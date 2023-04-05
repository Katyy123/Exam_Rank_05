#include "SpellBook.hpp"

SpellBook::SpellBook() {

}

SpellBook::~SpellBook() {
    
    std::map<std::string, ASpell *>::iterator it_begin;// = this->map_spell.begin();
    std::map<std::string, ASpell *>::iterator it_end = map_spell.end();

    for (it_begin = map_spell.begin(); it_begin != it_end; ++it_begin)
		delete it_begin->second;
    map_spell.clear();
}

void SpellBook::learnSpell(ASpell* spell) {
    
    if (spell)
        map_spell.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &name) {
    
    std::map<std::string, ASpell *>::iterator it = map_spell.find(name);

	if (it != map_spell.end()) {
		delete it->second;
        map_spell.erase(name);
    }
}

ASpell* SpellBook::createSpell(std::string const &name) {
    
    std::map<std::string, ASpell *>::iterator it = map_spell.find(name);

    if (it != map_spell.end())
        return map_spell[name];
    return NULL;
}
