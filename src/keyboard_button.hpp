#pragma once

#include <cstddef>

#include <QMouseEvent>
#include <QPushButton>
#include <QString>
#include <QWidget>

namespace pve {
	class KeyBoardButton : public QPushButton {
		Q_OBJECT
		public:
			KeyBoardButton(const QString& text = "", QWidget* parent = nullptr);

		signals:
			void mouse_clicked();

		protected:
			void mousePressEvent(QMouseEvent* event) override;
	};
}
