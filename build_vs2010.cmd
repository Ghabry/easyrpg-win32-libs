@echo off
echo EasyRPG VS2010 Library Build System
msbuild.exe /? >NUL 2>&1 || (
  echo ERROR: This must be run from a Visual Studio Command Prompt.
  pause
  goto :EOF
)
IF NOT EXIST dx5sdk/include/ddraw.h goto :DXERR
IF NOT EXIST dx5sdk/lib/dxguid.lib goto :DXERR
goto :NOERR

:DXERR
echo ERROR: dx5sdk not found
goto :EOF

:NOERR
@echo on
msbuild expat-2.1.0\expat100.sln /t:expatw_static /p:configuration=Debug || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2010\freetype.sln /p:configuration=Debug || goto :EOF
msbuild jpeg-9\jpeg100\jpeg.sln /p:configuration=Debug || goto :EOF
msbuild libmad-0.15.1b\msvc++100\libmad.sln /p:configuration=Debug || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod100\mikmod.sln /p:configuration=Debug || goto :EOF
msbuild libogg-1.3.0\win32\VS2010\libogg_static.sln /p:configuration=Debug || goto :EOF
msbuild libpng-1.5.14\projects\vstudio\vstudio.sln /p:configuration=Debug /t:libpng || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:libvorbis || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Debug /t:libvorbisfile || goto :EOF
msbuild pixman-0.28.2\pixman\pixman100\pixman.sln /p:configuration=Debug || goto :EOF
msbuild SDL-1.2.15\VisualC100\SDL.sln /p:configuration=Debug || goto :EOF
msbuild SDL_image-1.2.12\VisualC100\SDL_image.sln /p:configuration=Debug /t:SDL_image || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Debug /t:native_midi || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Debug /t:SDL_mixer || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC100\SDL_ttf.sln /p:configuration=Debug /t:SDL_ttf || goto :EOF
msbuild zlib-1.2.7\win32\zlib100\zlib.sln /p:configuration=Debug || goto :EOF

msbuild expat-2.1.0\expat100.sln /t:expatw_static /p:configuration=Release || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2010\freetype.sln /p:configuration=Release || goto :EOF
msbuild jpeg-9\jpeg100\jpeg.sln /p:configuration=Release || goto :EOF
msbuild libmad-0.15.1b\msvc++100\libmad.sln /p:configuration=Release || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod100\mikmod.sln /p:configuration=Release || goto :EOF
msbuild libogg-1.3.0\win32\VS2010\libogg_static.sln /p:configuration=Release || goto :EOF
msbuild libpng-1.5.14\projects\vstudio\vstudio.sln /p:configuration=Release /t:libpng || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:libvorbis || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2010\vorbis_static.sln /p:configuration=Release /t:libvorbisfile || goto :EOF
msbuild pixman-0.28.2\pixman\pixman100\pixman.sln /p:configuration=Release || goto :EOF
msbuild SDL-1.2.15\VisualC100\SDL.sln /p:configuration=Release || goto :EOF
msbuild SDL_image-1.2.12\VisualC100\SDL_image.sln /p:configuration=Release /t:SDL_image || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Release /t:native_midi || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC100\SDL_mixer.sln /p:configuration=Release /t:SDL_mixer || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC100\SDL_ttf.sln /p:configuration=Release /t:SDL_ttf || goto :EOF
msbuild zlib-1.2.7\win32\zlib100\zlib.sln /p:configuration=Release || goto :EOF

include_gen.cmd vs2010
