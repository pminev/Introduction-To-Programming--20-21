/****************************************************************************
 * This file is part of the "Introduction to programming" course. FMI 2019/20
 *****************************************************************************/

 /**
  * @file   CommandLineArgs.cpp
  * @author Plamen Minev
  * @date   01.2021
  * @brief  Example of how we can use the program's command line arguments.
  */

#include<iostream>

struct Arguments
{
	bool shouldUseVerbosenLog;
	int multiplier;
};

static int MULTIPLIER = 1;
void ParseArguments(int argsCount, char** argv, Arguments& args)
{
	for (size_t i = 0; i < argsCount; i++)
	{
		char* param = argv[i];

		if (strcmp(param, "--useVerboseLog") == 0)
		{
			std::cout << "We'll use verbose log\n";
			args.shouldUseVerbosenLog = true;
		}
		else if (strcmp(param, "--multiplyBy") == 0)
		{
			if (argv[i + 1])
			{
				int mult = atoi(argv[i + 1]);
				std::cout << "New multiplier is " << mult << '\n';
				MULTIPLIER = mult;
				args.multiplier = mult;
			}
		}
	}
}


// When you are using the command line arguments which are given
// to the program you can change the major functionality inside.
// Usage: In command line you must call "<name>.exe <arg1> <arg2> ..."
// You should know that in **argv** the first element is <name>.exe
// Its good practice to add "--" in front of the option name
int main(int argc, char** argv)
{
	Arguments args;
	args.multiplier = 1;
	args.shouldUseVerbosenLog = false;
	ParseArguments(argc, argv, args);
	if (args.shouldUseVerbosenLog)
	{
		std::cout << "This is verbose log\n";
	}

	int number = 10;
	std::cout << "Multiplied : " << number * args.multiplier << '\n';

	return 0;
}
