#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaEntity : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* qname;
		mscorlib::System::String* url;
		mscorlib::System::String* pubid;
		mscorlib::System::String* text;
		System_Xml::System::Xml::XmlQualifiedName* ndata;
		int32_t lineNumber;
		int32_t linePosition;
		bool isParameter;
		bool isExternal;
		bool parsingInProgress;
		bool isDeclaredInExternal;
		mscorlib::System::String* baseURI;
		mscorlib::System::String* declaredURI;
		void _ctor(System_Xml::System::Xml::XmlQualifiedName* qname, bool isParameter);
		mscorlib::System::String* System_Xml_IDtdEntityInfo_get_Name();
		bool System_Xml_IDtdEntityInfo_get_IsExternal();
		bool System_Xml_IDtdEntityInfo_get_IsDeclaredInExternal();
		bool System_Xml_IDtdEntityInfo_get_IsUnparsedEntity();
		bool System_Xml_IDtdEntityInfo_get_IsParameterEntity();
		mscorlib::System::String* System_Xml_IDtdEntityInfo_get_BaseUriString();
		mscorlib::System::String* System_Xml_IDtdEntityInfo_get_DeclaredUriString();
		mscorlib::System::String* System_Xml_IDtdEntityInfo_get_SystemId();
		mscorlib::System::String* System_Xml_IDtdEntityInfo_get_PublicId();
		mscorlib::System::String* System_Xml_IDtdEntityInfo_get_Text();
		int32_t System_Xml_IDtdEntityInfo_get_LineNumber();
		int32_t System_Xml_IDtdEntityInfo_get_LinePosition();
		static bool IsPredefinedEntity(mscorlib::System::String* n);
		System_Xml::System::Xml::XmlQualifiedName* get_Name();
		mscorlib::System::String* get_Url();
		void set_Url(mscorlib::System::String* value);
		mscorlib::System::String* get_Pubid();
		void set_Pubid(mscorlib::System::String* value);
		bool get_IsExternal();
		void set_IsExternal(bool value);
		bool get_DeclaredInExternal();
		void set_DeclaredInExternal(bool value);
		System_Xml::System::Xml::XmlQualifiedName* get_NData();
		void set_NData(System_Xml::System::Xml::XmlQualifiedName* value);
		mscorlib::System::String* get_Text();
		void set_Text(mscorlib::System::String* value);
		int32_t get_Line();
		void set_Line(int32_t value);
		int32_t get_Pos();
		void set_Pos(int32_t value);
		mscorlib::System::String* get_BaseURI();
		void set_BaseURI(mscorlib::System::String* value);
		bool get_ParsingInProgress();
		void set_ParsingInProgress(bool value);
		mscorlib::System::String* get_DeclaredURI();
		void set_DeclaredURI(mscorlib::System::String* value);
	};
}

