# Irriga Fácil
# Documentação do Sistema

## Dados do Cliente

**Título do Projeto:** `Irriga Fácil`  
**Cliente:** `Lucélia de Souza Medeiros`  
**CNPJ/CPF:** `055.217.716-46`  
**Contato:** `Lucélia de Souza Medeiros` 
**Email do contato:** `-`  

## Equipe de Desenvolvimento

| Nome Completo  | Curso  | Disciplina  |
|---------------|--------|------------|
| `João Pedro de Oliveira Martins` | `Ciências da Computação` | `Programação de software básico em C` |
| `Luiz Henrique dos Santos` | `Ciências da Computação` | `Programação de software básico em C` |
| `Sofia Medeiros Barreto de Lima` | `Ciências da Computação` | `Programação de software básico em C` |
| `Leticia Novaes Antunes` | `Ciências da Computação` | `Programação de software básico em C` |


**Professor Orientador:** `Kesede Rodrigues Junior`

## 1. Introdução
Com o avanço diário da tecnologia, cada vez mais surgem formas de tornar o dia a dia das pessoas mais prático e eficiente. A irrigação automática é uma dessas soluções. Apesar de ainda não ser amplamente utilizada em áreas residenciais, pensar em sistemas de irrigação menores e voltados exclusivamente para esse público pode trazer significativa praticidade às rotinas corridas, além de contribuir para a economia de água.

Segundo  Andrade (2001), "o interesse pela irrigação, no Brasil, emerge nas mais variadas condições de clima, solo, cultura e socioeconomia. Não existe um sistema de irrigação ideal, capaz de atender satisfatoriamente todas essas condições e interesses envolvidos. Em consequência, deve-se selecionar o sistema de irrigação mais adequado para uma certa condição e para atender os objetivos desejados".

Diante disso, este projeto tem como objetivo desenvolver um sistema simples e de baixo custo, voltado à irrigação automatizada em pequena escala, com foco em residências, a fim de auxiliar nosso cliente  e moradores de áreas domésticas no cuidado com suas plantas, na regularidade da irrigaçaõ e promovendo o uso consciente da água.

## 2. Objetivo

## 2.1 Geral
Desenvolver um sistema de irrigação automática.

## 2.2 Específicos
Construir um circuito com Arduino e sensor de umidade do solo, desenvolver o código em linguagem C para interpretar os dados do sensor, implementar uma rotina automatizada que aciona a irrigação somente quando o solo estiver seco, além de testar o sistema em diferentes condições para garantir seu funcionamento eficiente e sustentável, promovendo o uso racional de água e energia.


## 3. Escopo

<ol>
  <li>Dispositivo IOT</li>
    <ul>
        <li>Módulo de controle de temperatura do solo</li>
      <li>Módulo de controle de rotina</li>
      <li>Módulo de controle de umidade do solo</li>
      <li>Módulo de controle de vazão da água</li>
    </ul>
</ol>

## 4. Backlogs do Produto

**1. Definir Requisitos do Sistema**
- **Descrição**: Levantar e documentar os requisitos específicos do cliente, como tipos de plantas, condições ideais de umidade e temperatura.
- **Prioridade**: Alta
- **Responsável**: Equipe de Análise e Requisitos

**2. Escolha de Sensores**
- **Descrição**: Selecionar sensores de umidade e temperatura adequados para o tipo de planta e ambiente.
- **Prioridade**: Alta
- **Responsável**: Equipe de Hardware

**3. Projeto do Circuito e Integração com Arduino**
- **Descrição**: Desenhar o circuito para conectar os sensores ao Arduino e programar a leitura dos dados.
- **Prioridade**: Alta
- **Responsável**: Equipe de Engenharia de Hardware

**4. Desenvolvimento do Algoritmo de Irrigação**
- **Descrição**: Criar o algoritmo que controle a irrigação de acordo com os dados de umidade e temperatura. O algoritmo deve acionar a irrigação quando os valores de umidade do solo estiverem abaixo de um limite pré-determinado.
- **Prioridade**: Alta
- **Responsável**: Equipe de Software

