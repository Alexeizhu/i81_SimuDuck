#include <QCoreApplidcation>

#include "mallardduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    MallarDuck *duck1 = new MallardDuck();
    duck1->display();
    duck1->quack();
    
    return a.exec();
    
}
