#include "keyboard_button.hpp"

#include <QSizePolicy>

using pve::KeyBoardButton;

KeyBoardButton::KeyBoardButton(const QString& text, QWidget* parent)
    : QPushButton(parent) {
	setFocusPolicy(Qt::NoFocus);
	setFont(QFont("Roboto", 20));
	setText(text);
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

void KeyBoardButton::mousePressEvent(QMouseEvent* event) {
	QPushButton::mousePressEvent(event);
	emit mouse_clicked();
}
