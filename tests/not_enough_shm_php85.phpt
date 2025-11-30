--TEST--
Error if cache structures cannot be allocated in SHM
--SKIPIF--
<?php
require_once(dirname(__FILE__) . '/skipif.inc');
if (PHP_VERSION_ID < 80500) die('skip Only for PHP >= 8.5');
if (PHP_OS_FAMILY === 'Windows') die('skip Stack trace output differs on Windows');
?>
--INI--
immutable_cache.enabled=1
immutable_cache.enable_cli=1
immutable_cache.shm_size=1M
immutable_cache.entries_hint=1000000
--FILE--
Irrelevant
--EXPECTF--
%A: Unable to allocate %d bytes of shared memory for cache structures. Either immutable_cache.shm_size is too small or immutable_cache.entries_hint too large in Unknown on line 0
Stack trace:
#0 {main}
