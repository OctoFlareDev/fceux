@echo off
cd /d "%~dp0"

if "%~1"=="" (
  echo Drag a ROM file onto this BAT, or run:
  echo.
  echo   run-with-log.bat "C:\path\to\game.nes"
  echo.
  echo No ROM was passed, so fceux.exe would start, create its config folders, print usage, and exit.
  echo.
  pause
  exit /b 1
)

echo Running FCEUX... > fceux.log
echo Command: fceux.exe %* >> fceux.log
echo. >> fceux.log

fceux.exe %* >> fceux.log 2>&1
set EXITCODE=%ERRORLEVEL%

echo. >> fceux.log
echo Exit code: %EXITCODE% >> fceux.log
type fceux.log
echo.
echo Log written to %CD%\fceux.log
pause
exit /b %EXITCODE%
