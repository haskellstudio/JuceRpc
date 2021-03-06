/*
  Copyright 2016 Art & Logic Software Development. 
 */



#ifndef IPCCLIENT_H_INCLUDED
#define IPCCLIENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"


class ClientController;

class RpcClient : public InterprocessConnection
{
public:
   RpcClient();

   ~RpcClient();

   void SetController(ClientController* controller);

   void connectionMade() override;

   void connectionLost() override;

   void messageReceived(const MemoryBlock& message) override;

   bool IsConnected() const { return fIsConnected; };

private:

   ClientController* fController;
   bool fIsConnected;

};



#endif  // IPCCLIENT_H_INCLUDED
