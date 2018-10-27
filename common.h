#ifndef COMMON_H
#define COMMON_H

#include <QObject>
#include <QResource>

namespace Common
{
    QByteArray getResource(const QString &a_filename);
    QString fromResource(const QString &a_filename);
};

#endif // COMMON_H
