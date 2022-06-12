#pragma once
#include <vector>
#include <algorithm>
#include "Atom.h"

class Molecule
{
private:

	std::string m_Name;
	std::vector<Atom> m_Atoms;

public:

	Molecule();

	Molecule(std::string otherName);


	void setName(std::string otherName);

	std::string getName() const;


	void addAtom(const Atom& otherAtom);

	void addAtoms(const std::vector<Atom>& otherAtoms);

	std::vector<Atom> getAllAtoms() const;

	void sortByMass();

	void printMoleculeInfo() const;

};
