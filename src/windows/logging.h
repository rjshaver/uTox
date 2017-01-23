#include <stdio.h>

#define debug(...) (utox_verbosity() >= LOG_LVL_DEBUG) ? (printf(__VA_ARGS__) & fflush(stdout)) : (0)
#define debug_info(...) (utox_verbosity() >= LOG_LVL_INFO) ? (printf(__VA_ARGS__) & fflush(stdout)) : (0)
#define debug_notice(...) (utox_verbosity() >= LOG_LVL_NOTICE) ? (printf(__VA_ARGS__) & fflush(stdout)) : (0)
#define debug_warning(...) (utox_verbosity() >= LOG_LVL_WARNING) ? (printf(__VA_ARGS__) & fflush(stdout)) : (0)
#define debug_error(...) (utox_verbosity() >= LOG_LVL_ERROR) ? (printf(__VA_ARGS__) & fflush(stdout)) : (0)
