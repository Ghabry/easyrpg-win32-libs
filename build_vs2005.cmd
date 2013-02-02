@echo off
echo EasyRPG VS2005 Library Build System
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
msbuild expat-2.1.0\expat.sln /t:expatw_static /p:configuration=release || goto :EOF
msbuild freetype-2.4.11\builds\win32\vc2005\freetype.sln /p:configuration=LIB_Release_Multithreaded || goto :EOF
msbuild jpeg-9\jpeg\jpeg.sln /p:configuration=Release || goto :EOF
msbuild libmad-0.15.1b\msvc++\libmad.sln /p:configuration=Release || goto :EOF
msbuild libmikmod-3.2.0\win32\mikmod\mikmod.sln /p:configuration=Release || goto :EOF
msbuild libogg-1.3.0\win32\VS2005\libogg_static.sln /p:configuration=Release || goto :EOF
msbuild libpng-1.5.14\projects\visualc71\libpng.sln /p:configuration=LIB_Release /t:libpng || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2005\vorbis_static.sln /p:configuration=Release /t:libvorbis || goto :EOF
msbuild libvorbis-1.3.3\win32\VS2005\vorbis_static.sln /p:configuration=Release /t:libvorbisfile || goto :EOF
msbuild pixman-0.28.2\pixman\pixman\pixman.sln /p:configuration=Release || goto :EOF
msbuild pixman-0.28.2\pixman\pixman\pixman.sln /p:configuration=Release_MMX || goto :EOF
msbuild SDL-1.2.15\VisualC\SDL.sln /p:configuration=Release || goto :EOF
msbuild SDL_image-1.2.12\VisualC\SDL_image.sln /p:configuration=Release /t:SDL_image || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC\SDL_mixer.sln /p:configuration=Release /t:native_midi || goto :EOF
msbuild SDL_mixer-1.2.12\VisualC\SDL_mixer.sln /p:configuration=Release /t:SDL_mixer || goto :EOF
msbuild SDL_ttf-2.0.11\VisualC\SDL_ttf.sln /p:configuration=Release /t:SDL_ttf || goto :EOF
msbuild smpeg-r398\VisualC\smpeg.sln /p:configuration=Release /t:smpeg || goto :EOF
msbuild zlib-1.2.7\win32\zlib\zlib.sln /p:configuration=Release || goto :EOF

include_gen.cmd vs2005