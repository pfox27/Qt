// This file is autogenerated by CMake. Do not edit.

#include <QtQml/qqmlextensionplugin.h>

extern void qml_register_types_QtQuick_Studio_Effects();
Q_GHS_KEEP_REFERENCE(qml_register_types_QtQuick_Studio_Effects)

class QtQuick_Studio_EffectsPlugin : public QQmlEngineExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlEngineExtensionInterface_iid)

public:
    QtQuick_Studio_EffectsPlugin(QObject *parent = nullptr) : QQmlEngineExtensionPlugin(parent)
    {
        volatile auto registration = &qml_register_types_QtQuick_Studio_Effects;
        Q_UNUSED(registration)
    }
};



#include "QuickStudioEffectsplugin_QtQuick_Studio_EffectsPlugin.moc"
