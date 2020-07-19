#include <QtQuick>

Q_IMPORT_PLUGIN(QsgEpaperPlugin)

int main(int argc, char *argv[])
{
    qputenv("QMLSCENE_DEVICE", "epaper");
    qputenv("QT_QPA_PLATFORM", "epaper:enable_fonts");

    QGuiApplication app(argc, argv);
    QQuickView view;

    view.rootContext()->setContextProperty("screenGeometry", app.primaryScreen()->geometry());
    view.setSource(QDir(QGuiApplication::applicationDirPath()).filePath("Main.qml"));
    view.show();

    qDebug() << "view shown";
    return app.exec();
}
