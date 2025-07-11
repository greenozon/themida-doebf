#pragma once

#include "../Instruction/Instruction.h"

class BaseOptimization
{
public:
	virtual bool run(std::list<Instruction>::iterator it, std::list<Instruction>& instructions) = 0;
};