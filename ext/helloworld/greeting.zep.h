
extern zend_class_entry *helloworld_greeting_ce;

ZEPHIR_INIT_CLASS(Helloworld_Greeting);

PHP_METHOD(Helloworld_Greeting, say);

ZEPHIR_INIT_FUNCS(helloworld_greeting_method_entry) {
	PHP_ME(Helloworld_Greeting, say, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
