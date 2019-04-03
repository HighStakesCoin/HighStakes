// Copyright (c) 2017-2018 The PIVX developers
// Copyright (c) 2019 The HighStakes developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "newsdialog.h"
#include "ui_newsdialog.h"


#include <QAction>
#include <QApplication>
#include <QDateTime>
#include <QDesktopWidget>
#include <QDragEnterEvent>
#include <QIcon>
#include <QListWidget>
#include <QMenuBar>
#include <QMessageBox>
#include <QMimeData>
#include <QProgressBar>
#include <QProgressDialog>
#include <QSettings>
#include <QStackedWidget>
#include <QStatusBar>
#include <QStyle>
#include <QTimer>
#include <QToolBar>
#include <QVBoxLayout>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QBuffer>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDesktopServices>
#include <QUrlQuery>
#include <QVBoxLayout>

uint timestmp_1;
uint timestmp_2;
uint timestmp_3;
uint timestmp_4;
uint timestmp_5;
uint timestmp_6;
uint timestmp_7;
uint timestmp_8;
uint timestmp_9;

NewsDialog::NewsDialog(QWidget* parent) : QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint | Qt::WindowCloseButtonHint | Qt::WindowCloseButtonHint),
                                                          ui(new Ui::NewsDialog)
{
    ui->setupUi(this);

	loadPoster();

}

void NewsDialog::loadPoster() {

	iframe_1 = new WebFrame_1(this);
	iframe_1->setProperty("class", "iframe_1");
	iframe_1->setObjectName(QStringLiteral("webFrame_1"));
	iframe_1->setMinimumWidth(330);
	iframe_1->setMinimumHeight(255);
	iframe_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_1->setCursor(Qt::PointingHandCursor);

		
	iframe_2 = new WebFrame_1(this);
	iframe_2->setProperty("class", "iframe_2");
	iframe_2->setObjectName(QStringLiteral("webFrame_2"));
	iframe_2->setMinimumWidth(330);
	iframe_2->setMinimumHeight(255);
	iframe_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_2->setCursor(Qt::PointingHandCursor);

	iframe_3 = new WebFrame_1(this);
	iframe_3->setProperty("class", "iframe_3");
	iframe_3->setObjectName(QStringLiteral("webFrame_3"));
	iframe_3->setMinimumWidth(330);
	iframe_3->setMinimumHeight(255);
	iframe_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_3->setCursor(Qt::PointingHandCursor);

	iframe_4 = new WebFrame_1(this);
	iframe_4->setProperty("class", "iframe_4");
	iframe_4->setObjectName(QStringLiteral("webFrame_4"));
	iframe_4->setMinimumWidth(330);
	iframe_4->setMinimumHeight(255);
	iframe_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_4->setCursor(Qt::PointingHandCursor);

	iframe_5 = new WebFrame_1(this);
	iframe_5->setProperty("class", "iframe_5");
	iframe_5->setObjectName(QStringLiteral("webFrame_5"));
	iframe_5->setMinimumWidth(330);
	iframe_5->setMinimumHeight(255);
	iframe_5->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_5->setCursor(Qt::PointingHandCursor);

	iframe_6 = new WebFrame_1(this);
	iframe_6->setProperty("class", "iframe_6");
	iframe_6->setObjectName(QStringLiteral("webFrame_6"));
	iframe_6->setMinimumWidth(330);
	iframe_6->setMinimumHeight(255);
	iframe_6->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_6->setCursor(Qt::PointingHandCursor);

	iframe_7 = new WebFrame_1(this);
	iframe_7->setProperty("class", "iframe_7");
	iframe_7->setObjectName(QStringLiteral("webFrame_7"));
	iframe_7->setMinimumWidth(330);
	iframe_7->setMinimumHeight(255);
	iframe_7->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_7->setCursor(Qt::PointingHandCursor);

	iframe_8 = new WebFrame_1(this);
	iframe_8->setProperty("class", "iframe_8");
	iframe_8->setObjectName(QStringLiteral("webFrame_8"));
	iframe_8->setMinimumWidth(330);
	iframe_8->setMinimumHeight(255);
	iframe_8->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_8->setCursor(Qt::PointingHandCursor);

	iframe_9 = new WebFrame_1(this);
	iframe_9->setProperty("class", "iframe_9");
	iframe_9->setObjectName(QStringLiteral("webFrame_9"));
	iframe_9->setMinimumWidth(330);
	iframe_9->setMinimumHeight(255);
	iframe_9->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	iframe_9->setCursor(Qt::PointingHandCursor);


	ui->vl1->addWidget(iframe_1);
	ui->vl2->addWidget(iframe_2);
	ui->vl3->addWidget(iframe_3);
	ui->vl4->addWidget(iframe_4);
	ui->vl5->addWidget(iframe_5);
	ui->vl6->addWidget(iframe_6);
	ui->vl7->addWidget(iframe_7);
	ui->vl8->addWidget(iframe_8);
	ui->vl9->addWidget(iframe_9);



	QTimer *webtimer = new QTimer();
	webtimer->setInterval(30000);

	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_1()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_2()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_3()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_4()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_5()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_6()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_7()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_8()));
	QObject::connect(webtimer, SIGNAL(timeout()), this, SLOT(timerTickSlot_9()));

	QObject::connect(iframe_1, SIGNAL(onClick()), this, SLOT(linkClickedSlot_1()));
	QObject::connect(iframe_2, SIGNAL(onClick()), this, SLOT(linkClickedSlot_2()));
	QObject::connect(iframe_3, SIGNAL(onClick()), this, SLOT(linkClickedSlot_3()));
	QObject::connect(iframe_4, SIGNAL(onClick()), this, SLOT(linkClickedSlot_4()));
	QObject::connect(iframe_5, SIGNAL(onClick()), this, SLOT(linkClickedSlot_5()));
	QObject::connect(iframe_6, SIGNAL(onClick()), this, SLOT(linkClickedSlot_6()));
	QObject::connect(iframe_7, SIGNAL(onClick()), this, SLOT(linkClickedSlot_7()));
	QObject::connect(iframe_8, SIGNAL(onClick()), this, SLOT(linkClickedSlot_8()));
	QObject::connect(iframe_9, SIGNAL(onClick()), this, SLOT(linkClickedSlot_9()));

	webtimer->start();

	emit timerTickSlot_1();
	emit timerTickSlot_2();
	emit timerTickSlot_3();
	emit timerTickSlot_4();
	emit timerTickSlot_5();
	emit timerTickSlot_6();
	emit timerTickSlot_7();
	emit timerTickSlot_8();
	emit timerTickSlot_9();


	//NewsDialog
}

