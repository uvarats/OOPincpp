#include "TeamUtils.h"

vector<Team> TeamUtils::getTeamsByCondition(vector<Team> teams, bool (*condition)(Team& t))
{
    vector<Team> result;
    for (Team t : teams) {
        if (condition(t)) {
            result.push_back(t);
        }
    }
    return result;
}

void TeamUtils::sortTeamsByCondition(vector<Team>& teams, bool (*condition)(Team& t1, Team& t2))
{
    sort(teams.begin(), teams.end(), condition);
}

int TeamUtils::countTeamsByCountry(vector<Team> teams, string country)
{
    int result = count_if(teams.begin(), teams.end(), [country](Team& t) {
        return t.getCountry() == country;
        });
    return result;
}

Coach TeamUtils::getYoungestCoach(vector<Team> teams)
{
    sortTeamsByCondition(teams, [](Team& t1, Team& t2) {
        return t1.getCoach().getAge() < t2.getCoach().getAge();
        });
    return teams[0].getCoach();
}

string TeamUtils::getReport(vector<Team>& teams, string country)
{
    vector<Team> penaltyGreaterThanPoints = getTeamsByCondition(teams, [](Team& t1) {
        return t1.getResult().getPenaltyPoints() > t1.getResult().getPoints();
        });
    sortTeamsByCondition(teams, [](Team& t1, Team& t2) {
        return t1.getResult().getPenaltyPoints() > t2.getResult().getPenaltyPoints();
        });
    int countryCount = countTeamsByCountry(teams, country);
    Coach youngest = getYoungestCoach(teams);

    stringstream ss;
    StringUtils::vectorToString(
        ss,
        "Команды, у которых штрафных баллов больше, чем количество набранных баллов: \n",
        penaltyGreaterThanPoints
    );

    StringUtils::vectorToString(
        ss,
        "Команды, отсортированные по количество штрафных баллов: \n",
        teams
    );

    ss << "Команд, представляющих страну " << country << ": " << countryCount << "\n";
    ss << "Самый молодой тренер: \n" << youngest;

    return ss.str();
}
