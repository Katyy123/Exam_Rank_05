#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ATarget {

	private:

		ATarget();
		ATarget(ATarget const & other);
		ATarget & operator=(ATarget const & other);

		std::string type;

	// protected:


	public:

		ATarget(std::string const & type);
		~ATarget();

		std::string const & getType() const;
		
		virtual ATarget * clone() const = 0;

		void getHitBySpell(ASpell const & aspell);

};

#endif