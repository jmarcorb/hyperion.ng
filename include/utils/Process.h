#pragma once

#include <QByteArray>
#include <QString>

namespace Process {

void restartHyperion(bool asNewProcess=false);
QByteArray command_exec(const QString& cmd, const QByteArray& data="");

}
