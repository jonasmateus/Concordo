
## Intro
  *Um projeto que fiz com um colega de faculdade para uma disciplina*
  
## Como compilar

Execute os comandos:
```
mkdir build
cd build
cmake ..
cmake --build .
```

## Executar programa
Para executar o programa, esteja na pasta principal e use o comando:

```
build/concordo
```
## Executar testes
Para redirecionar um dos arquivos de teste como entrada padrão utilize o comando:

```
build/concordo <data/"arquivo"
```

## Arquivos de teste
### Os arquivos de teste são : 
btest.txt

```
teste base : testa todas as funcionalidades basicas e alguns erros basicos
```
errlog.txt

```
erros de login : testa todos os comandos com ids não logados
```

serverES.txt

```
entrada e saida de servidores : testa as funcionalidades de entrada e saida de servidores
```

errvisual.txt

```
testa erros de visualização de servidores
```

errcanal.txt

```
testa erros de presença em canais
```
