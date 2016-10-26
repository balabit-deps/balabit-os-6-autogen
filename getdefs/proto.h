/* -*- buffer-read-only: t -*- vi: set ro:
 *
 * Prototypes for getdefs
 * Generated Sun Dec  6 16:04:16 PST 2015
 */
#ifndef GETDEFS_PROTO_H_GUARD
#define GETDEFS_PROTO_H_GUARD 1

/*
 *  Extracted from gdemit.c
 */
static char *
emitDefinition(char * pzDef, char * pzOut);

/*
 *  Extracted from gdinit.c
 */
static void
die(char const * fmt, ...);

static void
fserr_die(char const * fmt, ...);

static void
processEmbeddedOptions(char * pzText);

static void
validateOptions(void);

/*
 *  Extracted from getdefs.c
 */
static char *
loadFile(char const * pzFname);

#endif /* GETDEFS_PROTO_H_GUARD */
