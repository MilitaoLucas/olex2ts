# Olex2TS -- Olex2 Tree-sitter parser
This project aims to at first improve color highlighting of Olex2-gui htm files. Maybe in the future, it could also 
implement linting and other useful functionality. Every contribution is welcome!

This is a fork from [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html/). This project is heavily based
on theirs, so thank you!

## Instalation
For now, this is not ready. I have an MVP, but I would not trust it. If you want to install it anyway, I will only
provide minimum instructions:
### Requirements:
- Node
- GCC/G++

### Instructions
```bash 
git clone https://github.com/MilitaoLucas/olex2ts
cd olex2ts
node install
```
After this, you should be capable of installing with `TSInstall olex2htm` inside Neovim.

## Objectives
1. Get color highlighting working for every Olex2 htm component
2. Fix every bug that appears
3. Create linting functionality
4. Create LSP functionalities


## Disclaimer
I am not affiliated with OlexSYS. 

## Authors
The authors of the original project are:
- [Max Brunsfeld](https://github.com/maxbrunsfeld)
- [Amaan Qureshi ](https://github.com/amaanq)
The author of this project is
- [Lucas Militão](https://github.com/MilitaoLucas)

## Contributing
There are 2 main ways of contributing to this project
- Issues
  - Issues are welcome and help everyone. If you find bugs, feel free to report them or send me an 
[E-mail](mailto:lucas.milito@usp.br)
- Pull Requests
  - If you have code you wish to share, that is very welcomed and you should just submit a PR. I will try and merge it
as soon as possible if it has no problems!