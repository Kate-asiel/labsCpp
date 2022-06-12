#include "Molecule.h"

Molecule::Molecule()
{
	this->m_Name = "";
}

Molecule::Molecule(std::string otherName)
{
	this->m_Name = otherName;
}

void Molecule::setName(std::string otherName)
{
	this->m_Name = otherName;
}

std::string Molecule::getName() const
{
	return this->m_Name;
}

void Molecule::addAtom(const Atom& otherAtom)
{
	this->m_Atoms.push_back(otherAtom);
}

void Molecule::addAtoms(const std::vector<Atom>& otherAtoms)
{
	this->m_Atoms.insert(this->m_Atoms.end(), otherAtoms.begin(), otherAtoms.end());
}

std::vector<Atom> Molecule::getAllAtoms() const
{
	return this->m_Atoms;
}

void Molecule::sortByMass()
{
	sort(this->m_Atoms.begin(), this->m_Atoms.end(), 
		[](const Atom& leftAtom, const Atom& rightAtom)->bool
		{ return leftAtom.getAtomicMassUnit() < rightAtom.getAtomicMassUnit(); });
}

void Molecule::printMoleculeInfo() const
{
	int counter = 1;
	std::cout << "     Molecule '" << this->m_Name << "' info:" << std::endl << std::endl;
	for (const auto& atom : this->m_Atoms)
	{
		std::cout << "Atom number " << counter << std::endl;
		atom.PrintAtomInfo();
		std::cout << std::endl;
		counter++;
	}
}