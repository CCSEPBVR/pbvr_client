#ifndef ExtCommand_H
#define ExtCommand_H

#include <Client/Command.h>
#include <Client/Argument.h>
#include <Client/ComThread.h>


class ExtCommand : public kvs::visclient::Command
{
public:
    ExtCommand(int argc, char *argv[]);
    kvs::visclient::Argument argument;
    kvs::visclient::ComThread comthread; 
    kvs::visclient::ParticleServer m_server; 

    void initCommand();
    void inSituInit();
    void clientServerInit();
    void parseArguments();
    void CallBackApply( const int i );
//    int  getServerParticleInfomation();

};
extern ExtCommand* extCommand;

#endif // ExtCommand_H
