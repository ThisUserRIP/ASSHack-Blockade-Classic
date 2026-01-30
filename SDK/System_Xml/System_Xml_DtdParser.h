#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct IDtdParserAdapter; };
namespace System_Xml::System::Xml { struct IDtdParserAdapterWithValidation; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_DtdParser_ScanningFunction.h"
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Xml_LineInfo.h"
namespace System_Xml::System::Xml { struct LineInfo; };
namespace System_Xml::System::Xml { struct DtdParser_UndeclaredNotation; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct IDtdParser; };
namespace System_Xml::System::Xml { struct IDtdInfo; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
namespace System_Xml::System::Xml::Schema { struct ParticleContentValidator; };
#include "System_Xml_DtdParser_Token.h"
#include "System_Xml_DtdParser_LiteralType.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct SchemaEntity; };
#include "System_Xml_Schema_XmlSeverityType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaException; };

namespace System_Xml::System::Xml
{
	struct DtdParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::IDtdParserAdapter* readerAdapter;
		System_Xml::System::Xml::IDtdParserAdapterWithValidation* readerAdapterWithValidation;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		mscorlib::System::String* systemId;
		mscorlib::System::String* publicId;
		bool normalize;
		bool validate;
		bool supportNamespaces;
		bool v1Compat;
		IL2CPP::Array<wchar_t>* chars;
		int32_t charsUsed;
		int32_t curPos;
		System_Xml::System::Xml::DtdParser_ScanningFunction scanningFunction;
		System_Xml::System::Xml::DtdParser_ScanningFunction nextScaningFunction;
		System_Xml::System::Xml::DtdParser_ScanningFunction savedScanningFunction;
		bool whitespaceSeen;
		int32_t tokenStartPos;
		int32_t colonPos;
		mscorlib::System::Text::StringBuilder* internalSubsetValueSb;
		int32_t externalEntitiesDepth;
		int32_t currentEntityId;
		bool freeFloatingDtd;
		bool hasFreeFloatingInternalSubset;
		mscorlib::System::Text::StringBuilder* stringBuilder;
		int32_t condSectionDepth;
		System_Xml::System::Xml::LineInfo literalLineInfo;
		wchar_t literalQuoteChar;
		mscorlib::System::String* documentBaseUri;
		mscorlib::System::String* externalDtdBaseUri;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, System_Xml::System::Xml::DtdParser_UndeclaredNotation>* undeclaredNotations;
		IL2CPP::Array<int32_t>* condSectionEntityIds;
		void _ctor();
		static System_Xml::System::Xml::IDtdParser* Create();
		void Initialize(System_Xml::System::Xml::IDtdParserAdapter* readerAdapter);
		void InitializeFreeFloatingDtd(mscorlib::System::String* baseUri, mscorlib::System::String* docTypeName, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset, System_Xml::System::Xml::IDtdParserAdapter* adapter);
		System_Xml::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseInternalDtd(System_Xml::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset);
		System_Xml::System::Xml::IDtdInfo* System_Xml_IDtdParser_ParseFreeFloatingDtd(mscorlib::System::String* baseUri, mscorlib::System::String* docTypeName, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset, System_Xml::System::Xml::IDtdParserAdapter* adapter);
		bool get_ParsingInternalSubset();
		bool get_IgnoreEntityReferences();
		bool get_SaveInternalSubsetValue();
		bool get_ParsingTopLevelMarkup();
		bool get_SupportNamespaces();
		bool get_Normalize();
		void Parse(bool saveInternalSubset);
		void ParseInDocumentDtd(bool saveInternalSubset);
		void ParseFreeFloatingDtd();
		void ParseInternalSubset();
		void ParseExternalSubset();
		void ParseSubset();
		void ParseAttlistDecl();
		void ParseAttlistType(System_Xml::System::Xml::Schema::SchemaAttDef* attrDef, System_Xml::System::Xml::Schema::SchemaElementDecl* elementDecl, bool ignoreErrors);
		void ParseAttlistDefault(System_Xml::System::Xml::Schema::SchemaAttDef* attrDef, bool ignoreErrors);
		void ParseElementDecl();
		void ParseElementOnlyContent(System_Xml::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId);
		void ParseHowMany(System_Xml::System::Xml::Schema::ParticleContentValidator* pcv);
		void ParseElementMixedContent(System_Xml::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId);
		void ParseEntityDecl();
		void ParseNotationDecl();
		void AddUndeclaredNotation(mscorlib::System::String* notationName);
		void ParseComment();
		void ParsePI();
		void ParseCondSection();
		void ParseExternalId(System_Xml::System::Xml::DtdParser_Token idTokenType, System_Xml::System::Xml::DtdParser_Token declType, mscorlib::System::String& publicId, mscorlib::System::String& systemId);
		System_Xml::System::Xml::DtdParser_Token GetToken(bool needWhiteSpace);
		System_Xml::System::Xml::DtdParser_Token ScanSubsetContent();
		System_Xml::System::Xml::DtdParser_Token ScanNameExpected();
		System_Xml::System::Xml::DtdParser_Token ScanQNameExpected();
		System_Xml::System::Xml::DtdParser_Token ScanNmtokenExpected();
		System_Xml::System::Xml::DtdParser_Token ScanDoctype1();
		System_Xml::System::Xml::DtdParser_Token ScanDoctype2();
		System_Xml::System::Xml::DtdParser_Token ScanClosingTag();
		System_Xml::System::Xml::DtdParser_Token ScanElement1();
		System_Xml::System::Xml::DtdParser_Token ScanElement2();
		System_Xml::System::Xml::DtdParser_Token ScanElement3();
		System_Xml::System::Xml::DtdParser_Token ScanElement4();
		System_Xml::System::Xml::DtdParser_Token ScanElement5();
		System_Xml::System::Xml::DtdParser_Token ScanElement6();
		System_Xml::System::Xml::DtdParser_Token ScanElement7();
		System_Xml::System::Xml::DtdParser_Token ScanAttlist1();
		System_Xml::System::Xml::DtdParser_Token ScanAttlist2();
		System_Xml::System::Xml::DtdParser_Token ScanAttlist3();
		System_Xml::System::Xml::DtdParser_Token ScanAttlist4();
		System_Xml::System::Xml::DtdParser_Token ScanAttlist5();
		System_Xml::System::Xml::DtdParser_Token ScanAttlist6();
		System_Xml::System::Xml::DtdParser_Token ScanAttlist7();
		System_Xml::System::Xml::DtdParser_Token ScanLiteral(System_Xml::System::Xml::DtdParser_LiteralType literalType);
		System_Xml::System::Xml::XmlQualifiedName* ScanEntityName();
		System_Xml::System::Xml::DtdParser_Token ScanNotation1();
		System_Xml::System::Xml::DtdParser_Token ScanSystemId();
		System_Xml::System::Xml::DtdParser_Token ScanEntity1();
		System_Xml::System::Xml::DtdParser_Token ScanEntity2();
		System_Xml::System::Xml::DtdParser_Token ScanEntity3();
		System_Xml::System::Xml::DtdParser_Token ScanPublicId1();
		System_Xml::System::Xml::DtdParser_Token ScanPublicId2();
		System_Xml::System::Xml::DtdParser_Token ScanCondSection1();
		System_Xml::System::Xml::DtdParser_Token ScanCondSection2();
		System_Xml::System::Xml::DtdParser_Token ScanCondSection3();
		void ScanName();
		void ScanQName();
		void ScanQName(bool isQName);
		bool ReadDataInName();
		void ScanNmtoken();
		bool EatPublicKeyword();
		bool EatSystemKeyword();
		System_Xml::System::Xml::XmlQualifiedName* GetNameQualified(bool canHavePrefix);
		mscorlib::System::String* GetNameString();
		mscorlib::System::String* GetNmtokenString();
		mscorlib::System::String* GetValue();
		mscorlib::System::String* GetValueWithStrippedSpaces();
		int32_t ReadData();
		void LoadParsingBuffer();
		void SaveParsingBuffer();
		void SaveParsingBuffer(int32_t internalSubsetValueEndPos);
		bool HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute);
		bool HandleEntityReference(System_Xml::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool inLiteral, bool inAttribute);
		bool HandleEntityEnd(bool inLiteral);
		System_Xml::System::Xml::Schema::SchemaEntity* VerifyEntityReference(System_Xml::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute);
		void SendValidationEvent(int32_t pos, System_Xml::System::Xml::Schema::XmlSeverityType severity, mscorlib::System::String* code, mscorlib::System::String* arg);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSeverityType severity, mscorlib::System::String* code, mscorlib::System::String* arg);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSeverityType severity, System_Xml::System::Xml::Schema::XmlSchemaException* e);
		bool IsAttributeValueType(System_Xml::System::Xml::DtdParser_Token token);
		int32_t get_LineNo();
		int32_t get_LinePos();
		mscorlib::System::String* get_BaseUriStr();
		void OnUnexpectedError();
		void Throw(int32_t curPos, mscorlib::System::String* res);
		void Throw(int32_t curPos, mscorlib::System::String* res, mscorlib::System::String* arg);
		void Throw(int32_t curPos, mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args);
		void Throw(mscorlib::System::String* res, mscorlib::System::String* arg, int32_t lineNo, int32_t linePos);
		void ThrowInvalidChar(int32_t pos, mscorlib::System::String* data, int32_t invCharPos);
		void ThrowInvalidChar(IL2CPP::Array<wchar_t>* data, int32_t length, int32_t invCharPos);
		void ThrowUnexpectedToken(int32_t pos, mscorlib::System::String* expectedToken);
		void ThrowUnexpectedToken(int32_t pos, mscorlib::System::String* expectedToken1, mscorlib::System::String* expectedToken2);
		mscorlib::System::String* ParseUnexpectedToken(int32_t startPos);
		static mscorlib::System::String* StripSpaces(mscorlib::System::String* value);
	};
}

