# 配置指南

## 编译配置

### 调试配置

在调试本项目中的任何文件时，请将`CppProperties.json`设置为`Debug x86`

`CppProperties.json`:

```json
{
  "configurations": [
    {
      "inheritEnvironments": [
        "msvc_x86"
      ],
      "name": "x86-Debug",
      "includePath": [
        "${env.INCLUDE}",
        "${workspaceRoot}\\**"
      ],
      "defines": [
        "WIN32",
        "_DEBUG",
        "UNICODE",
        "_UNICODE"
      ],
      "intelliSenseMode": "windows-msvc-x86"
    }
  ]
}
```

在运行`SOil.cpp`前，先用VS2019打开一遍`test.soil`，再运行。

## Jsoncpp配置

### 编译、链接

1. 用VS2019打开jsoncpp-src-0.5.0\makefiles\vs71\jsoncpp.sln

2. 右击`lib_json`项目，选择`仅用于项目`>`仅生成lib_json`

3. 右击`lib_json`项目，选择`仅用于项目`>`仅链接lib_json`

**生成的.lib文件在**`jsoncpp-src-0.5.0\build\vs71\debug\lib_json`**或**`jsoncpp-src-0.5.0\build\vs71\release\lib_json`**中**

### 配置

1. 选择`你的项目`>`属性`
2. 选择`配置属性`>`VC++目录`>`包含目录`>添加`jsoncpp-src-0.5.0\include`文件夹
3. 选择`配置属性`>`VC++目录`>`库目录`>``jsoncpp-src-0.5.0\build\vs71\debug\lib_json`文件夹
4. 选择`配置属性`>`c/c++`>`常规`>`附加包含目录`，添加`jsoncpp-src-0.5.0\include`文件夹
5. 选择`配置属性`>`c/c++`>`代码生成`>`运行库`，选择`MTd`
6. 选择`配置属性`>`链接器`>`常规`>`附加库目录`，添加`jsoncpp-src-0.5.0\build\vs71\debug\lib_json`文件夹
7. 选择`配置属性`->`链接器`->`输入`->`附加依赖项`，添加lib文件：`json_vc71_libmtd.lib`（编译生成的.lib文件，在``jsoncpp-src-0.5.0\build\vs71\debug\lib_json`文件夹下）
8. 点击`应用`完成配置