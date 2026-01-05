@echo off
path .\jre-17.0.2\bin;%path%;
:start
cls
java Guessing
pause
goto start