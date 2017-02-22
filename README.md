# CTPdotNetWrapper

[![Build status](https://ci.appveyor.com/api/projects/status/biiillpk0ar6stv7?svg=true)](https://ci.appveyor.com/project/joychin/ctpdotnetwrapper)

20160606版本的CTP

CTP.dll
将非托管C++库转换为托管库，供.Net程序调用。包括行情接口和交易接口。
Struct.h头文件修改自海风版C#的Struct.cs文件，非常感谢！


ThostTraderApi目录为上期CTP C++库

CTPMA 
为对应的各Multiple AppDomain版本

非MA版本用于跨AppDomain环境(比如RightEdge)时，会报错：
“无法跨 AppDomain 传递 GCHandle”
“Cannot pass a GCHandle across AppDomains”
其实就是gcroot<>指针无法正确的跨AppDomain传递
此时必须使用MA版本。

----------------------------
感谢shawn666.liu@gmail.com
