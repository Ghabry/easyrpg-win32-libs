@echo off
echo EasyRPG Library Build System
msbuild.exe /? >NUL 2>&1 || (
  echo ERROR: This must be run from a Visual Studio Command Prompt.
  pause
  goto :EOF
)

if [%1]==[] (
    echo ERROR: Please provide a platform toolset ^(see README^)
    goto :EOF
)

set TARGETTOOLSET=%1

echo Compiling using toolset %TARGETTOOLSET%
echo.
@echo on
msbuild expat-2.1.0\expat100.sln /t:Clean;expatw_static /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2010\freetype.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild jpeg-9\jpeg100\jpeg.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmad-0.15.1b\msvc++100\libmad.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod100\mikmod.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libogg-1.3.0\win32\VS2010\libogg_static.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libpng-1.5.14\projects\vstudio\vstudio.sln /p:configuration=Debug /t:Clean;libpng /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:Clean;libvorbis /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:Clean;libvorbisfile /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman-0.32.4\pixman\pixman100\pixman.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL-1.2.15\VisualC100\SDL.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_image-1.2.12\VisualC100\SDL_image.sln /p:configuration=Debug /t:Clean;SDL_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Debug /t:Clean;native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Debug /t:Clean;SDL_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC100\SDL_ttf.sln /p:configuration=Debug /t:Clean;SDL_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2-2.0.1\VisualC\SDL_VS2010.sln /p:configuration=Debug /t:Clean;SDL2 /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2-2.0.1\VisualC\SDL_VS2010.sln /p:configuration=Debug /t:SDL2main /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_image-2.0.0\VisualC\SDL_image_VS2010.sln /p:configuration=Debug /t:Clean;SDL2_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer-2.0.0\VisualC\SDL_mixer_VS2010.sln /p:configuration=Debug /t:Clean;native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer-2.0.0\VisualC\SDL_mixer_VS2010.sln /p:configuration=Debug /t:Clean;SDL2_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_ttf-2.0.12\VisualC\SDL_ttf_VS2010.sln /p:configuration=Debug /t:Clean;SDL2_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild zlib-1.2.7\win32\zlib100\zlib.sln /t:Clean;Build /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF

msbuild expat-2.1.0\expat100.sln /t:Clean;expatw_static /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2010\freetype.sln /t:Clean;Build /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild jpeg-9\jpeg100\jpeg.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmad-0.15.1b\msvc++100\libmad.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod100\mikmod.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libogg-1.3.0\win32\VS2010\libogg_static.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libpng-1.5.14\projects\vstudio\vstudio.sln /p:configuration=Release /t:Clean;libpng /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:Clean;libvorbis /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:Clean;libvorbisfile /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman-0.32.4\pixman\pixman100\pixman.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL-1.2.15\VisualC100\SDL.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_image-1.2.12\VisualC100\SDL_image.sln /p:configuration=Release /t:Clean;SDL_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Release /t:Clean;native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Release /t:Clean;SDL_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC100\SDL_ttf.sln /p:configuration=Release /t:Clean;SDL_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2-2.0.1\VisualC\SDL_VS2010.sln /p:configuration=Release /t:Clean;SDL2 /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2-2.0.1\VisualC\SDL_VS2010.sln /p:configuration=Release /t:SDL2main /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_image-2.0.0\VisualC\SDL_image_VS2010.sln /p:configuration=Release /t:Clean;SDL2_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer-2.0.0\VisualC\SDL_mixer_VS2010.sln /p:configuration=Release /t:Clean;native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer-2.0.0\VisualC\SDL_mixer_VS2010.sln /p:configuration=Release /t:Clean;SDL2_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_ttf-2.0.12\VisualC\SDL_ttf_VS2010.sln /p:configuration=Release /t:Clean;SDL2_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild zlib-1.2.7\win32\zlib100\zlib.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF

include_gen.cmd
