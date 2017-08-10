cd "d:\04 - my\projects\my\appsoft\smart grid\sgscada\SendData"
7z.exe a -tzip -r senddata.zip "Properties" *.cs *.csproj *.sln *.suo "bin\release\senddata.exe"
move /Y senddata.zip "..\web\Examples"
