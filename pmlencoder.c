
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "pmlencoder.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *pmlencoder_cryptography_ce;

ZEND_DECLARE_MODULE_GLOBALS(pmlencoder)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(pmlencoder)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(PMLEncoder_Cryptography);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(pmlencoder)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_pmlencoder_globals *pmlencoder_globals TSRMLS_DC)
{
	pmlencoder_globals->initialized = 0;

	/* Cache Enabled */
	pmlencoder_globals->cache_enabled = 1;

	/* Recursive Lock */
	pmlencoder_globals->recursive_lock = 0;

	/* Static cache */
	memset(pmlencoder_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_pmlencoder_globals *pmlencoder_globals TSRMLS_DC)
{
	
}

static PHP_RINIT_FUNCTION(pmlencoder)
{
	zend_pmlencoder_globals *pmlencoder_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	pmlencoder_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(pmlencoder_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(pmlencoder_globals_ptr TSRMLS_CC);

		zephir_init_static_properties_PMLEncoder_Cryptography(TSRMLS_C);
	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(pmlencoder)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(pmlencoder)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_PMLENCODER_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_PMLENCODER_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_PMLENCODER_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_PMLENCODER_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_PMLENCODER_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(pmlencoder)
{
	php_zephir_init_globals(pmlencoder_globals TSRMLS_CC);
	php_zephir_init_module_globals(pmlencoder_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(pmlencoder)
{
	
}


zend_function_entry php_pmlencoder_functions[] = {
	ZEND_FE_END

};

static const zend_module_dep php_pmlencoder_deps[] = {
	ZEND_MOD_REQUIRED("openssl")
	ZEND_MOD_REQUIRED("json")
	ZEND_MOD_END
};

zend_module_entry pmlencoder_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	php_pmlencoder_deps,
	PHP_PMLENCODER_EXTNAME,
	php_pmlencoder_functions,
	PHP_MINIT(pmlencoder),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(pmlencoder),
#else
	NULL,
#endif
	PHP_RINIT(pmlencoder),
	PHP_RSHUTDOWN(pmlencoder),
	PHP_MINFO(pmlencoder),
	PHP_PMLENCODER_VERSION,
	ZEND_MODULE_GLOBALS(pmlencoder),
	PHP_GINIT(pmlencoder),
	PHP_GSHUTDOWN(pmlencoder),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(pmlencoder),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_PMLENCODER
ZEND_GET_MODULE(pmlencoder)
#endif
