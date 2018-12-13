#ifndef WG_GLOBAL_H
#define WG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(WG_LIBRARY)
#  define WGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define WGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // WG_GLOBAL_H
