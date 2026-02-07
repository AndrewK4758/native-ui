#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QFrame>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("omniLH96");
    window.setStyleSheet("background-color: white;");
    window.resize(1200, 800);

    auto *mainGrid = new QGridLayout(&window);
    mainGrid->setSpacing(0);
    mainGrid->setContentsMargins(0, 0, 0, 0);

    auto *topArea = new QWidget();
    topArea->setFixedHeight(60);
    mainGrid->addWidget(topArea, 0, 0, 1, 5);

    auto *hLine = new QFrame();
    hLine->setFixedHeight(2);
    hLine->setStyleSheet("background-color: black; border: none;");
    mainGrid->addWidget(hLine, 1, 0, 1, 5);

    auto *leftSidebar = new QWidget();
    mainGrid->addWidget(leftSidebar, 2, 0);

    auto *vLine1 = new QFrame();
    vLine1->setFixedWidth(1);
    vLine1->setStyleSheet("background-color: black; border: none;");
    mainGrid->addWidget(vLine1, 2, 1);

    auto *middleContent = new QWidget();
    mainGrid->addWidget(middleContent, 2, 2);

    auto vLine2 = new QFrame();
    vLine2->setFixedWidth(1);
    vLine2->setStyleSheet("background-color: black; border: none;");
    mainGrid->addWidget(vLine2, 2, 3);

    auto *rightSidebar = new QWidget();
    mainGrid->addWidget(rightSidebar, 2, 4);


    mainGrid->setColumnStretch(0, 4);
    mainGrid->setColumnStretch(1, 0);
    mainGrid->setColumnStretch(2, 12);
    mainGrid->setColumnStretch(3, 0);
    mainGrid->setColumnStretch(4, 3);

    mainGrid->setRowStretch(0, 0);
    mainGrid->setRowStretch(1, 0);
    mainGrid->setRowStretch(2, 1);

    window.showMaximized();
    return app.exec();
}