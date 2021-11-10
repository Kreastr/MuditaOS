// Copyright (c) 2017-2021, Mudita Sp. z.o.o. All rights reserved.
// For licensing, see https://github.com/mudita/MuditaOS/LICENSE.md

#include <logdump/logdump.h>
#include <purefs/filesystem_paths.hpp>
#include <Logger.hpp>

int dumpLogs()
{
    const auto logPath = purefs::dir::getLogsPath() / LOG_FILE_NAME;
    return Log::Logger::get().dumpToFile(std::move(logPath));
}
