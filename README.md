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







