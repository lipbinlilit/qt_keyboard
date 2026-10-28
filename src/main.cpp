#include <QApplication>

#include "keyboard_window.hpp"
#include "start_window.hpp"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
	
    pve::StartWindow start_window;
    pve::KeyBoardWindow keyboard_window;

    QObject::connect(
        &start_window, &pve::StartWindow::open_keyboard,
        &keyboard_window, &QWidget::show
    );

    start_window.show();
	
    return app.exec();
}
