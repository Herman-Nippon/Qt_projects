#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello, World");
    label->setWindowTitle("My app");
    label->resize(400,100);

    label->show();
    return app.exec();
}
