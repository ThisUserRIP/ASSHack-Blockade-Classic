#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlTextReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "System_Xml_XmlNodeType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_LineInfo.h"
namespace System_Xml::System::Xml { struct LineInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System_Xml::System::Xml { struct XmlNameTable; };

namespace System_Xml::System::Xml
{
	struct XmlTextReaderImpl_NodeData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNodeType type;
		mscorlib::System::String* localName;
		mscorlib::System::String* prefix;
		mscorlib::System::String* ns;
		mscorlib::System::String* nameWPrefix;
		mscorlib::System::String* value;
		IL2CPP::Array<wchar_t>* chars;
		int32_t valueStartPos;
		int32_t valueLength;
		System_Xml::System::Xml::LineInfo lineInfo;
		System_Xml::System::Xml::LineInfo lineInfo2;
		wchar_t quoteChar;
		int32_t depth;
		bool isEmptyOrDefault;
		int32_t entityId;
		bool xmlContextPushed;
		System_Xml::System::Xml::XmlTextReaderImpl_NodeData* nextAttrValueChunk;
		mscorlib::System::Object* schemaType;
		mscorlib::System::Object* typedValue;
		struct StaticFields
		{
			System_Xml::System::Xml::XmlTextReaderImpl_NodeData* s_None;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System_Xml::System::Xml::XmlTextReaderImpl_NodeData* get_None();
		void _ctor();
		int32_t get_LineNo();
		int32_t get_LinePos();
		bool get_IsEmptyElement();
		void set_IsEmptyElement(bool value);
		bool get_IsDefaultAttribute();
		void set_IsDefaultAttribute(bool value);
		bool get_ValueBuffered();
		mscorlib::System::String* get_StringValue();
		void TrimSpacesInValue();
		void Clear(System_Xml::System::Xml::XmlNodeType type);
		void ClearName();
		void SetLineInfo(int32_t lineNo, int32_t linePos);
		void SetLineInfo2(int32_t lineNo, int32_t linePos);
		void SetValueNode(System_Xml::System::Xml::XmlNodeType type, mscorlib::System::String* value);
		void SetValueNode(System_Xml::System::Xml::XmlNodeType type, IL2CPP::Array<wchar_t>* chars, int32_t startPos, int32_t len);
		void SetNamedNode(System_Xml::System::Xml::XmlNodeType type, mscorlib::System::String* localName);
		void SetNamedNode(System_Xml::System::Xml::XmlNodeType type, mscorlib::System::String* localName, mscorlib::System::String* prefix, mscorlib::System::String* nameWPrefix);
		void SetValue(mscorlib::System::String* value);
		void SetValue(IL2CPP::Array<wchar_t>* chars, int32_t startPos, int32_t len);
		void OnBufferInvalidated();
		void CopyTo(int32_t valueOffset, mscorlib::System::Text::StringBuilder* sb);
		mscorlib::System::String* GetNameWPrefix(System_Xml::System::Xml::XmlNameTable* nt);
		mscorlib::System::String* CreateNameWPrefix(System_Xml::System::Xml::XmlNameTable* nt);
		int32_t System_IComparable_CompareTo(mscorlib::System::Object* obj);
	};
}

