<div align="center">

# C / C++ · 基础练习

记录模板、指针、递归与二叉树的学习过程。

![C](https://img.shields.io/badge/C-2563eb?style=flat-square) ![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square) ![数据结构](https://img.shields.io/badge/%E6%95%B0%E6%8D%AE%E7%BB%93%E6%9E%84-7c3aed?style=flat-square)

</div>

---

## 阅读入口

| 文件 | 内容 |
| --- | --- |
| [c.cpp](./c.cpp) | 函数模板与字符串类型特化练习 |
| [main.c](./main.c) | C 语言练习程序 |
| [w.c](./w.c) | 二叉树创建、中序线索化与遍历 |
| [p.c](./p.c)、[q.c](./q.c) | 其他独立 C 练习 |
| [input.txt](./input.txt) | 输入样例 |
| [.vscode](./.vscode) | 编辑器编译与调试配置 |

这些文件是独立练习，分别包含自己的程序入口，编译时请选择单个源文件。

## 编译示例

```powershell
gcc w.c -o tree.exe
.\tree.exe
```

二叉树练习按先序输入节点，`#` 表示空节点，例如 `A B # # C # #`。C++ 文件可使用 `g++ c.cpp -o template.exe` 编译。

## 学习提示

先跟踪一个最小输入的指针变化，再观察递归返回时的处理。本仓库保留练习过程，代码中的实现与注释适合作为调试材料；例如字符串特化仍值得检查复制与拼接逻辑。编译命令未在此次文档整理中执行。

---

如果你也在学习这个方向，欢迎通过 Issues 交流思路、反馈问题。遇到不理解的实现，可以结合代码与 AI 提问，先理解，再动手修改。
