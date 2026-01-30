#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Utils_Classes_Data_SerializedObject.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject_XmlDocument_Element; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlReader; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct SerializedObject_XmlDocument : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlDocument_Element* _root;
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject_XmlDocument_Element* get_root();
		bool get_isValid();
		void _ctor(mscorlib::System::String* xml);
		void ReadAll(System_Xml::System::Xml::XmlReader* reader);
		mscorlib::System::String* ToString();
	};
}

