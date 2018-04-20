/**
 * \file CompteException.h
 * \brief
 * \author etudiant
 * \date 2018-04-20
 */

#ifndef COMPTEEXCEPTION_H_
#define COMPTEEXCEPTION_H_

#include <stdexcept>

class CompteException : public std::runtime_error{
public:
	CompteException(const std::string& p_raison): std::runtime_error(p_raison){}
};

class CompteDejaPresentException: public CompteException{
public:
	CompteDejaPresentException(const std::string& p_raison): CompteException(p_raison){}
};

class CompteAbsentException: public CompteException{
public:
	CompteAbsentException(const std::string& p_raison): CompteException(p_raison){}
};



#endif /* COMPTEEXCEPTION_H_ */
