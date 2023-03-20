#ifndef ANIMALLEXER_H
#define ANIMALLEXER_H

#include "lexer.h"
#include <QObject>

class AnimalLexer : public Lexer
{
    //Q_OBJECT
    QString m_pronoun;
    QString m_verb;
    QString m_determinant;
    QString m_animal;

public:
    AnimalLexer(Fsm *fsm);
    bool isPronoun();
    bool isVerb();
    bool isDeterminant();
    bool isAnimal();
    QString getPronoun() const;
    QString getVerb() const;
    QString getDeterminant() const;
    QString getAnimal() const;
    void setPronoun(const QString &newPronoun);
    void setVerb(const QString &newVerb);
    void setDeterminant(const QString &newDeterminant);
    void setAnimal(const QString &newAnimal);
};

#endif // ANIMALLEXER_H
