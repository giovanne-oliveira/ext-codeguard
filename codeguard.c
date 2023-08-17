
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "codeguard.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *codeguard_loader_ce;

ZEND_DECLARE_MODULE_GLOBALS(codeguard)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(codeguard)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(CodeGuard_Loader);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(codeguard)
{
	
	zephir_deinitialize_memory();
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_codeguard_globals *codeguard_globals)
{
	codeguard_globals->initialized = 0;

	/* Cache Enabled */
	codeguard_globals->cache_enabled = 1;

	/* Recursive Lock */
	codeguard_globals->recursive_lock = 0;

	/* Static cache */
	memset(codeguard_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_codeguard_globals *codeguard_globals)
{
	
}

static PHP_RINIT_FUNCTION(codeguard)
{
	zend_codeguard_globals *codeguard_globals_ptr;
	codeguard_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(codeguard_globals_ptr);
	zephir_initialize_memory(codeguard_globals_ptr);

		zephir_init_static_properties_CodeGuard_Loader();
	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(codeguard)
{
	
	zephir_deinitialize_memory();
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(codeguard)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_CODEGUARD_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_CODEGUARD_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_CODEGUARD_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_CODEGUARD_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_CODEGUARD_ZEPVERSION);
	php_info_print_table_end();
		php_info_print_table_start();
	php_info_print_table_header(2, "Directive", "Value");
	php_info_print_table_row(2, "Code Encryption Capability", "true");
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(codeguard)
{
#if defined(COMPILE_DL_CODEGUARD) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	php_zephir_init_globals(codeguard_globals);
	php_zephir_init_module_globals(codeguard_globals);
}

static PHP_GSHUTDOWN_FUNCTION(codeguard)
{
	
}


zend_function_entry php_codeguard_functions[] = {
	ZEND_FE_END

};

static const zend_module_dep php_codeguard_deps[] = {
	ZEND_MOD_REQUIRED("openssl")
	ZEND_MOD_REQUIRED("json")
	ZEND_MOD_END
};

zend_module_entry codeguard_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	php_codeguard_deps,
	PHP_CODEGUARD_EXTNAME,
	php_codeguard_functions,
	PHP_MINIT(codeguard),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(codeguard),
#else
	NULL,
#endif
	PHP_RINIT(codeguard),
	PHP_RSHUTDOWN(codeguard),
	PHP_MINFO(codeguard),
	PHP_CODEGUARD_VERSION,
	ZEND_MODULE_GLOBALS(codeguard),
	PHP_GINIT(codeguard),
	PHP_GSHUTDOWN(codeguard),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(codeguard),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

/* implement standard "stub" routine to introduce ourselves to Zend */
#ifdef COMPILE_DL_CODEGUARD
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(codeguard)
#endif
