#include<iostream>
#include<vector>
#include "Molecule.h"
#include "Atom.h"

double findAverageMass(std::vector<Atom> otherAtoms)
{
	double resultAverageMass = 0;
	for (auto& atom : otherAtoms)
	{
		resultAverageMass += atom.getAtomicMassUnit();
	}
	if (otherAtoms.size() != 0)
	{
		resultAverageMass /= otherAtoms.size();
	}
	return resultAverageMass;
}


int main()
{
	Atom hydrogen("Hydrogen", 1, 0, 1, 1, ATOM_TYPE::ISOTYPE);
	Atom oxygen("Oxygen", 16, 8, 8, 8, ATOM_TYPE::ISOTYPE);

	Molecule mol_1;
	mol_1.setName("Water");
	mol_1.addAtom(oxygen);
	mol_1.addAtoms({ hydrogen, hydrogen });

	mol_1.printMoleculeInfo();

	mol_1.sortByMass();
	std::cout << "--------------------- Output after sort by mass-----------------------" << std::endl;
	mol_1.printMoleculeInfo();

	std::cout << "Average atom mass in '" << mol_1.getName() << "': " << findAverageMass(mol_1.getAllAtoms()) << std::endl;

	std::string is_neutral_answer = bool(hydrogen.isNeutral()) ? "yes" : "no";
	std::cout << "Is atom '" << hydrogen.getName() << "' neutral? --> " << is_neutral_answer << std::endl;
	is_neutral_answer = bool(oxygen.isNeutral()) ? "yes" : "no";
	std::cout << "Is atom '" << oxygen.getName() << "' neutral? --> " << is_neutral_answer << std::endl;

	return 0;
}