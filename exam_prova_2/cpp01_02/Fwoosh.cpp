#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {

}

Fwoosh::~Fwoosh() {


}

ASpell * Fwwosh::clone() const {

	return (new(Fwoosh));
}
