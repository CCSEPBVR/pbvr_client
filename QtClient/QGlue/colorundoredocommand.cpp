#include "colorundoredocommand.h"

colorUndoRedoCommand::colorUndoRedoCommand(QGlue::ColorMapPalette *cmapp,const kvs::ColorMap fromColorMap,const kvs::ColorMap toColorMap,QUndoCommand *parent):
    QUndoCommand(parent),
    m_cmapp(cmapp),
    m_fromColorMap(fromColorMap),
    m_toColorMap(toColorMap)
{
}

void colorUndoRedoCommand::undo()
{
    qInfo("Undo");
    m_cmapp->setColorMap(m_fromColorMap);
    setText(QString("Undo"));
}

void colorUndoRedoCommand::redo()
{
    qInfo("Redo");
    m_cmapp->setColorMap(m_toColorMap);
    setText(QString("Redo"));
}
