
Neste projeto, foi implementado um código destinado a ser executado em uma plataforma Arduino usando a biblioteca FreeRTOS. A implementação controla dois motores, gerenciando direção e velocidade por meio de uma ponte H.
A classe “Robot” é responsável pelo controle de um robô móvel com Arduino Uno e placa L298 para acionamento dos motores. Ela encapsula a lógica de controle e fornece métodos simples para movimentar o robô em diferentes direções.
O construtor inicializa os pinos de controle e configurações iniciais dos motores do robô.
Parâmetros:
• ena: Pino de controle de velocidade do Motor A.
• in1: Pino de controle de sentido 2 do Motor A.
• in2: Pino de controle de sentido 1 do Motor A.
• enb: Pino de controle de velocidade do Motor B.
• in3: Pino de controle de sentido 1 do Motor B.
• in4: Pino de controle de sentido 2 do Motor B.

Foram declarados quatro métodos, esses métodos controlam os movimentos básicos do robô em diferentes direções. O parâmetro pwm define a velocidade dos motores, sendo 0 o mínimo (parado) e 255 o máximo (velocidade total).

Métodos:
• paraFrente: Este método faz com que o robô se mova para frente, acionando
ambos os motores na mesma direção.
• paraTras: Este método faz com que o robô se mova para trás, acionando ambos
os motores na direção oposta.
• paraDireita: Este método faz com que o robô vire à direita, acionando o motor
esquerdo enquanto mantém o motor direito parado.
• paraEsquerda: Este método faz com que o robô vire à esquerda, acionando o
motor direito enquanto mantém o motor esquerdo parado.
