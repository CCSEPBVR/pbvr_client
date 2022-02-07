#pragma once
#include <kvs/EventListener>
#include "headmounteddisplay.h"
#include <kvs/Scene>
#include "InputDevice.h"

namespace kvs
{

namespace oculus
{
namespace jaea
{

class ControllerBase : public kvs::EventListener
{
private:
    kvs::oculus::jaea::InputDevice m_input_device; ///< input device

public:
    //    ControllerBase( Screen* screen );
    ControllerBase( kvs::oculus::jaea::HeadMountedDisplay& hmd, kvs::Scene *scene );
    virtual void initializeEvent() {}
    virtual void frameEvent() {}

protected:
    kvs::oculus::jaea::InputDevice& inputDevice() { return m_input_device; }

private:
    void onEvent( kvs::EventBase* event );
};

} // end of namespace jaea

} // end of namespace oculus

} // end of namespace kvs
