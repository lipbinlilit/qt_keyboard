#pragma once

#include <QPushButton>
#include <QWidget>

namespace pve {
	class StartWindow : public QWidget {
		Q_OBJECT

		private:
			QPushButton* start_button;

		public:
			StartWindow(QWidget* parent = nullptr);

		signals:
			void open_keyboard();
	};
}
