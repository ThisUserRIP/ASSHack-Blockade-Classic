#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlTextReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System_Xml::System::Xml { struct IDtdEntityInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
#include "System_Xml_LineInfo.h"
namespace System_Xml::System::Xml { struct LineInfo; };
namespace System_Xml::System::Xml { struct IValidationEventHandling; };

namespace System_Xml::System::Xml
{
	struct XmlTextReaderImpl_DtdParserProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlTextReaderImpl* reader;
		void _ctor(System_Xml::System::Xml::XmlTextReaderImpl* reader);
		System_Xml::System::Xml::XmlNameTable* System_Xml_IDtdParserAdapter_get_NameTable();
		System_Xml::System::Xml::IXmlNamespaceResolver* System_Xml_IDtdParserAdapter_get_NamespaceResolver();
		System::System::Uri* System_Xml_IDtdParserAdapter_get_BaseUri();
		bool System_Xml_IDtdParserAdapter_get_IsEof();
		IL2CPP::Array<wchar_t>* System_Xml_IDtdParserAdapter_get_ParsingBuffer();
		int32_t System_Xml_IDtdParserAdapter_get_ParsingBufferLength();
		int32_t System_Xml_IDtdParserAdapter_get_CurrentPosition();
		void System_Xml_IDtdParserAdapter_set_CurrentPosition(int32_t value);
		int32_t System_Xml_IDtdParserAdapter_get_EntityStackLength();
		bool System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized();
		void System_Xml_IDtdParserAdapter_OnNewLine(int32_t pos);
		int32_t System_Xml_IDtdParserAdapter_get_LineNo();
		int32_t System_Xml_IDtdParserAdapter_get_LineStartPosition();
		int32_t System_Xml_IDtdParserAdapter_ReadData();
		int32_t System_Xml_IDtdParserAdapter_ParseNumericCharRef(mscorlib::System::Text::StringBuilder* internalSubsetBuilder);
		int32_t System_Xml_IDtdParserAdapter_ParseNamedCharRef(bool expand, mscorlib::System::Text::StringBuilder* internalSubsetBuilder);
		void System_Xml_IDtdParserAdapter_ParsePI(mscorlib::System::Text::StringBuilder* sb);
		void System_Xml_IDtdParserAdapter_ParseComment(mscorlib::System::Text::StringBuilder* sb);
		bool System_Xml_IDtdParserAdapter_PushEntity(System_Xml::System::Xml::IDtdEntityInfo* entity, int32_t& entityId);
		bool System_Xml_IDtdParserAdapter_PopEntity(System_Xml::System::Xml::IDtdEntityInfo& oldEntity, int32_t& newEntityId);
		bool System_Xml_IDtdParserAdapter_PushExternalSubset(mscorlib::System::String* systemId, mscorlib::System::String* publicId);
		void System_Xml_IDtdParserAdapter_PushInternalDtd(mscorlib::System::String* baseUri, mscorlib::System::String* internalDtd);
		void System_Xml_IDtdParserAdapter_Throw(mscorlib::System::Exception* e);
		void System_Xml_IDtdParserAdapter_OnSystemId(mscorlib::System::String* systemId, System_Xml::System::Xml::LineInfo keywordLineInfo, System_Xml::System::Xml::LineInfo systemLiteralLineInfo);
		void System_Xml_IDtdParserAdapter_OnPublicId(mscorlib::System::String* publicId, System_Xml::System::Xml::LineInfo keywordLineInfo, System_Xml::System::Xml::LineInfo publicLiteralLineInfo);
		bool System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation();
		System_Xml::System::Xml::IValidationEventHandling* System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling();
		bool System_Xml_IDtdParserAdapterV1_get_Normalization();
		bool System_Xml_IDtdParserAdapterV1_get_Namespaces();
		bool System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode();
	};
}

