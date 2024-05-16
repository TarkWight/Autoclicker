@echo off
setlocal

REM Создаем директорию build, если ее нет
if not exist build (
    mkdir build
)

cd build

REM Запускаем CMake с генерацией проекта для Visual Studio 2022
cmake -G "Visual Studio 17 2022" -A x64 ..

REM Компилируем проект в конфигурации Debug и указываем целевой проект Autoclicker
cmake --build . --config Debug --target Autoclicker

endlocal
pause
