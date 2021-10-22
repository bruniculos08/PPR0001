# Aula 01

## **Git**
- comandos para utilizar no git

#### **1) Adicionando arquivo:**
```
git add nomearquivo
```
- este arquivo será salvo no diretório local porém ainda não estará no servidor.

#### **2) Deixando o arquivo "pronto" para enviar ou atualizar o arquivo do diretório no servidor:**
```
git commit -m "mensagem" 
```
- note que após este comando o arquivo ainda não estará no servidor, isto é basicamente um print do arquivo
para que este seja enviado, e também que o arquivo pronto será o arquivo da branch atualmente aberta.

#### **3) Enviando ou atualizando arquivo do diretório no servidor:**
```
git push origin master
```
- note que desta maneira as atualização ocorrerão na branch (linha de versões) master.

#### **4) Alterando (navegando) a branch atualmente aberta no git:**
```
git checkout nomebranch
```

#### **5) Adicionando uma nova branch:**
```
git branch nomebranchqualsedesejair
```
- a branch só irá realizar uma nova rota quando houver o primeiro commit nesta.
<p align="center">
  <img class="gatsby-resp-image-image" src="https://res.cloudinary.com/practicaldev/image/fetch/s--Jc-acrrl--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/69payngupg75rqgabwdg.png" width="485" title="Selection Sort">
</p>



#### **6) Clonar um repositório remoto:**
```
git clone linkrepositório
```

#### **7) Juntar uma branch e a atual:**
```
git merge nomedaoutrabranch
```
<p align="center">
  <img class="gatsby-resp-image-image" src="https://mxstudio.com.br/wp-content/uploads/2019/08/branch-1.png" width="550" title="Selection Sort">
</p>

#### **8) Baixar atualização de um diretório no servidor para o diretório local:**
```
git pull
```