**5. Desenvolvimento da Interface de Controle (Opcional)**
- **Descrição**: Criar uma interface (aplicativo ou painel web) para o cliente monitorar e ajustar os parâmetros de irrigação e clima.
- **Prioridade**: Média
- **Responsável**: Equipe de Software (Front-end/Back-end)

**6. Testes de Integração**
- **Descrição**: Realizar testes de integração para garantir que os sensores, o Arduino e o sistema de irrigação funcionem em conjunto.
- **Prioridade**: Alta
- **Responsável**: Equipe de Qualidade

**7. Calibração dos Sensores**
- **Descrição**: Calibrar os sensores de temperatura e umidade para garantir leituras precisas.
- **Prioridade**: Alta
- **Responsável**: Equipe de Engenharia de Hardware

**8. Implementação do Sistema de Irrigação Automática**
- **Descrição**: Instalar e configurar os sistemas de irrigação automatizados nas plantações.
- **Prioridade**: Alta
- **Responsável**: Equipe de Implementação

**9. Testes no Campo**
- **Descrição**: Testar o sistema no campo, verificando a eficácia da irrigação e a manutenção dos parâmetros ideais de temperatura e umidade.
- **Prioridade**: Alta
- **Responsável**: Equipe de Qualidade

**10. Ajustes e Otimizações**
- **Descrição**: Realizar ajustes no algoritmo de irrigação e no hardware conforme resultados dos testes no campo.
- **Prioridade**: Média
- **Responsável**: Equipe de Engenharia de Software e Hardware

**11. Documentação e Treinamento**
- **Descrição**: Criar a documentação do sistema e fornecer treinamento para o cliente sobre como utilizar o sistema de irrigação automatizado.
- **Prioridade**: Média
- **Responsável**: Equipe de Suporte
---

## 5. Cronograma

# Cronograma do Projeto

| **Tarefa**                                           | **Duração** | **Semana** |
|------------------------------------------------------|-------------|------------|
| **1. Definir Requisitos do Sistema**                 | 1 semana    | Semana 1   |
| **2. Escolha de Sensores**                           | 1 semana    | Semana 1   |
| **3. Projeto do Circuito e Integração com Arduino**  | 2 semanas   | Semana 2-3 |
| **4. Desenvolvimento do Algoritmo de Irrigação**     | 2 semanas   | Semana 3-4 |
| **5. Desenvolvimento da Interface de Controle**      | 2 semanas   | Semana 4-5 |
| **6. Testes de Integração**                          | 1 semana    | Semana 5-6 |
| **7. Calibração dos Sensores**                       | 1 semana    | Semana 6   |
| **8. Implementação do Sistema de Irrigação Automática** | 2 semanas | Semana 6-7 |
| **9. Testes no Campo**                               | 1 semana    | Semana 7   |
| **10. Ajustes e Otimizações**                        | 1 semana    | Semana 8   |
| **11. Documentação e Treinamento**                   | 1 semana    | Semana 8   |

## 6. Materiais e Métodos
<ul>
  <li>1 Arduino Uno R3 + Cabo USB;</li>
  <li>1 Sensor de Umidade de Solo para Arduino;</li>
  <li>1 Mini Bomba de Água (d’água) para Arduino RS-385;</li>
  <li>1 Módulo Relé 5V 10A 1 Canal com Optoacoplador;</li>
  <li>1 Fonte de Alimentação Chaveada 12VDC 1A;</li>
  <li>1 Fonte de Alimentação para Arduino 9VDC 1A;</li>
  <li>1 Adaptador Fêmea com Bornes para plug P4 (2,1×5,5mm);</li>
  <li>½ Metro de Fio Paralelo 0,5mm;</li>
  <li>1,5 Metros de Mangueira para Aquário;</li>
  <li>Jumpers.</li>
</ul>
### Modelagem do sistema

 **Dica:** Inclua pelo menos dois diagramas UML, como Caso de Uso, Diagrama de Classes ou MER.

