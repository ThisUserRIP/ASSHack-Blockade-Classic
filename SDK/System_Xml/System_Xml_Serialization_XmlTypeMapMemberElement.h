#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlTypeMapMember.h"
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfoList; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfo; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlTypeMapMemberElement : System_Xml::System::Xml::Serialization::XmlTypeMapMember
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* _elementInfo;
		mscorlib::System::String* _choiceMember;
		bool _isTextCollector;
		System_Xml::System::Xml::Serialization::TypeData* _choiceTypeData;
		void _ctor();
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ElementInfo();
		void set_ElementInfo(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfoList* value);
		mscorlib::System::String* get_ChoiceMember();
		void set_ChoiceMember(mscorlib::System::String* value);
		System_Xml::System::Xml::Serialization::TypeData* get_ChoiceTypeData();
		void set_ChoiceTypeData(System_Xml::System::Xml::Serialization::TypeData* value);
		System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(mscorlib::System::Object* ob, mscorlib::System::Object* memberValue);
		void SetChoice(mscorlib::System::Object* ob, mscorlib::System::Object* choice);
		bool get_IsXmlTextCollector();
		void set_IsXmlTextCollector(bool value);
	};
}

