# visual-Leak-Detector
利用Visual Leak Detector实现内存泄漏定位

### 地址

主页：<http://vld.codeplex.com/>

github：<https://github.com/KindDragon/vld>



### 编译

利用vs2010打开解决方案，并且修改属性为vs100,编译.生成vld.lib与vld_X86.dll文件.

工程引用头文件和lib,在文件中包含<vid.h>即可

### 运行

与exe相同目录下放入vld_X86.dll,和Microsoft.DTfW.DHL.manifest,将vld.ini文件修改配置，则会在exe当前路径下生成log文件.



通过配置vld.ini文件可以监听第三方模块的内存泄漏问题，如dll，exe等,如下

![1562727207220](.\include\1562727207220.png)



### Demo测试

手动创建一个Com,当不启用第三方模块检测时，调用结束后会提示没有内存泄漏，当启用第三方模块检测时，调用后会在日志中输出内存泄漏,并在日志中定位到Com的内存泄漏位置.