#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlNodeEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* o;
		System_Xml::System::Xml::XmlNode* xmlNode;
		int32_t lineNumber;
		int32_t linePosition;
		void _ctor(System_Xml::System::Xml::XmlNode* xmlNode, int32_t lineNumber, int32_t linePosition, mscorlib::System::Object* o);
	};
}

