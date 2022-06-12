 #include "Atom.h"

Atom::Atom()
{
	this->m_Name = "";
	this->m_AtomicMassUnit = 0;
	this->m_NeutronsNumber = 0;
	this->m_ProtonsNumber = 0;
	this->m_ElectronsNumber = 0;
	this->m_AtomType = ATOM_TYPE::UNKNOWN;
}

Atom::Atom(std::string otherName,
	int otherAtomicMassUnit,
	int otherNeutronsNumber,
	int otherProtonsNumber,
	int otherElectronsNumber,
	ATOM_TYPE otherAtomType)
{
	setName(otherName);
	setAtomicMassUnit(otherAtomicMassUnit);
	setNeutronsNumber(otherNeutronsNumber);
	setProtonsNumber(otherProtonsNumber);
	setElectronsNumber(otherElectronsNumber);
	setAtomType(otherAtomType);
}

void Atom::setName(std::string otherName)
{
	this->m_Name = otherName;
}

void Atom::setAtomicMassUnit(int otherAtomicMassUnit)
{
	if (otherAtomicMassUnit < 0)
	{
		this->m_AtomicMassUnit = 0;
	}
	else
	{
		this->m_AtomicMassUnit = otherAtomicMassUnit;
	}
}

void Atom::setNeutronsNumber(int otherNeutronsNumber)
{
	if (otherNeutronsNumber < 0)
	{
		this->m_NeutronsNumber = 0;
	}
	else
	{
		this->m_NeutronsNumber = otherNeutronsNumber;
	}
}

void Atom::setProtonsNumber(int otherProtonsNumber)
{
	if (otherProtonsNumber < 0)
	{
		this->m_ProtonsNumber = 0;
	}
	else
	{
		this->m_ProtonsNumber = otherProtonsNumber;
	}
}

void Atom::setElectronsNumber(int otherElectronsNumber)
{
	if (otherElectronsNumber < 0)
	{
		this->m_ElectronsNumber = 0;
	}
	else
	{
		this->m_ElectronsNumber = otherElectronsNumber;
	}
}

void Atom::setAtomType(ATOM_TYPE otherAtomType)
{
	this->m_AtomType = otherAtomType;
}




std::string Atom::getName() const
{
	return this->m_Name;
}

int Atom::getAtomicMassUnit() const
{
	return this->m_AtomicMassUnit;
}

int Atom::getNeutronsNumber() const
{
	return this->m_NeutronsNumber;
}

int Atom::getProtonsNumber() const
{
	return this->m_ProtonsNumber;
}

int Atom::getElectronsNumber() const
{
	return this->m_ElectronsNumber;
}

ATOM_TYPE Atom::getAtomType() const
{
	return this->m_AtomType;
}


bool Atom::isNeutral() const
{
	return (this->m_NeutronsNumber == this->m_ElectronsNumber);
}

void Atom::PrintAtomInfo() const
{
	std::cout << " Atom '" << this->m_Name << "' info:" << std::endl;
	std::cout << " Atomic mas unit: " << this->m_AtomicMassUnit << std::endl;
	std::cout << " Neutrons number: " << this->m_NeutronsNumber << std::endl;
	std::cout << " Protons number: " << this->m_ProtonsNumber << std::endl;
	std::cout << " Electrons number: " << this->m_ElectronsNumber << std::endl;
	std::cout << " Atom type: " << m_sAtomType[(int)this->m_AtomType] << std::endl;
}


Atom& Atom::operator=(const Atom& otherAtom)
{
	
	this->m_Name = otherAtom.m_Name;
	this->m_AtomicMassUnit = otherAtom.m_AtomicMassUnit;
	this->m_NeutronsNumber = otherAtom.m_NeutronsNumber;
	this->m_ProtonsNumber = otherAtom.m_ProtonsNumber;
	this->m_ElectronsNumber = otherAtom.m_ElectronsNumber;
	this->m_AtomType = otherAtom.m_AtomType;
	return *this;
}