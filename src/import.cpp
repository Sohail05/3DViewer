#include "import.h"

Import::Import()
{

}

Import::Import(QString etx)
{
    Extension = etx;

}


int Import::OpenFile(){

QWidget *parent = 0;

    FileName = QFileDialog::getOpenFileName( parent ,QString("Load %1").arg(Extension) , "C:/" , QString("Mesh File (*.%1)").arg(Extension) );

    File.setFileName(FileName);
    while(!File.open(QIODevice::ReadOnly | QIODevice::Text)){

        return 1;
    }

return 0;
}



Object3D Import::Extract(){

QTextStream in(&File);
Object3D MyObject;
int cnt=0;

    while(!in.atEnd()){

        QString line = in.readLine();
        QStringRef subString(&line, 0 , 2);

        if( subString.toString() == "v " ){

            QStringList List= line.split(" ");
            MyObject.AddPoint(List[1].toFloat(), List[2].toFloat(), List[3].toFloat());
            cnt++;

        }


      }// end of while

return MyObject;
}


