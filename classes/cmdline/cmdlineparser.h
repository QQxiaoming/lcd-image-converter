#ifndef CMDLINEPARSER_H
#define CMDLINEPARSER_H
//-----------------------------------------------------------------------------
#include "cmdoptions.h"
#include <QObject>
//-----------------------------------------------------------------------------
class QCommandLineParser;
class QCoreApplication;
//-----------------------------------------------------------------------------
namespace CommandLine {
//-----------------------------------------------------------------------------
class CmdLineParser
{
public:
    CmdLineParser(const QCoreApplication *app);
    ~CmdLineParser();

    Mode mode() const;
    DocumentType documentType() const;

private:
    const QCoreApplication *mApp;
    QCommandLineParser *mParser;

    void initializeParser(QCommandLineParser *parser);
};
//-----------------------------------------------------------------------------
}
//-----------------------------------------------------------------------------
#endif // CMDLINEPARSER_H