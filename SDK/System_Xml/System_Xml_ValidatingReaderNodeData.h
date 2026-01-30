#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct AttributePSVIInfo; };
#include "System_Xml_XmlNodeType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlLineInfo; };

namespace System_Xml::System::Xml
{
	struct ValidatingReaderNodeData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* localName;
		mscorlib::System::String* namespaceUri;
		mscorlib::System::String* prefix;
		mscorlib::System::String* nameWPrefix;
		mscorlib::System::String* rawValue;
		mscorlib::System::String* originalStringValue;
		int32_t depth;
		System_Xml::System::Xml::AttributePSVIInfo* attributePSVIInfo;
		System_Xml::System::Xml::XmlNodeType nodeType;
		int32_t lineNo;
		int32_t linePos;
		void _ctor();
		void _ctor(System_Xml::System::Xml::XmlNodeType nodeType);
		mscorlib::System::String* get_LocalName();
		void set_LocalName(mscorlib::System::String* value);
		mscorlib::System::String* get_Namespace();
		void set_Namespace(mscorlib::System::String* value);
		mscorlib::System::String* get_Prefix();
		void set_Prefix(mscorlib::System::String* value);
		mscorlib::System::String* GetAtomizedNameWPrefix(System_Xml::System::Xml::XmlNameTable* nameTable);
		int32_t get_Depth();
		void set_Depth(int32_t value);
		mscorlib::System::String* get_RawValue();
		void set_RawValue(mscorlib::System::String* value);
		mscorlib::System::String* get_OriginalStringValue();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		void set_NodeType(System_Xml::System::Xml::XmlNodeType value);
		System_Xml::System::Xml::AttributePSVIInfo* get_AttInfo();
		void set_AttInfo(System_Xml::System::Xml::AttributePSVIInfo* value);
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		void Clear(System_Xml::System::Xml::XmlNodeType nodeType);
		void SetLineInfo(int32_t lineNo, int32_t linePos);
		void SetLineInfo(System_Xml::System::Xml::IXmlLineInfo* lineInfo);
		void SetItemData(mscorlib::System::String* localName, mscorlib::System::String* prefix, mscorlib::System::String* ns, int32_t depth);
		void SetItemData(mscorlib::System::String* value);
		void SetItemData(mscorlib::System::String* value, mscorlib::System::String* originalStringValue);
	};
}

