# Compilando C em Linux

## Como compilar arquivos em C

`Sistema Linux`

[![](https://github.com/F4NT0/PR0GR4M1NG/raw/master/img/icon-linux.png)](https://github.com/F4NT0/PR0GR4M1NG/blob/master/img/icon-linux.png)

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
| `./` | Para rodar o arquivo eecutável |
| `nomeexecutavel` | nome do arquivo executavel que fizemos |

