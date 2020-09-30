// Copyright
#include <QApplication>
#include <QtDataVisualization>

#include "mainwindow.hpp"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  std::cout << "Hello world" << std::endl;

  std::string file_path = "input.txt";

  MainWindow mainWindow;
  mainWindow.show();

  return app.exec();
}
