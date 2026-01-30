#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNamedNodeMap.h"
namespace System_Xml::System::Xml { struct XmlNamedNodeMap; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace System_Xml::System::Xml
{
	struct XmlNamedNodeMap_SmallXmlNodeList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* field;
		int32_t get_Count();
		mscorlib::System::Object* get_Item(int32_t index);
		void Add(mscorlib::System::Object* value);
		void RemoveAt(int32_t index);
		void Insert(int32_t index, mscorlib::System::Object* value);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
	};
}

