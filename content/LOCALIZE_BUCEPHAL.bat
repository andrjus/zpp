SET ROBOSDPP_CONTENT=E:\SOURCETREE\robosd++\content
SET ROBOSDPP=%ROBOSDPP_CONTENT%\source

chcp 1251 

set settings=%COMPUTERNAME%
set settings=%settings::=,%
set settings=%settings:.=,%
set settings=%CD%\settings\%settings%

SET P=%CD%

cd /D "%~dp0"

if not EXIST reference (
	MD   reference 
)

IF EXIST ".\reference\robosdpp-ref"  RMDIR ".\reference\robosdpp-ref"
MKLINK /J ".\reference\robosdpp-ref"  "%ROBOSDPP%"  


if not EXIST settings (
	MD   settings 
)

if not EXIST "%settings%" (
	MD   "%settings%" 
)

IF EXIST ".\reference\settings-ref"  RMDIR ".\reference\settings-ref"
MKLINK /J ".\reference\settings-ref"  "%settings%"  

IF EXIST ".\app\zppm\projects\XMC4800-F144\Dave\GENERATED"  RMDIR ".\app\zppm\projects\XMC4800-F144\Dave\GENERATED
MKLINK /J ".\app\zppm\projects\XMC4800-F144\Dave\GENERATED"  ".\app\zppm\source\platform\XMC4800-F144+DAVE\GENERATED"

CD %P%