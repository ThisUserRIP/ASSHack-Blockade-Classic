#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
#include "System_Xml_XmlNodeChangedAction.h"
namespace System_Xml::System::Xml { struct XmlNode; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlNodeChangedEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNodeChangedAction action;
		System_Xml::System::Xml::XmlNode* node;
		System_Xml::System::Xml::XmlNode* oldParent;
		System_Xml::System::Xml::XmlNode* newParent;
		mscorlib::System::String* oldValue;
		mscorlib::System::String* newValue;
		void _ctor(System_Xml::System::Xml::XmlNode* node, System_Xml::System::Xml::XmlNode* oldParent, System_Xml::System::Xml::XmlNode* newParent, mscorlib::System::String* oldValue, mscorlib::System::String* newValue, System_Xml::System::Xml::XmlNodeChangedAction action);
		System_Xml::System::Xml::XmlNodeChangedAction get_Action();
	};
}

