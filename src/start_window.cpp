#include "start_window.hpp"

#include <QVBoxLayout>

using pve::StartWindow;

StartWindow::StartWindow(QWidget* parent) : QWidget(parent) {
	resize(400, 200);
	setWindowTitle("Окно приветствия");

	start_button = new QPushButton("Перейти к клавиатуре", this);
	start_button->setMinimumHeight(60);
	start_button->setFont(QFont("Roboto", 20));

	QVBoxLayout* main_layout = new QVBoxLayout(this);
	main_layout->addWidget(start_button);

	connect(start_button, &QPushButton::clicked, this, &QWidget::hide);
	connect(start_button, &QPushButton::clicked, this, &StartWindow::open_keyboard);
}

