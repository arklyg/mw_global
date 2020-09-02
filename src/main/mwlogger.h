// Micro Wave Global
// Copyright (c) 2015-2020, Ark Lee
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// You must obey the GNU General Public License in all respects for
// all of the code used.  If you modify file(s) with this exception, 
// you may extend this exception to your version of the file(s), but 
// you are not obligated to do so.  If you do not wish to do so, delete 
// this exception statement from your version. If you delete this exception 
// statement from all source files in the program, then also delete it here.
//
// Contact:  Ark Lee <arklee@houduan.online>
//           Beijing, China


#ifndef _MW_LOGGER_H_
#define _MW_LOGGER_H_

#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>
#include <iomanip>

#define LOG_TRACE(a, b) LOG4CPLUS_TRACE(a, b)
#define LOG_DEBUG(a, b) LOG4CPLUS_DEBUG(a, b)
#define LOG_INFO(a, b) LOG4CPLUS_INFO(a, b)
#define LOG_WARN(a, b) LOG4CPLUS_WARN(a, b)
#define LOG_ERROR(a, b) LOG4CPLUS_ERROR(a, b)
#define LOG_FATAL(a, b) LOG4CPLUS_FATAL(a, b)

#define LOGTRACE(b) LOG4CPLUS_TRACE(_logger, b)
#define LOGDEBUG(b) LOG4CPLUS_DEBUG(_logger, b)
#define LOGINFO(b) LOG4CPLUS_INFO(_logger, b)
#define LOGWARN(b) LOG4CPLUS_WARN(_logger, b)
#define LOGERROR(b) LOG4CPLUS_ERROR(_logger, b)
#define LOGFATAL(b) LOG4CPLUS_FATAL(_logger, b)

extern log4cplus::Logger _logger;

#define LOG_CONFIG_FILE_APPENDIX "_log4cplus.conf"

std::string GetConfigFileName(const std::string &programm_name);
void InitLogger(const std::string &programm_name);

#endif
