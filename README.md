# Inject-LOL-
This project can inject LOL successfully
Windows下的应用程序大部分都是基于消息机制的，它们都会有一个消息过程函数，根据不同的消息完成不同的功能。Windows操作系统提供的钩子机制的作用就是用来截获和监视这些系统中的消息。Windows钩子琳琅满目，可以用来应对各种不同的消息。全局钩子需要使用DLL文件，在DLL中实现相应的钩子函数。在操作系统中安装全局钩子后，只要进程接收到可以发出钩子的消息，全局钩子的DLL文件就会被操作系统自动或强行地加载到该进程中。因此，设置消息钩子，可以达到DLL注入的目的。