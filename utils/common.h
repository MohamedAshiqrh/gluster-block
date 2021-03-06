/*
  Copyright (c) 2016 Red Hat, Inc. <http://www.redhat.com>
  This file is part of gluster-block.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/


# ifndef   _COMMON_H
# define   _COMMON_H   1

# include "utils.h"
# include "block.h"

# define  GB_LOGDIR              DATADIR "/log/gluster-block"
# define  GB_INFODIR             DATADIR "/run"

# define  GB_LOCK_FILE           GB_INFODIR "/gluster-blockd.lock"
# define  GB_UNIX_ADDRESS        GB_INFODIR "/gluster-blockd.socket"
# define  GB_TCP_PORT            24006

# define  DAEMON_LOG_FILE        GB_LOGDIR "/gluster-blockd.log"
# define  CLI_LOG_FILE           GB_LOGDIR "/gluster-block-cli.log"
#define   DEVNULLPATH            "/dev/null"

# define  GFAPI_LOG_FILE         GB_LOGDIR "/gluster-block-gfapi.log"
# define  GFAPI_LOG_LEVEL        7

# define  CONFIGSHELL_LOG_FILE   GB_LOGDIR "/gluster-block-configshell.log"

# define  GB_METADIR             "/block-meta"
# define  GB_STOREDIR            "/block-store"
# define  GB_TXLOCKFILE          "meta.lock"

# define  SUN_PATH_MAX           (sizeof(struct sockaddr_un) - sizeof(unsigned short int)) /*sun_family*/


static const char *const JsonResponseFormatLookup[] = {
  [GB_JSON_NONE]            = "",

  [GB_JSON_PLAIN]    = "--json-plain",
  [GB_JSON_SPACED]   = "--json-spaced",
  [GB_JSON_PRETTY]   = "--json-pretty",
  [GB_JSON_DEFAULT]  = "--json",

  [GB_JSON_MAX]             = NULL,
};


enum JsonResponseFormat jsonResponseFormatParse(const char *opt);

int convertStringToTrillianParse(const char *opt);

ssize_t glusterBlockCreateParseSize(const char *dom, char *value);

# endif /* _COMMON_H */
