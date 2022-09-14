#include "Team.h"
Team::Team(string name, string country, TeamResult teamResult, Coach coach) :
    name(name), participants(vector<string>()), country(country), teamResult(teamResult), coach(coach)
{
}

Team::Team(string name, string country, Coach coach) :
    Team(name, country, TeamResult(), coach)
{
}

Team::Team(string name, string country) :
    Team(name, country, Coach())
{
}

Team::Team(string name) :
    Team(name, "Unknown")
{
}

Team::Team() :
    Team("Unknown Name")
{
}

string Team::getName()
{
    return this->name;
}

Team& Team::setName(string name)
{
    this->name = name;
    return *this;
}

vector<string>& Team::getParticipants()
{
    return this->participants;
}

Team& Team::setParticipants(vector<string> participants)
{
    this->participants = participants;
    return *this;
}

string Team::getCountry()
{
    return this->country;
}

Team& Team::setCountry(string country)
{
    this->country = country;
    return *this;
}

TeamResult& Team::getResult()
{
    return this->teamResult;
}

Coach& Team::getCoach()
{
    return this->coach;
}

Team& Team::setCoach(Coach coach)
{
    this->coach = coach;
    return *this;
}

ostream& operator<<(ostream& outs, const Team& t)
{
    vector<string> participantsVector = t.participants;
    stringstream participants;
    copy(participantsVector.begin(), participantsVector.end(), ostream_iterator<string>(participants, ","));
    string partStr = participants.str();
    partStr = partStr.substr(0, partStr.length() - 1);

    return outs << t.name << ";" << partStr << ";" << t.country << ";" << t.teamResult << ";" << t.coach;
}