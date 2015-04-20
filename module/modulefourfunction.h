#ifndef MODULE_FOUR_FUNCTION_H
#define MODULE_FOUR_FUNCTION_H

#include <QMap>
#include <QMultiMap>
#include <QSet>
#include <QPair>
#include <QString>


class ModuleFourFunction {
	QSet<QString> set;
	QMultiMap<QString,QString> R;    //用来保存关系,因为关系存在一对多
	QMap< QPair<QString, QString>, int> matrix;      //用来保存关系矩阵，可以理解为三元组
private:
	QString deBlank(const QString &strs);
	QString deSymbol(const QString &strs);
public:
	ModuleFourFunction(QString strSet, QString strR);
   	QString relations();
};

#endif
