#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollectionNode; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaCollectionEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionaryEnumerator* enumerator;
		void _ctor(mscorlib::System::Collections::Hashtable* collection);
		void System_Collections_IEnumerator_Reset();
		bool System_Collections_IEnumerator_MoveNext();
		bool MoveNext();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		System_Xml::System::Xml::Schema::XmlSchema* get_Current();
		System_Xml::System::Xml::Schema::XmlSchemaCollectionNode* get_CurrentNode();
	};
}

