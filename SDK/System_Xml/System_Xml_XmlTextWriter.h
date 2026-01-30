#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlWriter.h"
namespace mscorlib::System::IO { struct TextWriter; };
namespace System_Xml::System::Xml { struct XmlTextEncoder; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Xml_Formatting.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Xml_XmlTextWriter_TagInfo.h"
namespace System_Xml::System::Xml { struct XmlTextWriter_TagInfo; };
#include "System_Xml_XmlTextWriter_State.h"
#include "System_Xml_XmlTextWriter_Token.h"
namespace System_Xml::System::Xml { struct XmlTextWriterBase64Encoder; };
#include "System_Xml_XmlTextWriter_SpecialAttr.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlTextWriter_Namespace.h"
namespace System_Xml::System::Xml { struct XmlTextWriter_Namespace; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Xml_WriteState.h"

namespace System_Xml::System::Xml
{
	struct XmlTextWriter : System_Xml::System::Xml::XmlWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::TextWriter* textWriter;
		System_Xml::System::Xml::XmlTextEncoder* xmlEncoder;
		mscorlib::System::Text::Encoding* encoding;
		System_Xml::System::Xml::Formatting formatting;
		bool indented;
		int32_t indentation;
		wchar_t indentChar;
		IL2CPP::Array<System_Xml::System::Xml::XmlTextWriter_TagInfo>* stack;
		int32_t top;
		IL2CPP::Array<System_Xml::System::Xml::XmlTextWriter_State>* stateTable;
		System_Xml::System::Xml::XmlTextWriter_State currentState;
		System_Xml::System::Xml::XmlTextWriter_Token lastToken;
		System_Xml::System::Xml::XmlTextWriterBase64Encoder* base64Encoder;
		wchar_t quoteChar;
		wchar_t curQuoteChar;
		bool namespaces;
		System_Xml::System::Xml::XmlTextWriter_SpecialAttr specialAttr;
		mscorlib::System::String* prefixForXmlNs;
		bool flush;
		IL2CPP::Array<System_Xml::System::Xml::XmlTextWriter_Namespace>* nsStack;
		int32_t nsTop;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* nsHashtable;
		bool useNsHashtable;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* stateName;
			IL2CPP::Array<mscorlib::System::String*>* tokenName;
			IL2CPP::Array<System_Xml::System::Xml::XmlTextWriter_State>* stateTableDefault;
			IL2CPP::Array<System_Xml::System::Xml::XmlTextWriter_State>* stateTableDocument;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::IO::Stream* w, mscorlib::System::Text::Encoding* encoding);
		void _ctor(mscorlib::System::IO::TextWriter* w);
		void set_Formatting(System_Xml::System::Xml::Formatting value);
		void WriteStartDocument();
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndElement();
		void WriteFullEndElement();
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndAttribute();
		void WriteCData(mscorlib::System::String* text);
		void WriteComment(mscorlib::System::String* text);
		void WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* text);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void WriteBase64(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void WriteBinHex(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		System_Xml::System::Xml::WriteState get_WriteState();
		void Close();
		void Flush();
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* ns);
		void StartDocument(int32_t standalone);
		void AutoComplete(System_Xml::System::Xml::XmlTextWriter_Token token);
		void AutoCompleteAll();
		void InternalWriteEndElement(bool longFormat);
		void WriteEndStartTag(bool empty);
		void WriteEndAttributeQuote();
		void Indent(bool beforeEndElement);
		void PushNamespace(mscorlib::System::String* prefix, mscorlib::System::String* ns, bool declared);
		void AddNamespace(mscorlib::System::String* prefix, mscorlib::System::String* ns, bool declared);
		void AddToNamespaceHashtable(int32_t namespaceIndex);
		void PopNamespaces(int32_t indexFrom, int32_t indexTo);
		mscorlib::System::String* GeneratePrefix();
		void InternalWriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		int32_t LookupNamespace(mscorlib::System::String* prefix);
		int32_t LookupNamespaceInCurrentScope(mscorlib::System::String* prefix);
		mscorlib::System::String* FindPrefix(mscorlib::System::String* ns);
		void ValidateName(mscorlib::System::String* name, bool isNCName);
		void HandleSpecialAttribute();
		void VerifyPrefixXml(mscorlib::System::String* prefix, mscorlib::System::String* ns);
		void PushStack();
		void FlushEncoders();
		static void _cctor();
	};
}

