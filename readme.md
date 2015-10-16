# ILHA - Nome do jogo aqui
  Descrição do jogo aqui - Lorem ipsum dolor sit amet, consectetur adipiscing elit. In quis nibh neque. Pellentesque eget eros sed mi vehicula facilisis. Curabitur porttitor urna magna, vel hendrerit leo fermentum vitae.
---
### Direitos Autorais:
* Pedro Vicente Martinez
---
### Dados técnicos:
* Jogo criado com o framework openfl, na linguagem haxe.
* Jogo compilado e exportado para: Windows, Mac, Flash e Html5
---
### Dependencias:
1. Instalar Haxe + Neko.
  A página http://www.openfl.org/download/ possui bons links para baixar o Haxe e o Neko juntos.   
  O único caso que da erro é para o __Mac OSX - El Captain__ (versões anteriores funcionam bem)   
  Nesse caso, com o El Captain baixe por aqui http://haxe.org/download/, e abra o terminal.   
  Nele coloque os comandos:   
`
haxelib setup   
haxelib install lime
`
2. Instalar OpenFl. Para isso, abra o terminal e digite:   
`
haxelib install openfl   
haxelib install openfl-tools   
haxelib install openfl-native   
haxelib run openfl setup
`
  Para confirmar se o openfl está funcionando, digite no terminal:   
`
openfl
`
---
### Estrutura do Jogo:
* Assets
  Todas imagens, músicas e animações vão aqui. Temos que definir o formato delas.
* Export
  O Jogo compilado vai parar aqui.
* Source
  Onde todo o jogo será salvo
ilha.hxproj e project.xml são arquivos para configurações do projeto
---
### Como testar o jogo:
  Basta você abrir o terminal na pasta do jogo e digitar:
`openfl test <plataforma>`
  as plataformas podem ser: neko, flash, windows, mac, html5, sendo que neko é a plataforma mais rápida para testar.
#### Docs relevantes:
* http://docs.openfl.org/   
* http://www.openfl.org/learn/
