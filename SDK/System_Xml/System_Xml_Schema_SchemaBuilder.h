#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNode; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaBuilder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool ProcessElement(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns);
		void ProcessAttribute(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value);
		bool IsContentParsed();
		void ProcessMarkup(IL2CPP::Array<System_Xml::System::Xml::XmlNode*>* markup);
		void ProcessCData(mscorlib::System::String* value);
		void StartChildren();
		void EndChildren();
		void _ctor();
	};
}