**Diagrama de Classes:** Representando classes como Sensor de Umidade, Bomba d'Água, Sistema de Controle.

![image](https://github.com/user-attachments/assets/4c52cd71-02f7-4302-b297-9cdbdcd950ca)


### Tecnologias utilizadas

<ul>
  <li>**Linguagem principal do dispositivo:** C++</li> 
  <li>IDE: VS Code
  <li>**Hardware:** Arduino Uno, Mini Bomba D'Agua, Jumper, Fonte de Alimentação, Moódulo Relé</li>
</ul>

### Arquitetura do sistema
![image](https://github.com/user-attachments/assets/953ce7f5-8069-4913-9621-e59e3eb10de9)

<ul>
  <li>O <strong>Sensor de Umidade do Solo</strong> realiza a medição da umidade e envia os dados ao <strong>Arduino Uno</strong>.</li>
  <li>O <strong>Arduino Uno</strong> interpreta as informações recebidas e compara com um valor de umidade previamente configurado.</li>
  <li>Se a umidade estiver abaixo do nível ideal, o Arduino envia um sinal ao <strong>Módulo Relé 5V</strong>.</li>
  <li>O <strong>Módulo Relé</strong> aciona a <strong>Bomba d'Água RS-385</strong>, iniciando o bombeamento da água através da mangueira até o solo.</li>
  <li>A irrigação ocorre até que a umidade do solo atinja ou ultrapasse o valor definido como ideal.</li>
  <li>Quando o solo atinge a umidade adequada, o Arduino desativa o relé, desligando a bomba de água automaticamente.</li>
</ul>

## 7. Resultados

### Protótipo

> **Dica:** Apresente prints das telas do sistema, com descrição das ações possíveis e reações do sistema.

### Códigos das principais funcionalidades

> **Dica:** Inclua trechos de código relevantes, com comentários explicativos.

## 8. Conclusão

### Impacto do sistema

- Consumo mais equilibrado de água

- Produtividade da horta

- Redução de mão de obra humana

- Custo-benefício da instalação


### Melhorias Futuras

<ul>
  <li>Utilizar sensores de umidade múltiplos em diferentes pontos do solo para obter leituras mais precisas.</li>
  <li>Integrar um sensor de chuva para evitar irrigação desnecessária em dias chuvosos.</li>
  <li>Programar o sistema para irrigar em horários específicos</li>
  <li>Acrescentar um sistema de alarme para alertar falhas, como bomba inoperante ou falta de água no reservatório.</li>
  <li>Desenvolver um aplicativo mobile simples para configuração, monitoramento e controle manual do sistema.</li>
  <li>Proteger toda a eletrônica com caixas vedadas para uso em ambientes externos.</li>
</ul>


## 9. Homologação do MVP junto ao cliente

> **Dica:** Inclua fotos da reunião de homologação e a lista de presença dos participantes.

## 10. Divulgação

### LinkedIn do Projeto

> **Dica:** Crie uma página do LinkedIn para o projeto, contendo um resumo, nome dos integrantes e professor-orientador. Insira o link aqui.

### Seminário de Projetos de Software

> **Dica:** Grave um vídeo da apresentação, publique no LinkedIn e adicione o link. Inclua fotos do evento.

### FENETEC: Feira de Negócios em Tecnologia

> **Dica:** Insira fotos do evento e um link para um vídeo da apresentação.

## 11. Carta de Apresentação

Texto padrão para apresentar o projeto à empresa parceira.

## 12. Carta de Autorização

Texto padrão para autorização da participação do cliente no projeto.

## 13. Relato individual do processo

Cada integrante deve escrever um breve relato sobre sua experiência no projeto.

## 14. Referências

**ANDRADE, Camilo de Lelis Teixeira de. Irrigação: situação atual e perspectivas. Sete Lagoas, MG: Embrapa Milho e Sorgo, 2001. ISSN 1679-1150.**



---
