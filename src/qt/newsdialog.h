// Copyright (c) 2017-2018 The PIVX developers
// Copyright (c) 2019 The HighStakes developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_NEWSDIALOG_H
#define BITCOIN_QT_NEWSDIALOG_H

#include "guiutil.h"

#include <QLabel>
#include <QMainWindow>
#include <QMap>
#include <QMenu>
#include <QPoint>
#include <QPushButton>
#include <QSystemTrayIcon>

class WebFrame_1;

extern uint timestmp_1;
extern uint timestmp_2;
extern uint timestmp_3;
extern uint timestmp_4;
extern uint timestmp_5;
extern uint timestmp_6;
extern uint timestmp_7;
extern uint timestmp_8;
extern uint timestmp_9;

namespace Ui
{
	class NewsDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog for requesting payment of bitcoins */
class NewsDialog : public QDialog
{
	Q_OBJECT

public:

	explicit NewsDialog(QWidget* parent = 0);
	~NewsDialog();

	public slots:

protected:

private:
	Ui::NewsDialog* ui;
	WebFrame_1* iframe_1;
	WebFrame_1* iframe_2;
	WebFrame_1* iframe_3;
	WebFrame_1* iframe_4;
	WebFrame_1* iframe_5;
	WebFrame_1* iframe_6;
	WebFrame_1* iframe_7;
	WebFrame_1* iframe_8;
	WebFrame_1* iframe_9;

	void loadPoster();

signals:

	public slots :
	void linkClickedSlot_1();
	void linkClickedSlot_2();
	void linkClickedSlot_3();
	void linkClickedSlot_4();
	void linkClickedSlot_5();
	void linkClickedSlot_6();
	void linkClickedSlot_7();
	void linkClickedSlot_8();
	void linkClickedSlot_9();
	void timerTickSlot_1();
	void timerTickSlot_2();
	void timerTickSlot_3();
	void timerTickSlot_4();
	void timerTickSlot_5();
	void timerTickSlot_6();
	void timerTickSlot_7();
	void timerTickSlot_8();
	void timerTickSlot_9();

	private slots:

};


class WebFrame_1 : public QLabel
{
	Q_OBJECT

		signals :
	void onClick();

public:
	/** So that it responds to left-button clicks */
	void mousePressEvent(QMouseEvent* event);

	using QLabel::QLabel;
};

//class headerLabel : public QLabel
//{
//	Q_OBJECT
//
//		signals :
//	void onClick();
//
//public:
//	/** So that it responds to left-button clicks */
//	void mousePressEvent(QMouseEvent* event);
//
//	using QLabel::QLabel;
//};

#endif // BITCOIN_QT_NEWSDIALOG_H
