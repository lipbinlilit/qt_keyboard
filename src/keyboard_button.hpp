#pragma once

#include <cstddef>

#include <QPushButton>
#include <QString>
#include <QWidget>

namespace pve {
	class KeyBoardButton : public QPushButton {
		public:
			KeyBoardButton(const QString& text = "", QWidget* parent = nullptr);
	};
}