void NewsDialog::timerTickSlot_1()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_1 = unixtime;
	
	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/1/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_1->clear();
				this->iframe_1->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_2()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_2 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/2/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_2->clear();
				this->iframe_2->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_3()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_3 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/3/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_3->clear();
				this->iframe_3->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_4()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_4 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/4/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_4->clear();
				this->iframe_4->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_5()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_5 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/5/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_5->clear();
				this->iframe_5->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_6()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_6 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/6/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_6->clear();
				this->iframe_6->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_7()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_7 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/7/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_7->clear();
				this->iframe_7->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_8()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_8 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/8/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_8->clear();
				this->iframe_8->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}

void NewsDialog::timerTickSlot_9()
{
	QEventLoop loop;
	QNetworkAccessManager manager;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	uint unixtime = currentDateTime.toTime_t() / 30;
	timestmp_9 = unixtime;

	QNetworkReply *reply = manager.get(QNetworkRequest(QUrl(QString("http://178.62.76.63/images/box/9/?image=%1").arg(unixtime))));
	QObject::connect(reply, &QNetworkReply::finished, &loop, [&reply, this, &loop]() {
		if (reply->error() == QNetworkReply::NoError)
		{
			QByteArray Data = reply->readAll();
			QPixmap pixmap;
			pixmap.loadFromData(Data);
			if (!pixmap.isNull())
			{
				this->iframe_9->clear();
				this->iframe_9->setPixmap(pixmap);
			}
		}
		loop.quit();
	});

	loop.exec();
}


void NewsDialog::linkClickedSlot_1()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/1/?url=%1").arg(timestmp_1)));
}

void NewsDialog::linkClickedSlot_2()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/2/?url=%1").arg(timestmp_2)));
}

void NewsDialog::linkClickedSlot_3()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/3/?url=%1").arg(timestmp_3)));
}

void NewsDialog::linkClickedSlot_4()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/4/?url=%1").arg(timestmp_4)));
}

void NewsDialog::linkClickedSlot_5()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/5/?url=%1").arg(timestmp_5)));
}

void NewsDialog::linkClickedSlot_6()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/6/?url=%1").arg(timestmp_6)));
}

void NewsDialog::linkClickedSlot_7()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/7/?url=%1").arg(timestmp_7)));
}

void NewsDialog::linkClickedSlot_8()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/8/?url=%1").arg(timestmp_8)));
}

void NewsDialog::linkClickedSlot_9()
{
	QDesktopServices::openUrl(QUrl(QString("http://178.62.76.63/images/box/9/?url=%1").arg(timestmp_9)));
}

NewsDialog::~NewsDialog()
{
    delete ui;
}

void WebFrame_1::mousePressEvent(QMouseEvent* event)
{
	emit onClick();
}
