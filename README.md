# spiNET
一种基于spi（Serial Peripheral Interface，串行外设接口）的类网络通信协议

其诞生的原因是为了解决嵌入式系统中Linux模块与其他单片机之间的通信抽象层级落差过大的问题，故使用嵌入式设备中常见的spi尝试鼓捣了一个类似网络通信的协议抽象层。

目前这个协议还处于理念设计阶段，还没有做出任何有关的实现。目前协议的第一版书面描述已经完成，后续将通过该仓库给出一些协议层的抽象接口，并逐步做出以其为子模块的服务器侧实现和客户端侧实现。
