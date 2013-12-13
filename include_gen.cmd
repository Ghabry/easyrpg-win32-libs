@echo off
echo EasyRPG Include File Copier

xcopy /Y /I expat-2.1.0\lib\expat*.h build\include
xcopy /Y /S freetype-2.4.11\include build\include
xcopy /Y jpeg-9\j*.h build\include
xcopy /Y libmad-0.15.1b\*.h build\include
xcopy /Y libmikmod-3.2.0\include\*.h build\include
xcopy /Y /I libogg-1.3.0\include\ogg\*.h build\include\ogg
xcopy /Y libpng-1.5.14\*.h build\include
xcopy /Y /I libvorbis-1.3.3\include\vorbis\*.h build\include\vorbis
xcopy /Y pixman-0.32.4\pixman\pixman*.h build\include
xcopy /Y zlib-1.2.7\z*.h build\include
xcopy /Y SDL-1.2.15\include\*.h build\include\SDL1_2\
xcopy /Y SDL_image-1.2.12\SDL_*.h build\include\SDL1_2
xcopy /Y SDL_mixer-1.2.12\SDL_*.h build\include\SDL1_2
xcopy /Y SDL_ttf-2.0.11\SDL_*.h build\include\SDL1_2
xcopy /Y SDL2-2.0.1\include\*.h build\include\SDL2\
xcopy /Y SDL2_image-2.0.0\SDL_*.h build\include\SDL2
xcopy /Y SDL2_mixer-2.0.0\SDL_*.h build\include\SDL2
xcopy /Y SDL2_ttf-2.0.12\SDL_*.h build\include\SDL2
