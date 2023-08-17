
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_CODEGUARD_H
#define PHP_CODEGUARD_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_CODEGUARD_NAME        "Codeguard - Source Code Security"
#define PHP_CODEGUARD_VERSION     "0.4.2b"
#define PHP_CODEGUARD_EXTNAME     "codeguard"
#define PHP_CODEGUARD_AUTHOR      "Giovanne Oliveira"
#define PHP_CODEGUARD_ZEPVERSION  "0.12.19-$Id$"
#define PHP_CODEGUARD_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(codeguard)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(codeguard)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(codeguard)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(codeguard, v)
#else
	#define ZEPHIR_GLOBAL(v) (codeguard_globals.v)
#endif

#ifdef ZTS
	ZEND_TSRMLS_CACHE_EXTERN()
	#define ZEPHIR_VGLOBAL ((zend_codeguard_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(codeguard_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(codeguard_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def codeguard_globals
#define zend_zephir_globals_def zend_codeguard_globals

extern zend_module_entry codeguard_module_entry;
#define phpext_codeguard_ptr &codeguard_module_entry

#endif
