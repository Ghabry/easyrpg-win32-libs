@echo off
echo EasyRPG Include File Copier
msbuild.exe /? >NUL 2>&1 || (
  echo ERROR: This must be run from a Visual Studio Command Prompt.
  pause
  goto :EOF
)

if [%1]==[] goto :ERR
if %1==vs2005 goto :COPY
if %1==vs2010 goto :COPY

:ERR
echo ERROR: This script is not designed to be run directly.
goto :EOF

:COPY
xcopy /Y /I expat-2.1.0\lib\expat*.h %1\include
xcopy /Y /S freetype-2.4.11\include %1\include
xcopy /Y jpeg-9\j*.h %1\include
xcopy /Y libmad-0.15.1b\*.h %1\include
xcopy /Y libmikmod-3.2.0\include\*.h %1\include
xcopy /Y /I libogg-1.3.0\include\ogg\*.h %1\include\ogg
xcopy /Y libpng-1.5.14\*.h %1\include
xcopy /Y /I libvorbis-1.3.3\include\vorbis\*.h %1\include\vorbis
xcopy /Y pixman-0.28.2\pixman\pixman*.h %1\include
xcopy /Y SDL-1.2.15\include\*.h %1\include
xcopy /Y SDL_image-1.2.12\SDL_*.h %1\include
xcopy /Y SDL_mixer-1.2.12\SDL_*.h %1\include
xcopy /Y SDL_ttf-2.0.11\SDL_*.h %1\include
xcopy /Y zlib-1.2.7\z*.h %1\include

if %1==vs2005 (
  xcopy /Y /I dxsdk\lib\x86 %1\lib\release
)

if %1==vs2010 (
  xcopy /Y /I dxsdk\lib\x86 %1\lib\x86\debug
  xcopy /Y /I dxsdk\lib\x86 %1\lib\x86\release
  xcopy /Y /I dxsdk\lib\amd64 %1\lib\amd64\debug
  xcopy /Y /I dxsdk\lib\amd64 %1\lib\amd64\release
)
