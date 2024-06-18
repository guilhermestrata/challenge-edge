# Tech Mahindra Challenge 🏎️🩵

## Descrição do Projeto

Este projeto utiliza um Arduino para medir a temperatura do pneu do carro da Fórmula-E e a distância dele às laterais da pista, exibindo os valores em um display LCD I2C. O sensor de temperatura utilizado é o DS18B20, e o sensor de distância é o HC-SR04. Os valores de temperatura e distância são atualizados a cada 2 segundos e também são enviados para o monitor serial.

## Componentes Utilizados

- **Arduino Uno** (ou qualquer outra placa compatível)
- **Display LCD 16x2** com interface I2C
- **Sensor de temperatura DS18B20**
- **Sensor de distância ultrassônico HC-SR04**
- **Resistores** (para o DS18B20)
- **Jumpers**
- **Protoboard**

## Conexões

### LCD I2C

- **VCC** -> 5V
- **GND** -> GND
- **SDA** -> A4 (ou SDA no caso de outras placas)
- **SCL** -> A5 (ou SCL no caso de outras placas)

### Sensor de Temperatura DS18B20

- **VCC** -> 5V
- **GND** -> GND
- **Data** -> Pino 2 (com resistor pull-up de 4.7kΩ entre Data e VCC)

### Sensor de Distância HC-SR04

- **VCC** -> 5V
- **GND** -> GND
- **TRIG** -> Pino 12
- **ECHO** -> Pino 11

### Licença

Este formato está otimizado para leitura e navegação em um repositório GitHub, com todos os títulos e subtítulos devidamente formatados para clareza.

### Colaboradores 
- Guilherme Arendt 
- Pedro Polido
- Fabricio Gomes 
- Vitor Cesarino
- Matheus Mamoto
