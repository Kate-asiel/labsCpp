#pragma once
#include<string>
#include <iostream>



enum class ATOM_TYPE
{
	UNKNOWN,
	ISOTYPE,
	RADIOACTIVE,
	ION,
	ANTIMATTER,
	STABLE
};

class Atom
{
private:

	std::string m_Name;
	int m_AtomicMassUnit;
	int m_NeutronsNumber;
	int m_ProtonsNumber;
	int m_ElectronsNumber;
	ATOM_TYPE m_AtomType;

	const std::string m_sAtomType[6] =
	{ "unknown",
	"isotype",
	"radioactive",
	"ion",
	"antimatter",
	"stable" };

public:

	Atom();

	Atom(std::string otherName, int otherAtomicMassUnit, int otherNeutronsNumber, int otherProtonsNumber, int otherElectronsNumber, ATOM_TYPE otherAtomType);

	void setName(std::string otherName);

	void setAtomicMassUnit(int otherAtomicMassUnit);

	void setNeutronsNumber(int otherNeutronsNumber);

	void setProtonsNumber(int otherProtonsNumber);

	void setElectronsNumber(int otherElectronsNumber);

	void setAtomType(ATOM_TYPE otherAtomType);


	std::string getName() const;

	int getAtomicMassUnit() const;

	int getNeutronsNumber() const;

	int getProtonsNumber() const;

	int getElectronsNumber() const;

	ATOM_TYPE getAtomType() const;

	bool isNeutral() const;

	void PrintAtomInfo() const;


	Atom& operator = (const Atom& otherAtom);

};


