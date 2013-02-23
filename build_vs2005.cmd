@echo off
echo EasyRPG VS2005 Library Build System
msbuild.exe /? >NUL 2>&1 || (
  echo ERROR: This must be run from a Visual Studio Command Prompt.
  pause
  goto :EOF
)

set TARGETTOOLSET=v80
if [%1]==[] goto :DEFAULT
:NEWTOOLSET
set TARGETTOOLSET=%1

@echo on
:DEFAULT
echo Compiling using toolset %TARGETTOOLSET%
echo.
msbuild expat-2.1.0\expat.sln /t:expatw_static /p:configuration=release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2005\freetype.sln /p:configuration=LIB_Release_Multithreaded /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild jpeg-9\jpeg\jpeg.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmad-0.15.1b\msvc++\libmad.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod\mikmod.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libogg-1.3.0\win32\VS2005\libogg_static.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libpng-1.5.14\projects\visualc71\libpng.sln /p:configuration=LIB_Release /t:libpng /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2005\vorbis_static.sln /p:configuration=Release /t:libvorbis /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2005\vorbis_static.sln /p:configuration=Release /t:libvorbisfile /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman-0.28.2\pixman\pixman\pixman.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman-0.28.2\pixman\pixman\pixman.sln /p:configuration=Release_MMX /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL-1.2.15\VisualC\SDL.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_image-1.2.12\VisualC\SDL_image.sln /p:configuration=Release /t:SDL_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC\SDL_mixer.sln /p:configuration=Release /t:native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC\SDL_ttf.sln /p:configuration=Release /t:SDL_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC\SDL_ttf.sln /p:configuration=Release /t:SDL_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild zlib-1.2.7\win32\zlib\zlib.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF

include_gen.cmd vs2005
