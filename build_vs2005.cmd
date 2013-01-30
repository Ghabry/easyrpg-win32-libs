@echo off
msbuild.exe /? >NUL 2>&1 || (
  echo ERROR This must be run from a Visual Studio Command Prompt.
  pause
  goto :EOF
)
echo EasyRPG VS2005 Library Build System
IF NOT EXIST dx5sdk/include/ddraw.h goto :DXERR
IF NOT EXIST dx5sdk/lib/dxguid.lib goto :DXERR
goto :NOERR

:DXERR
echo ERROR: dx5sdk not found
goto :EOF

:NOERR
@echo on
msbuild expat-2.1.0\expat.sln /t:expatw_static /p:configuration=release
msbuild freetype-2.4.11\builds\win32\vc2005\freetype.sln /p:configuration=LIB_Release_Multithreaded
msbuild jpeg-9\jpeg\jpeg.sln /p:configuration=Release
msbuild libmad-0.15.1b\msvc++\libmad.sln /p:configuration=Release
msbuild libogg-1.3.0\win32\VS2005\libogg_static.sln /p:configuration=Release
msbuild libpng-1.5.14\projects\visualc71\libpng.sln /p:configuration=LIB_Release /t:libpng
msbuild libvorbis-1.3.3\win32\VS2005\vorbis_static.sln /p:configuration=Release /t:libvorbis
msbuild libvorbis-1.3.3\win32\VS2005\vorbis_static.sln /p:configuration=Release /t:libvorbisfile
msbuild pixman-0.28.2\pixman\pixman\pixman.sln /p:configuration=Release
msbuild pixman-0.28.2\pixman\pixman\pixman.sln /p:configuration=Release_MMX
msbuild SDL-1.2.15\VisualC\SDL.sln /p:configuration=Release
msbuild SDL_image-1.2.12\VisualC\SDL_image.sln /p:configuration=Release /t:SDL_image
msbuild SDL_mixer-1.2.12\VisualC\SDL_mixer.sln /p:configuration=Release /t:native_midi
msbuild SDL_mixer-1.2.12\VisualC\SDL_mixer.sln /p:configuration=Release /t:SDL_mixer
msbuild SDL_ttf-2.0.11\VisualC\SDL_ttf.sln /p:configuration=Release /t:SDL_ttf
msbuild smpeg-r398\VisualC\smpeg.sln /p:configuration=Release /t:smpeg
msbuild zlib-1.2.7\win32\zlib\zlib.sln /p:configuration=Release
