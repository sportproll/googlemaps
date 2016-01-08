#include "qgeotiledmapgooglemaps.h"
#include "qgeotiledmappingmanagerenginegooglemaps.h"
#include "QtLocation/private/qgeomapcontroller_p.h"

#include <QDebug>
#include <QObject>
#include <QColor>
#include <QFont>
#include <QPainter>
#include <QImage>
#include <QRect>

#include <QStaticText>

QT_BEGIN_NAMESPACE

/*!
 Constructs a new tiled map data object, which stores the map data required by
 \a geoMap and makes use of the functionality provided by \a engine.
 */
QGeoTiledMapGooglemaps::QGeoTiledMapGooglemaps(QGeoTiledMappingManagerEngineGooglemaps *engine, QObject *parent /*= 0*/) :
    QGeoTiledMap(engine, parent),
    m_engine(engine)
{}

QGeoTiledMapGooglemaps::~QGeoTiledMapGooglemaps() {}

void QGeoTiledMapGooglemaps::evaluateCopyrights(const QSet<QGeoTileSpec> &visibleTiles)
{
    Q_UNUSED(visibleTiles);
}

QT_END_NAMESPACE
