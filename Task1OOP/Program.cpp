#include <Windows.h>
#include <regex>
#include "Team.h"
#include "StringUtils.h"
#include "FileUtils.h"
#include "TeamUtils.h"
#include <iostream>
using std::string;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    string country = "Ukraine";
    FileUtils fUtils = FileUtils();
    vector<Team> teams = fUtils.getTeams();
    TeamUtils teamUtils = TeamUtils();
    string report = teamUtils.getReport(teams, country);
    fUtils.writeLine(report);
}
