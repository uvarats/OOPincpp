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
