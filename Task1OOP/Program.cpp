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
    try {
        FileUtils* fUtils = new FileUtils();
        vector<Team> teams = fUtils->getTeams();
        TeamUtils teamUtils = TeamUtils();
        Coach youngest = teamUtils.getYoungestCoach(teams);
        cout << youngest;
        cout << "\n";
    }
    catch (exception e) {
        cout << e.what();;
    }
}
