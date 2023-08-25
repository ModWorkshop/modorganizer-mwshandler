#ifndef LOGGER_H
#define LOGGER_H

#include <QString>

namespace MwsHandler {

void LoggerInit(const QString &fileName);
void LoggerDeinit();

}; //namespace MwsHandler

#endif
