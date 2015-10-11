@echo off
echo EasyRPG Build System - ICU4C

msbuild.exe /? >NUL 2>&1 || (
  echo ERROR: This must be run from a Visual Studio Command Prompt.
  pause
  goto :EOF
)

set PATH=%CD%/../msys/bin;%PATH%
pushd source
sh runConfigureICU --enable-debug --disable-release Cygwin/MSVC --enable-static --disable-shared --disable-tests --disable-samples --with-data-packaging=static --prefix "$PWD/../lib"
make clean
make
if "%Platform%"=="X64" (
  xcopy /Y /I lib\*.lib ..\..\build\lib\x64\Debug
) else (
  xcopy /Y /I lib\*.lib ..\..\build\lib\x86\Debug
)

del lib\*.lib
sh runConfigureICU Cygwin/MSVC --enable-static --disable-shared --disable-tests --disable-samples --with-data-packaging=static --prefix "$PWD/../lib"
make clean
make
if "%Platform%"=="X64" (
  xcopy /Y /I lib\*.lib ..\..\build\lib\x64\Release
) else (
  xcopy /Y /I lib\*.lib ..\..\build\lib\x86\Release
)
popd
