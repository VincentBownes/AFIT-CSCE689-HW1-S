#ifndef TCPCONN_H
#define TCPCONN_H
#pragma once

#include<string>
#include<vector>
#include<iostream>

//const int max_attempts = 2;

class TCPConn 
{
public:
   TCPConn();
   ~TCPConn();

   int accept(int server);

   int sendText(const char *msg, int size);

   void handleConnection();
   //void startAuthentication();
   //void getUsername();
   //void getPasswd();
   void sendMenu();
   void getMenuChoice();
   //void setPassword();
   //void changePassword();

   void disconnect();
   bool isConnected();

private:

   int connfd;

   std::vector<std::string> commands;
 
  // std::string username; // The username this connection is associated with

   //std::string _newpwd; // Used to store user input for changing passwords

   //int _pwd_attempts = 0;
};


#endif
