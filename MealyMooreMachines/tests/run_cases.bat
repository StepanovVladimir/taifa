@echo off

set PROGRAM="%~1"
set TEST_DATA_DIR="test-data"
set TEMP_FILE="%TEMP%\out.txt"
set INPUTS_DIR="%TEST_DATA_DIR%\inputs"
set OUTPUTS_DIR="%TEST_DATA_DIR%\outputs"
set ANSWERS_DIR="%TEST_DATA_DIR%\answers"

%PROGRAM% %INPUTS_DIR%\input1.txt %OUTPUTS_DIR%\output1.txt
if ERRORLEVEL 1 goto err 
echo -- Run #1 case --

%PROGRAM% %INPUTS_DIR%\input2.txt %OUTPUTS_DIR%\output2.txt
if ERRORLEVEL 1 goto err 
echo -- Run #2 case --

%PROGRAM% %INPUTS_DIR%\input3.txt %OUTPUTS_DIR%\output3.txt
if ERRORLEVEL 1 goto err 
echo -- Run #3 case --

echo ----------------
exit 0

:err
echo Program run with failed failed
exit 1