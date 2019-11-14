# Compilando C em Linux

## Como compilar arquivos em C

`Sistemas Linux que já utilizei:`

![Ubuntu 16.04 e 18.04](.gitbook/assets/ubuntu-logo32.png)

![Linux Mint 17.2 e 18.2 ](.gitbook/assets/iqlil.png)

Baixe o programa **`gcc`**

```bash
sudo apt-get install gcc
```

Após baixado o programa, coloque o seguinte **comando**:

```bash
gcc nomeprograma.c -o nomeexecutavel
```

* Explicação:

| Comando | Explicação |
| :--- | :--- |
| `gcc` | chamada do programa gcc |
| `nomeprograma.c` | nome do programa que queremos executar |
| `-o` | Comando que serve para criar um executor |
| `nomeexecutavel` | nome do arquivo que irá ser executado |

Agora iremos executar o arquivo executável

```bash
./nomeexecutavel
```

Explicação:

| Comando | Explicação |
| :--- | :--- |
| `./` | Para rodar o arquivo executável |
| `nomeexecutavel` | nome do arquivo executável que fizemos |

