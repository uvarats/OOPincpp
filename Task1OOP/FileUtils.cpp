#include "StringUtils.h"
#include "FileUtils.h"
#include <sstream>
#include <iostream>
#include <fstream>

FileUtils::FileUtils(string inputFile, string outputFile, string errorFile) :
	inputFile(inputFile), outputFile(outputFile), errorFile(errorFile)
{
}

FileUtils::FileUtils(string inputFile, string outputFile) :
	FileUtils(inputFile, outputFile, "error.txt")
{
}

FileUtils::FileUtils() :
	FileUtils("input.txt", "output.txt", "error.txt")
{
}

vector<Team> FileUtils::getTeams()
{
	ifstream teams(this->inputFile);
	vector<Team> result;
	while (!teams.eof()) {
		string str;
		getline(teams, str);
		if (str.substr(0, 2) != "//") {
			vector<string> data = StringUtils::split(str, ";");
			if (data.size() < 5) {
				continue;
			}
			/** 
			* [0] - team name, [1] - participants list(with ',' delimiter)
			* [2] - country, [3] - team results (tasks solved,point,penalty points)
			* [4] - coach data (full name,place of work,work phone,mobile phone,age)
			**/
			vector<string> participants = StringUtils::split(data[1], ",");
			vector<int> teamResults = StringUtils::stringsToInt(
				StringUtils::split(data[3], ",")
			);
			vector<string> coachData = StringUtils::split(data[4], ",");	
			Coach coach = Coach(coachData[0], coachData[1], coachData[2], coachData[3], stoi(coachData[4]));
			TeamResult results = TeamResult(teamResults[0], teamResults[1], teamResults[2]);
			Team t = Team(data[0], data[2], results, coach);
			t.setParticipants(participants);
			result.push_back(t);
		}
	}
	teams.close();
	return result;
}

void FileUtils::writeTeam(Team t)
{

}

void FileUtils::writeTeams(vector<Team> teams)
{

}

void FileUtils::writeLine(string line)
{
	ofstream out(this->outputFile);
	out << line;
	out.close();
}


string FileUtils::getInputFile()
{
	return this->inputFile;
}

FileUtils& FileUtils::setInputFile(string inputFile)
{
	this->inputFile = inputFile;
	return *this;
}

string FileUtils::getOutputFile()
{
	return this->outputFile;
}

FileUtils& FileUtils::setOutputFile(string outputFile)
{
	this->outputFile = outputFile;
	return *this;
}

string FileUtils::getErrorFile()
{
	return this->errorFile;
}

FileUtils& FileUtils::setErrorFile(string errorFile)
{
	this->errorFile = errorFile;
	return *this;
}
