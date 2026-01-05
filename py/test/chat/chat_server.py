while(1):
    send_data = input("请输入内容：")
    #send_data = "今天是2021年08月29日，辰哥给服务器端发送数据了"
    tcp_socket.send(send_data.encode("gbk"))
    if send_data == "exit":
         break;
    #从服务器接收数据
    #注意这个1024byte，大小根据需求自己设置
    from_server_msg = tcp_socket.recv(1024)
    #加上.decode("gbk")可以解决乱码
    print(from_server_msg.decode("gbk"))
#关闭连接
tcp_socket.close()