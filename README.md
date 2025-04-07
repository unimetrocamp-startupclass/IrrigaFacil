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

**O cliente tem um problema em realizar e manter uma regularidade na irrigação da suas plantas. Identificando esse problema, uma das formas para solucionar esse problema é na criação de sistema Iot que irá realizar a irrgação regular, também irá manter sempre a umidade e temperatura do solo da plantação controlada. Esse projeto irá utilizar um arduino, sensores de temperatura e umidade para realizarem o controle da plantação. Visamos facilitar a vida da nossa cliente e manter a sua plantação sempre cuidada.**

## 2. Objetivo

**Criar uma rotina para regar as plantas e um controle de temperatura e umidadde do solo.**

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

### Modelagem do sistema

> **Dica:** Inclua pelo menos dois diagramas UML, como Caso de Uso, Diagrama de Classes ou MER.

### Tecnologias utilizadas


<ul>
  <li>Linguagem principal do dispositivo: C++</li> 
  
</ul>

### Arquitetura do sistema

> **Dica:** Insira um diagrama mostrando a arquitetura do sistema e o fluxo de informações.

## 7. Resultados

### Protótipo

> **Dica:** Apresente prints das telas do sistema, com descrição das ações possíveis e reações do sistema.

### Códigos das principais funcionalidades

> **Dica:** Inclua trechos de código relevantes, com comentários explicativos.

## 8. Conclusão

### Impacto do sistema

> **Dica:** Descreva as melhorias trazidas ao processo do cliente.

### Melhorias Futuras

> **Dica:** Liste pelo menos uma melhoria que poderá ser implementada futuramente.

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

---
