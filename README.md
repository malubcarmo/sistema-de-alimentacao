# Sistema Automático de Alimentação

Este projeto em linguagem **C** simula um **sistema automatizado de alimentação**, controlando de forma inteligente a liberação de **comida e água** em intervalos configuráveis.  
A proposta surgiu a partir da ideia de aplicar conceitos de programação imperativa a um contexto real e sustentável, demonstrando o funcionamento de um sistema autônomo local.

---

## Objetivo

O objetivo principal é desenvolver um programa que **simule o comportamento de um alimentador inteligente**, capaz de:

- Liberar comida e água em **intervalos de tempo definidos pelo usuário**;  
- Monitorar continuamente os **níveis de abastecimento**;  
- **Emitir alertas** quando o nível de comida ou água atingir **20%**;  
- Permitir o **reabastecimento manual** com reposição instantânea a 100%;  
- Continuar operando mesmo em situações críticas, simulando um ambiente real.

---

## Funcionamento do Sistema

1. O usuário define:
   - O **intervalo de liberação** da comida (em segundos);
   - O **intervalo de liberação** da água (em segundos);
   - A **quantidade de comida e água** liberada a cada ciclo (%).

2. O programa simula a passagem do tempo:
   - A cada ciclo (1 segundo), o sistema verifica se é hora de liberar alimento ou água.
   - Sempre que ocorre uma liberação, o nível do recurso diminui conforme o consumo configurado.

3. Quando o nível de qualquer recurso chega a **20%**, o sistema solicita ao usuário que confirme o reabastecimento:
   - Se o usuário responder **S**, o nível volta a **100%**.
   - Se responder **N**, o sistema exibe um **alerta crítico** e continua executando.

4. As informações do sistema são exibidas em tempo real, incluindo:
   - Tempo atual simulado;  
   - Níveis de comida e água;  
   - Mensagens de liberação, aviso e alerta.

---

## Tecnologias Utilizadas

- **Linguagem:** C  
- **Compilador:** MinGW (GCC)  
- **Editor:** Visual Studio Code  
- **Sistema operacional:** Windows  

---

## Possíveis Extensões Futuras

Este projeto foi desenvolvido como uma **simulação local**, mas pode ser expandido para aplicações reais com o uso de hardware.  
Algumas melhorias possíveis incluem:

- Integração com **Arduino** ou **ESP32** para controle físico de válvulas e sensores;  
- Leitura de dados de sensores de **nível e presença de pássaros**;  
- Envio de notificações via **IoT** (Internet das Coisas);  
- Interface gráfica para visualização dos dados em tempo real.

---

## Autores

Projeto desenvolvido por **Maria Luiza Bispo**, como parte de um estudo prático sobre **programação imperativa** e **aplicações automatizadas em C**.

---

## Licença

Este projeto é de uso livre para fins educacionais e pode ser adaptado, modificado ou expandido mediante atribuição dos créditos ao autor original.

---

---

## Conceitos Aplicados

O projeto foi desenvolvido em **linguagem C**, utilizando o **paradigma imperativo**, e explora conceitos fundamentais da programação estruturada:

- **Variáveis e tipos de dados;**  
- **Laços de repetição (`while`);**  
- **Estruturas condicionais (`if`/`else`);**  
- **Operadores aritméticos e lógicos;**  
- **Entrada e saída de dados (`scanf`, `printf`);**  
- **Controle temporal (`sleep`)** para simular a passagem do tempo.
