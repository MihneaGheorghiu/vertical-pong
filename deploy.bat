::copy executable
xcopy "d:\programe c\Pong\Debug\Pong.exe" "d:\programe c\Pong\pong_deploy\vertical-pong.exe" /Y
::copy dll, only once, should comment line
xcopy "d:\programe c\Pong\*.dll" "d:\programe c\Pong\pong_deploy" /Y
::copy font, neede only once
xcopy "d:\programe c\Pong\DS-DIGIT.TTF" "d:\programe c\Pong\pong_deploy" /Y