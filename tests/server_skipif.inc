<?php
require_once(__DIR__ . '/skipif.inc');
if (getenv('USE_ZEND_ALLOC') === '0' && PHP_INT_SIZE === 4) {
    die('skip https://bugs.launchpad.net/ubuntu/+source/valgrind/+bug/1877963');
}
