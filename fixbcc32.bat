@echo off
rem
rem  Sets up the Allegro package for building with Borland C++Builder.
rem  Simply writes a new makefile to point to BCC32-specific stuff.
rem

echo Converting Allegro files to Windows (BCC32) format...

echo # generated by fixbcc32.bat > makefile
echo MAKEFILE_INC = makefile.bcc >> makefile
echo include makefile.all >> makefile

echo Done!
