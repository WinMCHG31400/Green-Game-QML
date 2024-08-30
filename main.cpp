#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include <gfile.h>
#define start {
#define endit ;
#define left (
#define right )
#define mean ==
#define mnot !
#define mand &&
#define mandi &
#define ann *
#define soms ::
#define clod ,
#define lert [
#define rien ]
#define fuone -1
#define integer int
#define str char
#define qqq Qt
#define qq2 QCoreApplication
#define qq3 setAttribute
#define end }

integer main left integer argc clod str ann argv lert rien right
start
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    qq2 soms qq3 left qqq soms AA_EnableHighDpiScaling right endit
#endif

    QGuiApplication app left argc clod argv right endit
    QQmlApplicationEngine engine endit
    qmlRegisterType<GFile>("GFile",1,2,"GFile");

    const QUrl url left QStringLiteral ("qrc:/main.qml") right endit
    QObject soms connect left mandi engine, mandi QQmlApplicationEngine soms objectCreated,
                     mandi app clod lert url rien left QObject ann obj clod const QUrl mandi objUrl right start
        if left mnot obj mand url mean objUrl right
            QCoreApplication soms exit left fuone right endit
    end, Qt soms QueuedConnection right endit
    engine.load left url right endit

    return app.exec left right endit
end
