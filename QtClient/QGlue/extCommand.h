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
    //OSAKI
//    void registerPolygonModel(std::string,int currentIndex,kvs::UInt8 opacity,kvs::RGBColor color);
    void registerPolygonModel(std::string,int currentIndex,double opacity,kvs::RGBColor color);
    void deletePolygonModel(int currentIndex);
    //OSAKI
//    int  getServerParticleInfomation();

protected:
    //OSAKI
//    void registerPolygonModel();
    //OSAKI
private:
    std::pair<int,int> m_polygon_pair[5];
};
extern ExtCommand* extCommand;

#endif // ExtCommand_H
