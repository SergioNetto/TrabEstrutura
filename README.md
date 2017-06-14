# TrabEstrutura
Trabalho de Estrutura de Dados Fatec MM

O projeto consiste em uma simulação de um banco de dados.
Ao invés de usarmos um arquivo em disco usaremos uma lista dinâmica customizada.
Em nossos estudos nós criamos uma lista dinâmica de inteiros, mas agora devemos altera-la para trabalhar com uma estrutura com os seguintes dados:
• Cpf
• Nome
• Telefone
Usaremos também uma lista duplamente ligada para ordenar a lista dinâmica e esta deverá ter a seguinte estrutura:
• Anterior
• Nome
• Registro
• Próximo
Quando inserimos um dado na lista dinâmica devemos pegar a posição na lista (número do registro) e o nome e inserimos também na lista duplamente ligada por ordem de nome.
Outra estrutura que usaremos é uma árvore binária com a seguinte estrutura:
• Esquerda
• Cpf
• Registro
• Direita
Devemos seguir de forma análoga na inserção do dado para a árvore binária.
O sistema deve ter o seguinte menu:
1 – Adicionar
2 – Localizar
3 – Excluir
4 – Listar
5 – Sair
Quando selecionar o adicionar o sistema deve pedir para o usuário digitar o CPF, o nome e o telefone. Logo em seguida inserir na lista dinâmica, na árvore binária e lista duplamente ligada.
Quando selecionar o localizar o sistema deve pedir o CPF, buscar na árvore binária e se encontrar, de posse o registro, mostrar os dados que estão na lista dinâmica. Se não encontrar o sistema deve emitir uma mensagem que não achou.
Quando selecionar o excluir o sistema deve pedir o CPF, buscar na árvore binária e se encontrar mostrar os dados da lista dinâmica na tela e perguntar se o usuário tem certeza. Se sim, excluir na árvore binária e da lista duplamente ligada. Deixe os dados na lista dinâmica como lixo, como o sistema busca pela árvore binária, ele não encontrará mais o registro.
Quando selecionar listar o sistema deve perguntar se é em ordem crescente ou decrescente e listar os dados da lista dinâmica pela ordem da lista duplamente ligada.
Quando selecionar sair o sistema deve liberar toda a memória da lista duplamente ligada, da árvore binária e da lista dinâmica e sair.
