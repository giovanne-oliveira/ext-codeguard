
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_PMLENCODER_H
#define PHP_PMLENCODER_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_PMLENCODER_NAME        "PHPMyLicense Encryption Encoder"
#define PHP_PMLENCODER_VERSION     "0.0.1"
#define PHP_PMLENCODER_EXTNAME     "pmlencoder"
#define PHP_PMLENCODER_AUTHOR      "Giovanne Oliveira"
#define PHP_PMLENCODER_ZEPVERSION  "0.12.8-42ea9f1"
#define PHP_PMLENCODER_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(pmlencoder)

	int initialized;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	
ZEND_END_MODULE_GLOBALS(pmlencoder)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(pmlencoder)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) ZEND_MODULE_GLOBALS_ACCESSOR(pmlencoder, v)
#else
	#define ZEPHIR_GLOBAL(v) (pmlencoder_globals.v)
#endif

#ifdef ZTS
	void ***tsrm_ls;
	#define ZEPHIR_VGLOBAL ((zend_pmlencoder_globals *) (*((void ***) tsrm_get_ls_cache()))[TSRM_UNSHUFFLE_RSRC_ID(pmlencoder_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(pmlencoder_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def pmlencoder_globals
#define zend_zephir_globals_def zend_pmlencoder_globals

extern zend_module_entry pmlencoder_module_entry;
#define phpext_pmlencoder_ptr &pmlencoder_module_entry

#endif
