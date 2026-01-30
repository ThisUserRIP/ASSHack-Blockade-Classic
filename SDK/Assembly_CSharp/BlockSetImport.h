#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct BlockSet; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace Assembly_CSharp { struct Atlas; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace Assembly_CSharp { struct Block; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp
{
	struct BlockSetImport : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Import(Assembly_CSharp::BlockSet* blockSet, mscorlib::System::String* xml);
		static void ReadBlockSet(Assembly_CSharp::BlockSet* blockSet, System_Xml::System::Xml::XmlDocument* document);
		static IL2CPP::Array<Assembly_CSharp::Atlas*>* ReadAtlasList(System_Xml::System::Xml::XmlNode* blockSetNode);
		static Assembly_CSharp::Atlas* ReadAtlas(System_Xml::System::Xml::XmlNode* node);
		static IL2CPP::Array<Assembly_CSharp::Block*>* ReadBlockList(System_Xml::System::Xml::XmlNode* blockSetNode);
		static Assembly_CSharp::Block* ReadBlock(System_Xml::System::Xml::XmlNode* node);
		static System_Xml::System::Xml::XmlNode* FindNodeByName(System_Xml::System::Xml::XmlNode* node, mscorlib::System::String* name);
		static mscorlib::System::Reflection::FieldInfo* GetField(mscorlib::System::Type* type, mscorlib::System::String* name);
		static void ReadField(System_Xml::System::Xml::XmlNode* fieldNode, mscorlib::System::Object* obj);
		static mscorlib::System::Object* Parse(mscorlib::System::Type* type, mscorlib::System::String* val);
		static void ReadResourceField(System_Xml::System::Xml::XmlNode* fieldNode, mscorlib::System::Object* obj);
		void _ctor();
	};
}

