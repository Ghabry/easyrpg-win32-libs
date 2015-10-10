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
msbuild expat\expat100.sln /t:Clean;expatw_static /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild freetype\builds\win32\vc2010\freetype.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild jpeg\jpeg100\jpeg.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmad\msvc++100\libmad.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmikmod\win32\mikmod100\mikmod.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libogg\win32\VS2010\libogg_static.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libpng\projects\vstudio\vstudio.sln /p:configuration=Debug /t:Clean;libpng /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:Clean;libvorbis /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:Clean;libvorbisfile /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman\pixman\pixman100\pixman.sln /p:configuration=Debug /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL_ttf\VisualC100\SDL_ttf.sln /p:configuration=Debug /t:Clean;SDL_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2\VisualC\SDL_VS2010.sln /p:configuration=Debug /t:Clean;SDL2 /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2\VisualC\SDL_VS2010.sln /p:configuration=Debug /t:SDL2main /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_image\VisualC\SDL_image_VS2010.sln /p:configuration=Debug /t:Clean;SDL2_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer\VisualC\SDL_mixer_VS2010.sln /p:configuration=Debug /t:Clean;native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer\VisualC\SDL_mixer_VS2010.sln /p:configuration=Debug /t:Clean;SDL2_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_ttf\VisualC\SDL_ttf_VS2010.sln /p:configuration=Debug /t:Clean;SDL2_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild zlib\win32\zlib100\zlib.sln /t:Clean;Build /p:configuration=Debug /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF

msbuild expat\expat100.sln /t:Clean;expatw_static /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild freetype\builds\win32\vc2010\freetype.sln /t:Clean;Build /p:configuration=Release /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild jpeg\jpeg100\jpeg.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmad\msvc++100\libmad.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libmikmod\win32\mikmod100\mikmod.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libogg\win32\VS2010\libogg_static.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libpng\projects\vstudio\vstudio.sln /p:configuration=Release /t:Clean;libpng /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:Clean;libvorbis /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild libvorbis\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:Clean;libvorbisfile /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild pixman\pixman\pixman100\pixman.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2\VisualC\SDL_VS2010.sln /p:configuration=Release /t:Clean;SDL2 /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2\VisualC\SDL_VS2010.sln /p:configuration=Release /t:SDL2main /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_image\VisualC\SDL_image_VS2010.sln /p:configuration=Release /t:Clean;SDL2_image /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer\VisualC\SDL_mixer_VS2010.sln /p:configuration=Release /t:Clean;native_midi /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_mixer\VisualC\SDL_mixer_VS2010.sln /p:configuration=Release /t:Clean;SDL2_mixer /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild SDL2_ttf\VisualC\SDL_ttf_VS2010.sln /p:configuration=Release /t:Clean;SDL2_ttf /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF
msbuild zlib\win32\zlib100\zlib.sln /p:configuration=Release /t:Clean;Build /p:PlatformToolset=%TARGETTOOLSET% || goto :EOF

pushd icu4c
call build_icu.cmd
popd

include_gen.cmd
