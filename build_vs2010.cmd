@echo off
echo EasyRPG VS2010 Library Build System
msbuild.exe /? >NUL 2>&1 || (
  echo ERROR: This must be run from a Visual Studio Command Prompt.
  pause
  goto :EOF
)

set TARGETTOOLSET=v100
if [%1]==[] goto :DEFAULT
:NEWTOOLSET
set TARGETTOOLSET=%1

:DEFAULT
echo Compiling using toolset %TARGETTOOLSET%
echo.
@echo on
msbuild expat-2.1.0\expat100.sln /t:expatw_static /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2010\freetype.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild jpeg-9\jpeg100\jpeg.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmad-0.15.1b\msvc++100\libmad.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod100\mikmod.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libogg-1.3.0\win32\VS2010\libogg_static.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libpng-1.5.14\projects\vstudio\vstudio.sln /p:configuration=Debug /t:libpng /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:libvorbis /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:libvorbisfile /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman-0.28.2\pixman\pixman100\pixman.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL-1.2.15\VisualC100\SDL.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_image-1.2.12\VisualC100\SDL_image.sln /p:configuration=Debug /t:SDL_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Debug /t:native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Debug /t:SDL_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC100\SDL_ttf.sln /p:configuration=Debug /t:SDL_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild zlib-1.2.7\win32\zlib100\zlib.sln /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF

msbuild expat-2.1.0\expat100.sln /t:expatw_static /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2010\freetype.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild jpeg-9\jpeg100\jpeg.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmad-0.15.1b\msvc++100\libmad.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod100\mikmod.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libogg-1.3.0\win32\VS2010\libogg_static.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libpng-1.5.14\projects\vstudio\vstudio.sln /p:configuration=Release /t:libpng /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:libvorbis /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:libvorbisfile /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman-0.28.2\pixman\pixman100\pixman.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL-1.2.15\VisualC100\SDL.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_image-1.2.12\VisualC100\SDL_image.sln /p:configuration=Release /t:SDL_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Release /t:native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Release /t:SDL_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC100\SDL_ttf.sln /p:configuration=Release /t:SDL_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild zlib-1.2.7\win32\zlib100\zlib.sln /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF

include_gen.cmd vs2010
