@echo off
echo EasyRPG Include File Copier

xcopy /Y /I expat\lib\expat*.h build\include
xcopy /Y /S freetype\include build\include
xcopy /Y libmad\*.h build\include
xcopy /Y libmodplug\src\*.h build\include
xcopy /Y /I libogg\include\ogg\*.h build\include\ogg
xcopy /Y libpng\*.h build\include
xcopy /Y /I libvorbis\include\vorbis\*.h build\include\vorbis
xcopy /Y pixman\pixman\pixman*.h build\include
xcopy /Y zlib\z*.h build\include
xcopy /Y SDL2\include\*.h build\include
xcopy /Y SDL2_image\SDL_*.h build\include
xcopy /Y SDL2_mixer\SDL_*.h build\include
xcopy /Y SDL2_ttf\SDL_*.h build\include
xcopy /Y /I icu4c\source\common\unicode build\include\unicode
xcopy /Y /I icu4c\source\i18n\unicode build\include\unicode
