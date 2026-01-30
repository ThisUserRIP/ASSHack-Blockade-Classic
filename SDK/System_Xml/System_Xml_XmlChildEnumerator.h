#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml
{
	struct XmlChildEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNode* container;
		System_Xml::System::Xml::XmlNode* child;
		bool isFirst;
		void _ctor(System_Xml::System::Xml::XmlNode* container);
		bool System_Collections_IEnumerator_MoveNext();
		bool MoveNext();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		System_Xml::System::Xml::XmlNode* get_Current();
	};
}

