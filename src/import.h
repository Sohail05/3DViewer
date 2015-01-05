#ifndef IMPORT_H
#define IMPORT_H

#include <QString>
#include <Qfiledialog.h>
#include <QFile>
#include <object3d.h>
#include <QStringRef>
#include <QTextStream>
#include <object3d.h>
#include <import.h>

class Import
{


public:

    Import();
    Import(QString);
    int OpenFile();
    Object3D Extract();

private:

    QString Extension;
    QString FileName;
    QFile File;


};

#endif // IMPORT_H
