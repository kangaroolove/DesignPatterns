#include "view.h"
#include "controller.h"
#include "progressbarmodel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSharedPointer<AbstractModel> pModel = QSharedPointer<ProgressBarModel>(new ProgressBarModel());
    View w(pModel.get());
    w.show();

    Controller c(pModel.get());
    c.show();
    return a.exec();
}
