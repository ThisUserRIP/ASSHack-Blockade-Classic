#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlNamedNodeMap_SmallXmlNodeList.h"
namespace System_Xml::System::Xml { struct XmlNamedNodeMap_SmallXmlNodeList; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml
{
	struct XmlNamedNodeMap_SmallXmlNodeList_SingleObjectEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* loneValue;
		int32_t position;
		void _ctor(mscorlib::System::Object* value);
		mscorlib::System::Object* get_Current();
		bool MoveNext();
		void Reset();
	};
}

