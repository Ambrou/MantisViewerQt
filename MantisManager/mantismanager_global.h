#ifndef MANTISMANAGER_GLOBAL_H
#define MANTISMANAGER_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef MANTISMANAGER_LIB
# define MANTISMANAGER_EXPORT Q_DECL_EXPORT
#else
# define MANTISMANAGER_EXPORT Q_DECL_IMPORT
#endif

#endif // MANTISMANAGER_GLOBAL_H
