#pragma once
#include <vector>
#include "Team.h"
using namespace std;

class FileUtils
{
	string inputFile;
	string outputFile;
	string errorFile;
public:
	FileUtils(string inputFile, string outputFile, string errorFile);
	FileUtils(string inputFile, string outputFile);
	FileUtils();

	vector<Team> getTeams();
	void writeTeam(Team t);
	void writeTeams(vector<Team> teams);
	void writeLine(string line);
	string getInputFile();
	FileUtils& setInputFile(string inputFile);
	string getOutputFile();
	FileUtils& setOutputFile(string outputFile);
	string getErrorFile();
	FileUtils& setErrorFile(string errorFile);
};

