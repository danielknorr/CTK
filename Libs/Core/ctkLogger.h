/*=========================================================================

  Library:   CTK
 
  Copyright (c) 2010  Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 
=========================================================================*/

#ifndef __ctkLogger_h
#define __ctkLogger_h

// Qt includes 
#include <QObject>
#include <QSqlDatabase>

// CTK includes
#include "CTKCoreExport.h"

class CTK_CORE_EXPORT ctkLogger : public QObject
{
  Q_OBJECT
public:
  typedef QObject Superclass;
  explicit ctkLogger ( QString name, QObject* parent = 0 );
  virtual ~ctkLogger ();
  
  void debug ( QString s );
  void info ( QString s );
  void notice ( QString s );
  void warn ( QString s );
  void warning ( QString s );
  void error ( QString s );
  void crit ( QString s );
  void critical ( QString s );
  void alert ( QString s );
  void emerg ( QString s );
  void emergercy ( QString s );
  void fatal ( QString s );

  void setDebug();
  void setInfo();
  void setNotice();
  void setWarn();
  void setWarning();
  void setError();
  void setCrit();
  void setCritical();
  void setAlert();
  void setEmerg();
  void setEmergercy();
  void setFatal();

  bool isDebugEnabled();
  bool isInfoEnabled();
  bool isNoticeEnabled();
  bool isWarnEnabled();
  bool isWarningEnabled();
  bool isErrorEnabled();
  bool isCritEnabled();
  bool isCriticalEnabled();
  bool isAlertEnabled();
  bool isEmergEnabled();
  bool isEmergercyEnabled();
  bool isFatalEnabled();

private:
  class ctkInternal;
  ctkInternal *Internal;
};

#endif
