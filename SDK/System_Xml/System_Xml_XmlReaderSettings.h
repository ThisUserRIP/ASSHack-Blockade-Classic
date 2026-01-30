#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct XmlResolver; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_ConformanceLevel.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Xml_DtdProcessing.h"
#include "System_Xml_ValidationType.h"
#include "System_Xml_Schema_XmlSchemaValidationFlags.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSet; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace mscorlib::System::IO { struct Stream; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlParserContext; };
namespace mscorlib::System::IO { struct TextReader; };
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl; };

namespace System_Xml::System::Xml
{
	struct XmlReaderSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useAsync;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		int32_t lineNumberOffset;
		int32_t linePositionOffset;
		System_Xml::System::Xml::ConformanceLevel conformanceLevel;
		bool checkCharacters;
		int64_t maxCharactersInDocument;
		int64_t maxCharactersFromEntities;
		bool ignoreWhitespace;
		bool ignorePIs;
		bool ignoreComments;
		System_Xml::System::Xml::DtdProcessing dtdProcessing;
		System_Xml::System::Xml::ValidationType validationType;
		System_Xml::System::Xml::Schema::XmlSchemaValidationFlags validationFlags;
		System_Xml::System::Xml::Schema::XmlSchemaSet* schemas;
		System_Xml::System::Xml::Schema::ValidationEventHandler* valEventHandler;
		bool closeInput;
		bool isReadOnly;
		bool _IsXmlResolverSet_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::Nullable_1<mscorlib::System::Boolean> s_enableLegacyXmlSettings;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		bool get_Async();
		void set_Async(bool value);
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		void set_NameTable(System_Xml::System::Xml::XmlNameTable* value);
		bool get_IsXmlResolverSet();
		void set_IsXmlResolverSet(bool value);
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		System_Xml::System::Xml::XmlResolver* GetXmlResolver();
		System_Xml::System::Xml::XmlResolver* GetXmlResolver_CheckConfig();
		int32_t get_LineNumberOffset();
		void set_LineNumberOffset(int32_t value);
		int32_t get_LinePositionOffset();
		void set_LinePositionOffset(int32_t value);
		System_Xml::System::Xml::ConformanceLevel get_ConformanceLevel();
		void set_ConformanceLevel(System_Xml::System::Xml::ConformanceLevel value);
		bool get_CheckCharacters();
		void set_CheckCharacters(bool value);
		int64_t get_MaxCharactersInDocument();
		void set_MaxCharactersInDocument(int64_t value);
		int64_t get_MaxCharactersFromEntities();
		void set_MaxCharactersFromEntities(int64_t value);
		bool get_IgnoreWhitespace();
		void set_IgnoreWhitespace(bool value);
		bool get_IgnoreProcessingInstructions();
		void set_IgnoreProcessingInstructions(bool value);
		bool get_IgnoreComments();
		void set_IgnoreComments(bool value);
		System_Xml::System::Xml::DtdProcessing get_DtdProcessing();
		void set_DtdProcessing(System_Xml::System::Xml::DtdProcessing value);
		bool get_CloseInput();
		void set_CloseInput(bool value);
		System_Xml::System::Xml::ValidationType get_ValidationType();
		void set_ValidationType(System_Xml::System::Xml::ValidationType value);
		System_Xml::System::Xml::Schema::XmlSchemaValidationFlags get_ValidationFlags();
		void set_ValidationFlags(System_Xml::System::Xml::Schema::XmlSchemaValidationFlags value);
		System_Xml::System::Xml::Schema::XmlSchemaSet* get_Schemas();
		void set_Schemas(System_Xml::System::Xml::Schema::XmlSchemaSet* value);
		System_Xml::System::Xml::XmlReaderSettings* Clone();
		System_Xml::System::Xml::Schema::ValidationEventHandler* GetEventHandler();
		System_Xml::System::Xml::XmlReader* CreateReader(mscorlib::System::IO::Stream* input, System::System::Uri* baseUri, mscorlib::System::String* baseUriString, System_Xml::System::Xml::XmlParserContext* inputContext);
		System_Xml::System::Xml::XmlReader* CreateReader(mscorlib::System::IO::TextReader* input, mscorlib::System::String* baseUriString, System_Xml::System::Xml::XmlParserContext* inputContext);
		void set_ReadOnly(bool value);
		void CheckReadOnly(mscorlib::System::String* propertyName);
		void Initialize();
		void Initialize(System_Xml::System::Xml::XmlResolver* resolver);
		static System_Xml::System::Xml::XmlResolver* CreateDefaultResolver();
		System_Xml::System::Xml::XmlReader* AddValidation(System_Xml::System::Xml::XmlReader* reader);
		System_Xml::System::Xml::XmlValidatingReaderImpl* CreateDtdValidatingReader(System_Xml::System::Xml::XmlReader* baseReader);
		static bool EnableLegacyXmlSettings();
	};
}

