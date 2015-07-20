@echo off

REM This batch file compiles the lpsolve PHP extension for PHP with the Microsoft Visual C/C++ compiler under Windows
REM See http://archive.devnewz.com/2002/0909.html and http://archive.devnewz.com/090902b.html
REM http://www.devarticles.com/c/a/Cplusplus/Developing-Custom-PHP-Extensions-Part-1/
REM http://www.devarticles.com/c/a/Cplusplus/Developing-Custom-PHP-Extensions-Part-1/1/
REM http://www.devarticles.com/c/a/Cplusplus/Developing-Custom-PHP-Extensions-Part-1/2/
REM http://www.devarticles.com/c/a/Cplusplus/Developing-Custom-PHP-Extensions-Part-1/3/
REM http://www.devarticles.com/c/a/Cplusplus/Developing-Custom-PHP-Extensions-Part-1/4/
REM http://www.talkphp.com/vbarticles.php?do=article&articleid=49&title=creating-custom-php-extensions

set src=hash.c PHPmod.c lpsolve.c

set c=cl

set lp_solve=..\..
set php=F:\php-5.2.6
rem set php=E:\php\php-4.4.9

rem use /MT to remove dependence on msvcrt80.dll calls kernel libs directly about 200K larger dll.
set phpxts=%php%\php4ts.lib
set dir=php4
if exist %php%\Release_TS\php5ts.lib set phpxts=%php%\Release_TS\php5ts.lib
if exist %php%\Release_TS\php5ts.lib set dir=php5
if not exist %dir%\*.* md %dir%
%c% -I%lp_solve% -I%php% -I%php%\main -I%php%\Zend -I%php%\TSRM -I%php%\bindlib_w32 /LD /MT /O1 /Zp8 -D_WINDLL -D_USRDLL -DWIN32 -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -D"ZEND_DEBUG=0" -DCOMPILE_DL_PHPLPSOLVE55 -D"ZTS=1" -DZEND_WIN32 -DPHP_WIN32 -D"PHP=1" %src% %phpxts% %lp_solve%\lpsolve55\bin\win32\lpsolve55.lib /Fe%dir%\php_phplpsolve55.dll
if exist %php%\Release_TS\*.* copy %dir%\php_phplpsolve55.dll %php%\Release_TS
if exist %php%\extensions\*.* copy %dir%\php_phplpsolve55.dll %php%\extensions
