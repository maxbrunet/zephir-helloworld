
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "helloworld.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *helloworld_greeting_ce;

ZEND_DECLARE_MODULE_GLOBALS(helloworld)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(helloworld)
{
	REGISTER_INI_ENTRIES();
	zephir_module_init();
	ZEPHIR_INIT(Helloworld_Greeting);
	
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(helloworld)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_helloworld_globals *helloworld_globals TSRMLS_DC)
{
	helloworld_globals->initialized = 0;

	/* Memory options */
	helloworld_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	helloworld_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	helloworld_globals->cache_enabled = 1;

	/* Recursive Lock */
	helloworld_globals->recursive_lock = 0;

	/* Static cache */
	memset(helloworld_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);

	
	
}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_helloworld_globals *helloworld_globals TSRMLS_DC)
{
	
}

static PHP_RINIT_FUNCTION(helloworld)
{
	zend_helloworld_globals *helloworld_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	helloworld_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(helloworld_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(helloworld_globals_ptr TSRMLS_CC);

	
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(helloworld)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}



static PHP_MINFO_FUNCTION(helloworld)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_HELLOWORLD_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_HELLOWORLD_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_HELLOWORLD_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_HELLOWORLD_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_HELLOWORLD_ZEPVERSION);
	php_info_print_table_end();
	
	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(helloworld)
{
	php_zephir_init_globals(helloworld_globals TSRMLS_CC);
	php_zephir_init_module_globals(helloworld_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(helloworld)
{
	
}


zend_function_entry php_helloworld_functions[] = {
	ZEND_FE_END

};

zend_module_entry helloworld_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_HELLOWORLD_EXTNAME,
	php_helloworld_functions,
	PHP_MINIT(helloworld),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(helloworld),
#else
	NULL,
#endif
	PHP_RINIT(helloworld),
	PHP_RSHUTDOWN(helloworld),
	PHP_MINFO(helloworld),
	PHP_HELLOWORLD_VERSION,
	ZEND_MODULE_GLOBALS(helloworld),
	PHP_GINIT(helloworld),
	PHP_GSHUTDOWN(helloworld),
#ifdef ZEPHIR_POST_REQUEST
	PHP_PRSHUTDOWN(helloworld),
#else
	NULL,
#endif
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_HELLOWORLD
ZEND_GET_MODULE(helloworld)
#endif
