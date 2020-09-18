#include "opacityundoredocommand.h"

opacityUndoRedoCommand::opacityUndoRedoCommand(QGlue::OpacityMapPalette *omapp, const kvs::OpacityMap fromOpacityMap, const kvs::OpacityMap toOpacityMap, QUndoCommand *parent):
    QUndoCommand(parent),
    m_omapp(omapp),
    m_fromOpacityMap(fromOpacityMap),
    m_toOpacityMap(toOpacityMap)
{
}

void opacityUndoRedoCommand::undo()
{
    qInfo("Undo");
    m_omapp->setOpacityMap(m_fromOpacityMap);
    setText(QString("Undo"));
}

void opacityUndoRedoCommand::redo()
{
    qInfo("Redo");
    m_omapp->setOpacityMap(m_toOpacityMap);
    setText(QString("Redo"));
}
