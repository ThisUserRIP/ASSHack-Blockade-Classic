#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System_Xml::System::Xml { struct IDtdEntityInfo; };
namespace mscorlib::System { struct String; };
#include "System_Xml_LineInfo.h"
namespace System_Xml::System::Xml { struct LineInfo; };
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml
{
	struct IDtdParserAdapter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		System_Xml::System::Xml::IXmlNamespaceResolver* get_NamespaceResolver();
		System::System::Uri* get_BaseUri();
		IL2CPP::Array<wchar_t>* get_ParsingBuffer();
		int32_t get_ParsingBufferLength();
		int32_t get_CurrentPosition();
		void set_CurrentPosition(int32_t value);
		int32_t get_LineNo();
		int32_t get_LineStartPosition();
		bool get_IsEof();
		int32_t get_EntityStackLength();
		bool get_IsEntityEolNormalized();
		int32_t ReadData();
		void OnNewLine(int32_t pos);
		int32_t ParseNumericCharRef(mscorlib::System::Text::StringBuilder* internalSubsetBuilder);
		int32_t ParseNamedCharRef(bool expand, mscorlib::System::Text::StringBuilder* internalSubsetBuilder);
		void ParsePI(mscorlib::System::Text::StringBuilder* sb);
		void ParseComment(mscorlib::System::Text::StringBuilder* sb);
		bool PushEntity(System_Xml::System::Xml::IDtdEntityInfo* entity, int32_t& entityId);
		bool PopEntity(System_Xml::System::Xml::IDtdEntityInfo& oldEntity, int32_t& newEntityId);
		bool PushExternalSubset(mscorlib::System::String* systemId, mscorlib::System::String* publicId);
		void PushInternalDtd(mscorlib::System::String* baseUri, mscorlib::System::String* internalDtd);
		void OnSystemId(mscorlib::System::String* systemId, System_Xml::System::Xml::LineInfo keywordLineInfo, System_Xml::System::Xml::LineInfo systemLiteralLineInfo);
		void OnPublicId(mscorlib::System::String* publicId, System_Xml::System::Xml::LineInfo keywordLineInfo, System_Xml::System::Xml::LineInfo publicLiteralLineInfo);
		void Throw(mscorlib::System::Exception* e);
	};
}

