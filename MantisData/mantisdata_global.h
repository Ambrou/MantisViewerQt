#ifndef MANTISDATA_GLOBAL_H
#define MANTISDATA_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef MANTISDATA_LIB
# define MANTISDATA_EXPORT Q_DECL_EXPORT
#else
# define MANTISDATA_EXPORT Q_DECL_IMPORT
#endif

#endif // MANTISDATA_GLOBAL_H