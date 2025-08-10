#include <QApplication>
#include <QScreen>
#include <QMainWindow>
#include <QGuiApplication>
#include <QStatusBar>
#include <QAction>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("ChessSendiri");

    window.resize(400, 300);
    window.setMinimumSize(300, 200);

    window.move(QGuiApplication::primaryScreen()->geometry().center() - window.rect().center());    window.show();
    window.statusBar()->showMessage("Ready");

    QAction *quitAction = new QAction("Quit", &window);
    quitAction->setShortcut(QKeySequence::Quit);
    QObject::connect(quitAction, &QAction::triggered, &app, &QApplication::quit);
    window.addAction(quitAction);


    return app.exec();
}
