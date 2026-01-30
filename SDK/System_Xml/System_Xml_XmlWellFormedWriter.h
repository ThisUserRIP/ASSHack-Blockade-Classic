#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlWriter.h"
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace System_Xml::System::Xml { struct XmlRawWriter; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "System_Xml_XmlWellFormedWriter_Namespace.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter_Namespace; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_XmlWellFormedWriter_ElementScope.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter_ElementScope; };
#include "System_Xml_XmlWellFormedWriter_AttrName.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter_AttrName; };
#include "System_Xml_XmlWellFormedWriter_SpecialAttribute.h"
namespace System_Xml::System::Xml { struct XmlWellFormedWriter_AttributeValueCache; };
#include "System_Xml_XmlWellFormedWriter_State.h"
#include "System_Xml_ConformanceLevel.h"
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
namespace System_Xml::System::Xml { struct SecureStringHasher; };
#include "System_Xml_WriteState.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_XmlStandalone.h"
#include "System_Xml_XmlWellFormedWriter_NamespaceKind.h"
namespace System_Xml::System::Xml { struct XmlException; };
#include "System_Xml_XmlWellFormedWriter_Token.h"
namespace mscorlib::System { struct Exception; };

namespace System_Xml::System::Xml
{
	struct XmlWellFormedWriter : System_Xml::System::Xml::XmlWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlWriter* writer;
		System_Xml::System::Xml::XmlRawWriter* rawWriter;
		System_Xml::System::Xml::IXmlNamespaceResolver* predefinedNamespaces;
		IL2CPP::Array<System_Xml::System::Xml::XmlWellFormedWriter_Namespace>* nsStack;
		int32_t nsTop;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* nsHashtable;
		bool useNsHashtable;
		IL2CPP::Array<System_Xml::System::Xml::XmlWellFormedWriter_ElementScope>* elemScopeStack;
		int32_t elemTop;
		IL2CPP::Array<System_Xml::System::Xml::XmlWellFormedWriter_AttrName>* attrStack;
		int32_t attrCount;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* attrHashTable;
		System_Xml::System::Xml::XmlWellFormedWriter_SpecialAttribute specAttr;
		System_Xml::System::Xml::XmlWellFormedWriter_AttributeValueCache* attrValueCache;
		mscorlib::System::String* curDeclPrefix;
		IL2CPP::Array<System_Xml::System::Xml::XmlWellFormedWriter_State>* stateTable;
		System_Xml::System::Xml::XmlWellFormedWriter_State currentState;
		bool checkCharacters;
		bool omitDuplNamespaces;
		bool writeEndDocumentOnClose;
		System_Xml::System::Xml::ConformanceLevel conformanceLevel;
		bool dtdWritten;
		bool xmlDeclFollows;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		System_Xml::System::Xml::SecureStringHasher* hasher;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* stateName;
			IL2CPP::Array<mscorlib::System::String*>* tokenName;
			IL2CPP::Array<System_Xml::System::Xml::WriteState>* state2WriteState;
			IL2CPP::Array<System_Xml::System::Xml::XmlWellFormedWriter_State>* StateTableDocument;
			IL2CPP::Array<System_Xml::System::Xml::XmlWellFormedWriter_State>* StateTableAuto;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlWriter* writer, System_Xml::System::Xml::XmlWriterSettings* settings);
		System_Xml::System::Xml::WriteState get_WriteState();
		void WriteStartDocument();
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndElement();
		void WriteFullEndElement();
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceName);
		void WriteEndAttribute();
		void WriteCData(mscorlib::System::String* text);
		void WriteComment(mscorlib::System::String* text);
		void WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* text);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void WriteBase64(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void Close();
		void Flush();
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* ns);
		void WriteValue(bool value);
		void WriteValue(mscorlib::System::DateTime value);
		void WriteValue(double value);
		void WriteValue(float value);
		void WriteValue(mscorlib::System::Decimal value);
		void WriteValue(int32_t value);
		void WriteValue(int64_t value);
		void WriteValue(mscorlib::System::String* value);
		void WriteValue(mscorlib::System::Object* value);
		void WriteBinHex(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		System_Xml::System::Xml::XmlRawWriter* get_RawWriter();
		bool get_SaveAttrValue();
		bool get_InBase64();
		void SetSpecialAttribute(System_Xml::System::Xml::XmlWellFormedWriter_SpecialAttribute special);
		void WriteStartDocumentImpl(System_Xml::System::Xml::XmlStandalone standalone);
		void StartFragment();
		void PushNamespaceImplicit(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		bool PushNamespaceExplicit(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		void AddNamespace(mscorlib::System::String* prefix, mscorlib::System::String* ns, System_Xml::System::Xml::XmlWellFormedWriter_NamespaceKind kind);
		void AddToNamespaceHashtable(int32_t namespaceIndex);
		int32_t LookupNamespaceIndex(mscorlib::System::String* prefix);
		void PopNamespaces(int32_t indexFrom, int32_t indexTo);
		static System_Xml::System::Xml::XmlException* DupAttrException(mscorlib::System::String* prefix, mscorlib::System::String* localName);
		void AdvanceState(System_Xml::System::Xml::XmlWellFormedWriter_Token token);
		void StartElementContent();
		static mscorlib::System::String* GetStateName(System_Xml::System::Xml::XmlWellFormedWriter_State state);
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* LookupLocalNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* GeneratePrefix();
		void CheckNCName(mscorlib::System::String* ncname);
		static mscorlib::System::Exception* InvalidCharsException(mscorlib::System::String* name, int32_t badCharIndex);
		void ThrowInvalidStateTransition(System_Xml::System::Xml::XmlWellFormedWriter_Token token, System_Xml::System::Xml::XmlWellFormedWriter_State currentState);
		bool get_IsClosedOrErrorState();
		void AddAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* namespaceName);
		void AddToAttrHashTable(int32_t attributeIndex);
		static void _cctor();
	};
}

