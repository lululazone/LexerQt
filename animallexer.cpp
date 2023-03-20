#include "animallexer.h"
#include <QMap>

QString AnimalLexer::getPronoun() const
{
    return m_pronoun;
}
QString AnimalLexer::getVerb() const
{
    return m_verb;
}

QString AnimalLexer::getAnimal() const
{
    return m_animal;
}

QString AnimalLexer::getDeterminant() const
{
    return m_determinant;
}


void AnimalLexer::setPronoun(const QString &newPronoun)
{
    m_pronoun = newPronoun;
}

void AnimalLexer::setVerb(const QString &newVerb)
{
    m_verb = newVerb;
}

void AnimalLexer::setDeterminant(const QString &newDeterminant)
{
    m_determinant = newDeterminant;
}

void AnimalLexer::setAnimal(const QString &newAnimal)
{
    m_animal = newAnimal;
}



AnimalLexer::AnimalLexer(Fsm *fsm):Lexer(fsm)
{
    QMap<QString,QStringList> dialectMap;
    dialectMap["pronouns"] = {"I","you"};
    dialectMap["verbs"] = {"am","are","eat"};
    dialectMap["determinants"] = {"a","the"};
    dialectMap["animals"] = {"cat","bird"};
    setDialectMap(dialectMap);
}

bool AnimalLexer::isPronoun()
{
    return isStringInList(dialectMap("pronouns"),currentToken());
}

bool AnimalLexer::isVerb()
{
    return isStringInList(dialectMap("verbs"),currentToken());
}

bool AnimalLexer::isDeterminant()
{
    return isStringInList(dialectMap("determinants"),currentToken());
}

bool AnimalLexer::isAnimal()
{
    return isStringInList(dialectMap("animals"),currentToken());
}
